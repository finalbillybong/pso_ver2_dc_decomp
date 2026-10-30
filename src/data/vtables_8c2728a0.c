/* Static data 8c2728a0-8c2728f8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_195570(void);
extern void operation_1955b4(void);
extern void fn_8c1956d0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void reconstruct_8c1974c0(void);
extern void operation_8c197514(void);
extern void fn_8c1975f0(void);
extern void operation_8c0dc63c(void);
extern void destroy_object_8c19835c(void);
extern void fn_8c1983a0(void);
extern void fn_8c198458(void);

/* 8c2728a0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2728a0[7] = {
    0,
    0,
    operation_195570,
    operation_1955b4,
    fn_8c1956d0,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2728bc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2728bc[8] = {
    0,
    0,
    reconstruct_8c1974c0,
    operation_8c197514,
    fn_8c1975f0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c2728dc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2728dc[7] = {
    0,
    0,
    destroy_object_8c19835c,
    fn_8c1983a0,
    fn_8c198458,
    operation_8c0111cc,
    hierarchy_output
};
