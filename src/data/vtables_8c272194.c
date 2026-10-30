/* Static data 8c272194-8c272228: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1885a0(void);
extern void operation_8c1067d0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c188640(void);
extern void operation_8c188f84(void);
extern void operation_8c18900c(void);
extern void operation_8c189af8(void);
extern void operation_8c189b7c(void);
extern void operation_8c189c90(void);
extern void destroy_object_8c189ef8(void);
extern void operation_8c189f3c(void);
extern void operation_8c189f64(void);
extern void destroy_child_owner_8c18a09c(void);
extern void operation_8c18a0f0(void);
extern void operation_8c18a32c(void);

/* 8c272194: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c272194[8] = {
    0,
    0,
    operation_8c1885a0,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c188640
};

/* 8c2721b4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2721b4[8] = {
    0,
    0,
    operation_8c188f84,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c18900c
};

/* 8c2721d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2721d4[7] = {
    0,
    0,
    operation_8c189af8,
    operation_8c189b7c,
    operation_8c189c90,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2721f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2721f0[7] = {
    0,
    0,
    destroy_object_8c189ef8,
    operation_8c189f3c,
    operation_8c189f64,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27220c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27220c[7] = {
    0,
    0,
    destroy_child_owner_8c18a09c,
    operation_8c18a0f0,
    operation_8c18a32c,
    operation_8c0111cc,
    hierarchy_output
};
