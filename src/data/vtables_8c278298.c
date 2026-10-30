/* Static data 8c278298-8c2782b8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c215cdc(void);
extern void fn_8c215ffc(void);
extern void fn_8c216840(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c278298: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278298[8] = {
    0,
    0,
    destroy_context_8c215cdc,
    fn_8c215ffc,
    fn_8c216840,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
