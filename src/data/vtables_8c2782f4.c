/* Static data 8c2782f4-8c278334: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c217948(void);
extern void operation_8c21798c(void);
extern void operation_8c2179bc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void destroy_object_8c217ffc(void);
extern void operation_8c218040(void);
extern void finalize_view_8c218070(void);

/* 8c2782f4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2782f4[8] = {
    0,
    0,
    destroy_object_8c217948,
    operation_8c21798c,
    operation_8c2179bc,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278314: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278314[8] = {
    0,
    0,
    destroy_object_8c217ffc,
    operation_8c218040,
    finalize_view_8c218070,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
