/* Static data 8c4001f8-8c400208: function_table objects, in address order. */

typedef void (*Function)(void);

extern void fn_8c3be540(void);
extern void fn_8c3be5ee(void);
extern void fn_8c3be4a4(void);

Function const d_8c4001f8[2] = {
    fn_8c3be540,
    fn_8c3be5ee
};

Function const d_8c400200[2] = {
    fn_8c3be4a4,
    0
};
