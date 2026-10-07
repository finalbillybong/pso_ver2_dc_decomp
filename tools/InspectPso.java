// Export analysis evidence to a private scratch directory, never to Git.
// @category PSO
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.LinkedHashSet;

public class InspectPso extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args[0]);
        out.mkdirs();
        for (int n = 1; n < args.length; n++) {
            if (args[n].startsWith("code:")) {
                args[n] = args[n].substring(5);
            }
        }
        try (PrintWriter pw = new PrintWriter(new File(out, "functions.tsv"))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                pw.printf("%s\t%d\t%s%n", f.getEntryPoint(), f.getBody().getNumAddresses(), f.getName());
            }
        }
        try (PrintWriter pw = new PrintWriter(new File(out, "listing.txt"))) {
            for (Instruction i : currentProgram.getListing().getInstructions(true)) {
                pw.printf("%s %s%n", i.getAddress(), i.toString());
            }
        }
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        try (PrintWriter pw = new PrintWriter(new File(out, "selected.c"))) {
            for (int n = 1; n < args.length; n++) {
                Address address = toAddr(args[n]);
                LinkedHashSet<Function> requested = new LinkedHashSet<>();
                for (var ref : getReferencesTo(address)) {
                    pw.println("/* Reference from " + ref.getFromAddress() + " to " + address + " */");
                    Function caller = getFunctionContaining(ref.getFromAddress());
                    if (caller != null) requested.add(caller);
                }
                Function f = getFunctionContaining(address);
                if (f != null) requested.add(f);
                pw.println("/* Requested address " + address + " */");
                for (Function target : requested) {
                    var result = decomp.decompileFunction(target, 45, monitor);
                    if (result.decompileCompleted()) pw.println(result.getDecompiledFunction().getC());
                    else pw.println("/* " + result.getErrorMessage() + " */");
                }
            }
        }
        decomp.dispose();
    }
}
