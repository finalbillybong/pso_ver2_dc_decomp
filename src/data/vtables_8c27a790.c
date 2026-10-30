/* Static data 8c27a790-8c27a7ac: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c23cfec(void);
extern void operation_8c23d03c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27a790: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27a790[7] = {
    0,
    0,
    operation_8c23cfec,
    operation_8c23d03c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
