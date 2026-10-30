/* Static data 8c278820-8c278860: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c21f7d0(void);
extern void operation_8c21f814(void);
extern void operation_8c21f840(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void reconstruct_8c21ffb0(void);
extern void operation_8c220004(void);
extern void operation_8c2200c8(void);

/* 8c278820: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278820[8] = {
    0,
    0,
    destroy_object_8c21f7d0,
    operation_8c21f814,
    operation_8c21f840,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278840: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278840[8] = {
    0,
    0,
    reconstruct_8c21ffb0,
    operation_8c220004,
    operation_8c2200c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
