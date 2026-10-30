/* Static data 8c281268-8c281284: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c2557ec(void);
extern void operation_8c25583c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281268: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281268[7] = {
    0,
    0,
    operation_8c2557ec,
    operation_8c25583c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
