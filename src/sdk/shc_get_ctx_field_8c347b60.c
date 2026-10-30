/* SDK pool group 0x8c347b60-0x8c347ba0 (Hitachi SHC): reads a context field,
   reporting error 0xd000001 when no context exists. */
typedef struct Context {
    char unknown0[0x78];
    int value;
} Context;

extern Context *g_context_8c3fac48;
extern void report_error_8c346118(int, int);

int get_context_value_8c347b60(int *out)
{
    int error = 0;
    if (!g_context_8c3fac48) {
        error = 0xd000001;
        goto done;
    }
    *out = g_context_8c3fac48->value;
done:
    if (error) report_error_8c346118((int)get_context_value_8c347b60, error);
    return error;
}
