/* SDK pool group 0x8c346118-0x8c346148 (Hitachi SHC): records two values and
   forwards them to the context callback, if any. */
typedef struct Context {
    char unknown0[0x438];
    void (*callback)(int, int, int);
} Context;

extern int g_value_a_8c3fac40, g_value_b_8c3fac44;
extern Context *g_context_8c3fac48;

void set_values_8c346118(int a, int b)
{
    Context *context;
    g_value_a_8c3fac40 = a;
    g_value_b_8c3fac44 = b;
    context = g_context_8c3fac48;
    if (context->callback) context->callback(a, b, 0);
}
