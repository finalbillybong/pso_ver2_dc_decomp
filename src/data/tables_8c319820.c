/* Static data 8c319820-8c31984c: function_table, pointer_table objects, in address order. */

typedef void (*Function)(void);

extern void operation_8c04c2a4(void);
extern void fn_8c04c2d4(void);
extern void fn_8c0a1bf8(void);
extern void clear_render_flags(void);
extern void operation_8c0a2a4c(void);
extern void fn_8c0a2b20(void);
extern void operation_8c1beb98(void);
extern void operation_8c1bec20(void);
extern void operation_8c1a4d24(void);
extern void operation_8c1a4d98(void);
extern const char str_8c31984c[];

Function const d_8c319820[10] = {
    operation_8c04c2a4,
    fn_8c04c2d4,
    fn_8c0a1bf8,
    clear_render_flags,
    operation_8c0a2a4c,
    fn_8c0a2b20,
    operation_8c1beb98,
    operation_8c1bec20,
    operation_8c1a4d24,
    operation_8c1a4d98
};

const void *const d_8c319848[1] = {
    str_8c31984c
};
