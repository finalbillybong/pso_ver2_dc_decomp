/* Static data 8c266f08-8c266f24: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0d0bac(void);
extern void fn_8c0d0bf0(void);
extern void fn_8c0d0d84(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c266f08: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266f08[7] = {
    0,
    0,
    destroy_object_8c0d0bac,
    fn_8c0d0bf0,
    fn_8c0d0d84,
    operation_8c0111cc,
    hierarchy_output
};
