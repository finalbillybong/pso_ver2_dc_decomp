/* Static data 8c266eec-8c266f08: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c0d1140(void);
extern void operation_8c0d1190(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c266eec: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266eec[7] = {
    0,
    0,
    operation_8c0d1140,
    operation_8c0d1190,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
