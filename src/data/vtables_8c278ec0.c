/* Static data 8c278ec0-8c278ee0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c22ebb4(void);
extern void operation_8c22ebf8(void);
extern void fn_8c22ec58(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c278ec0: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278ec0[8] = {
    0,
    0,
    destroy_object_8c22ebb4,
    operation_8c22ebf8,
    fn_8c22ec58,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
