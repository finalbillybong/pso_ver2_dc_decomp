/* SDK pool group 0x8c3545cc-0x8c354640 (Hitachi SHC): installs a print hook
   (clearing the 256-byte text buffer) and formats a message for it. The
   variable-argument pointer is computed as SHC's stdarg.h va_start does. */
typedef char *va_list;

extern void (*g_hook_8c3fb580)(int argument, char *text);
extern int g_hook_arg_8c3fb584;
extern char g_text_buffer_8c539878[];
extern void *memset(void *buffer, int value, unsigned int size);
extern int vsprintf(char *buffer, const char *format, va_list arguments);

void set_print_hook_8c3545cc(void (*hook)(int argument, char *text), int argument)
{
    if (!hook) {
        g_hook_8c3fb580 = 0;
        g_hook_arg_8c3fb584 = 0;
    } else {
        g_hook_8c3fb580 = hook;
        g_hook_arg_8c3fb584 = argument;
    }
    memset(g_text_buffer_8c539878, 0, 0x100);
}

void print_8c3545ea(const char *format, ...)
{
    va_list arguments;
    arguments = ((int)((char *)&format + sizeof(format)) & 3)
        ? (char *)&format + sizeof(format) + 4 : (char *)&format + sizeof(format);
    vsprintf(g_text_buffer_8c539878, format, arguments);
    if (g_hook_8c3fb580) g_hook_8c3fb580(g_hook_arg_8c3fb584, g_text_buffer_8c539878);
}
