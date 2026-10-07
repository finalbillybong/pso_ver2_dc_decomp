// Explicit known code entries before bounded automatic analysis.
// @category PSO
import ghidra.app.script.GhidraScript;
public class SeedPso extends GhidraScript {
    public void run() throws Exception {
        for (String value : getScriptArgs()) {
            var address = toAddr(value);
            disassemble(address);
            if (getFunctionAt(address) == null) createFunction(address, null);
        }
    }
}
