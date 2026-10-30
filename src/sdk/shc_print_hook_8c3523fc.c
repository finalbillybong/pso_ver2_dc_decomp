/* SDK pool group 0x8c3523fc-0x8c352464 (Hitachi SHC): installs a print hook
   and formats a message into the shared buffer for it. The variable-argument
   pointer is computed as SHC's stdarg.h va_start does. */
typedef char *va_list;

extern void (*g_hook_8c3fb478)(int argument, char *text);
extern int g_hook_arg_8c3fb47c;
extern char g_print_buffer_8c5365e0[];
extern int vsprintf(char *buffer, const char *format, va_list arguments);

void set_print_hook_8c3523fc(void (*hook)(int argument, char *text), int argument)
{
    if (!hook) {
        g_hook_8c3fb478 = 0;
        g_hook_arg_8c3fb47c = 0;
        return;
    }
    g_hook_8c3fb478 = hook;
    g_hook_arg_8c3fb47c = argument;
}

void print_8c352414(const char *format, ...)
{
    va_list arguments;
    arguments = ((int)((char *)&format + sizeof(format)) & 3)
        ? (char *)&format + sizeof(format) + 4 : (char *)&format + sizeof(format);
    vsprintf(g_print_buffer_8c5365e0, format, arguments);
    if (g_hook_8c3fb478) g_hook_8c3fb478(g_hook_arg_8c3fb47c, g_print_buffer_8c5365e0);
}
