/* Static data 8c270118-8c270150: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c167df4(void);
extern void operation_8c167e3c(void);
extern void operation_8c167e38(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_color_rise_8c16bc90(void);
extern void operation_8c16bce0(void);
extern void operation_8c0111c8(void);

/* 8c270118: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270118[7] = {
    0,
    0,
    destroy_object_8c167df4,
    operation_8c167e3c,
    operation_8c167e38,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c270134: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270134[7] = {
    0,
    0,
    destroy_color_rise_8c16bc90,
    operation_8c16bce0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
