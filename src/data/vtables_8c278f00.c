/* Static data 8c278f00-8c278f1c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c22f4b8(void);
extern void fn_8c22f4fc(void);
extern void fn_8c22fb5c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c278f00: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278f00[7] = {
    0,
    0,
    destroy_object_8c22f4b8,
    fn_8c22f4fc,
    fn_8c22fb5c,
    operation_8c0111cc,
    hierarchy_output
};
