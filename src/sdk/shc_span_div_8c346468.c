/* SDK pool group 0x8c346468-0x8c3464c0 (Hitachi SHC): span divided by a 16-unit
   step, reporting 0x0d000001 when the subsystem is not ready. */
extern int g_ready_8c3fac48;
extern void register_8c346118(int (*owner)(int, int, int, int *), int status);

int span_div_8c346468(int start, int end, int step, int *out)
{
    int status = 0;
    if (!g_ready_8c3fac48) {
        status = 0xd000001;
        goto done;
    }
    start = end - start;
    *out = start / (step / 16);
done:
    if (status) register_8c346118(span_div_8c346468, status);
    return status;
}
