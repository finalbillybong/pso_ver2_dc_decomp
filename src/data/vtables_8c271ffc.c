/* Static data 8c271ffc-8c272018: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c183248(void);
extern void operation_8c1832cc(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c271ffc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c271ffc[7] = {
    0,
    0,
    operation_8c183248,
    operation_8c1832cc,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
