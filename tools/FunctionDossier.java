// Focused, read-only analysis export. Does not discover or redefine boundaries.
// @category PSO
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import com.google.gson.*;
import java.nio.file.*;

public class FunctionDossier extends GhidraScript {
    private String address(Address a) { return a == null ? null : "0x" + a.toString(); }

    private JsonObject reference(Reference r) {
        JsonObject row = new JsonObject();
        row.addProperty("from", address(r.getFromAddress()));
        row.addProperty("to", address(r.getToAddress()));
        row.addProperty("type", r.getReferenceType().toString());
        row.addProperty("source", r.getSource().toString());
        row.addProperty("operand", r.getOperandIndex());
        row.addProperty("is_call", r.getReferenceType().isCall());
        Function caller = getFunctionContaining(r.getFromAddress());
        Function target = getFunctionAt(r.getToAddress());
        row.addProperty("from_function", caller == null ? null : address(caller.getEntryPoint()));
        row.addProperty("to_function", target == null ? null : address(target.getEntryPoint()));
        return row;
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path out = Paths.get(args[0]);
        Files.createDirectories(out);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            for (int n = 1; n < args.length; n++) {
                String[] spec = args[n].split(",");
                Address start = toAddr(spec[0]);
                int size = Integer.parseInt(spec[1]);
                Address end = start.add(size - 1);
                String stem = start.toString();
                JsonObject dossier = new JsonObject();
                dossier.addProperty("program", currentProgram.getName());
                dossier.addProperty("language", currentProgram.getLanguageID().toString());
                dossier.addProperty("compiler_spec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
                dossier.addProperty("image_base", address(currentProgram.getImageBase()));
                dossier.addProperty("requested_start", address(start));
                dossier.addProperty("requested_end_exclusive", address(end.add(1)));
                dossier.addProperty("boundary_source", "caller-supplied reviewed range; not inferred from Ghidra body size");
                byte[] bytes = new byte[size];
                if (currentProgram.getMemory().getBytes(start, bytes) != size)
                    throw new IllegalStateException("Incomplete memory range");
                Files.write(out.resolve(stem + ".bin"), bytes);
                Function f = getFunctionAt(start);
                JsonArray bodies = new JsonArray();
                if (f != null) {
                    dossier.addProperty("function_name_provisional", f.getName());
                    dossier.addProperty("ghidra_body_bytes", f.getBody().getNumAddresses());
                    for (AddressRange range : f.getBody().getAddressRanges()) {
                        JsonObject row = new JsonObject();
                        row.addProperty("start", address(range.getMinAddress()));
                        row.addProperty("end_exclusive", address(range.getMaxAddress().add(1)));
                        bodies.add(row);
                    }
                    var result = decompiler.decompileFunction(f, 45, monitor);
                    dossier.addProperty("decompilation_completed", result.decompileCompleted());
                    dossier.addProperty("decompilation_error", result.getErrorMessage());
                    if (result.decompileCompleted())
                        Files.writeString(out.resolve(stem + ".pseudo.c"), result.getDecompiledFunction().getC());
                } else {
                    dossier.addProperty("decompilation_completed", false);
                    dossier.addProperty("decompilation_error", "No function defined at the requested entry; no automatic seed applied");
                }
                dossier.add("ghidra_body_ranges", bodies);
                JsonArray incoming = new JsonArray();
                for (Reference r : getReferencesTo(start)) incoming.add(reference(r));
                dossier.add("references_to_entry", incoming);
                JsonArray outgoing = new JsonArray();
                JsonArray instructions = new JsonArray();
                // Include a small adjacent window for boundary review, preserving addresses.
                AddressSet window = new AddressSet(start, end.add(32));
                for (Instruction instruction : currentProgram.getListing().getInstructions(window, true)) {
                    JsonObject row = new JsonObject();
                    row.addProperty("address", address(instruction.getAddress()));
                    row.addProperty("text", instruction.toString());
                    row.addProperty("bytes_hex", java.util.HexFormat.of().formatHex(instruction.getBytes()));
                    row.addProperty("flow_type", instruction.getFlowType().toString());
                    row.addProperty("delay_slot_depth", instruction.getDelaySlotDepth());
                    row.addProperty("inside_comparison_range", instruction.getAddress().compareTo(end) <= 0);
                    JsonArray flows = new JsonArray();
                    for (Address a : instruction.getFlows()) flows.add(address(a));
                    row.add("flows", flows);
                    instructions.add(row);
                    if (instruction.getAddress().compareTo(end) <= 0)
                        for (Reference r : instruction.getReferencesFrom()) outgoing.add(reference(r));
                }
                dossier.add("instructions_with_adjacent_window", instructions);
                dossier.add("references_from_instructions", outgoing);
                dossier.addProperty("limitations", "Ghidra observations only. Computed calls may be unresolved; pseudocode is not original C. Raw bytes and compiler comparisons remain authoritative. No automatic boundary acceptance.");
                Files.writeString(out.resolve(stem + ".json"), new GsonBuilder().setPrettyPrinting().create().toJson(dossier) + "\n");
            }
            println("PSO_DOSSIER_COMPLETE");
        } finally { decompiler.dispose(); }
    }
}
