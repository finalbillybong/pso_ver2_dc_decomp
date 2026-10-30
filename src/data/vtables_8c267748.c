/* Static data 8c267748-8c267768: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c0de9c0(void);
extern void operation_8c0dea50(void);
extern void operation_8c0dec6c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c267748: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c267748[8] = {
    0,
    0,
    operation_8c0de9c0,
    operation_8c0dea50,
    operation_8c0dec6c,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
