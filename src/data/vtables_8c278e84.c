/* Static data 8c278e84-8c278ec0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c22cb18(void);
extern void operation_8c22cb68(void);
extern void operation_8c22cb98(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void operation_8c22d680(void);
extern void operation_8c22d748(void);
extern void operation_8c0111c8(void);

/* 8c278e84: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278e84[8] = {
    0,
    0,
    operation_8c22cb18,
    operation_8c22cb68,
    operation_8c22cb98,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278ea4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278ea4[7] = {
    0,
    0,
    operation_8c22d680,
    operation_8c22d748,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
