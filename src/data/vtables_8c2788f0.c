/* Static data 8c2788f0-8c278928: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c221580(void);
extern void fn_8c2215c4(void);
extern void fn_8c2217e0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c2219f0(void);
extern void fn_8c221a34(void);
extern void operation_8c221a40(void);

/* 8c2788f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2788f0[7] = {
    0,
    0,
    destroy_object_8c221580,
    fn_8c2215c4,
    fn_8c2217e0,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27890c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27890c[7] = {
    0,
    0,
    destroy_object_8c2219f0,
    fn_8c221a34,
    operation_8c221a40,
    operation_8c0111cc,
    hierarchy_output
};
