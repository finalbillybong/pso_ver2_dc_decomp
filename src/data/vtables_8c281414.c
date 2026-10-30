/* Static data 8c281414-8c281430: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c255a80(void);
extern void operation_8c255ae4(void);
extern void operation_8c255c04(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281414: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281414[7] = {
    0,
    0,
    operation_8c255a80,
    operation_8c255ae4,
    operation_8c255c04,
    operation_8c0111cc,
    hierarchy_output
};
