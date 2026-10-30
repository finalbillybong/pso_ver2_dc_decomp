/* Static data 8c27662c-8c276668: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1c55e0(void);
extern void operation_1abbcc(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1c5650(void);
extern void destroy_timed_owner_effect_8c1c56c0(void);
extern void operation_8c1c5710(void);

/* 8c27662c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27662c[8] = {
    0,
    0,
    operation_8c1c55e0,
    operation_1abbcc,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1c5650
};

/* 8c27664c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27664c[7] = {
    0,
    0,
    destroy_timed_owner_effect_8c1c56c0,
    operation_8c1c5710,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
