/* Static data 8c26dbd0-8c26dc40: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_pair_context_effect(void);
extern void update_pair_context(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_context_8c140270(void);
extern void operation_8c1402bc(void);
extern void operation_8c13f930(void);
extern void operation_8c13fa54(void);
extern void operation_8c13f594(void);
extern void operation_8c13f614(void);

/* 8c26dbd0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dbd0[7] = {
    0,
    0,
    destroy_pair_context_effect,
    update_pair_context,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26dbec: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dbec[7] = {
    0,
    0,
    destroy_context_8c140270,
    operation_8c1402bc,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26dc08: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dc08[7] = {
    0,
    0,
    operation_8c13f930,
    operation_8c13fa54,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26dc24: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dc24[7] = {
    0,
    0,
    operation_8c13f594,
    operation_8c13f614,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
