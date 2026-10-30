/* Static data 8c27016c-8c2701c0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c16b87c(void);
extern void operation_8c16b8f0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c16b43c(void);
extern void operation_8c0111c4(void);
extern void operation_8c16a11c(void);

/* 8c27016c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27016c[7] = {
    0,
    0,
    operation_8c16b87c,
    operation_8c16b8f0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c270188: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270188[7] = {
    0,
    0,
    destroy_object_8c16b43c,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2701a4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2701a4[7] = {
    0,
    0,
    operation_8c16a11c,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
