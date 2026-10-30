/* Static data 8c277354-8c2773a8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1dcb54(void);
extern void operation_8c1dcc40(void);
extern void operation_8c1dccb0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1dd878(void);
extern void operation_8c1dd8d4(void);
extern void operation_8c1dda64(void);
extern void destroy_timed_owner_effect_8c1dde04(void);
extern void operation_8c1dde54(void);
extern void operation_8c0111c8(void);

/* 8c277354: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277354[7] = {
    0,
    0,
    operation_8c1dcb54,
    operation_8c1dcc40,
    operation_8c1dccb0,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c277370: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277370[7] = {
    0,
    0,
    operation_8c1dd878,
    operation_8c1dd8d4,
    operation_8c1dda64,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27738c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27738c[7] = {
    0,
    0,
    destroy_timed_owner_effect_8c1dde04,
    operation_8c1dde54,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
