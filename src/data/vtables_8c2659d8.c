/* Static data 8c2659d8-8c265a2c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_effect_base(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_effect_a0578(void);
extern void update_short_effect_a05bc(void);
extern void destroy_effect_a0698(void);
extern void update_short_effect_a06dc(void);

/* 8c2659d8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2659d8[7] = {
    0,
    0,
    destroy_effect_base,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2659f4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2659f4[7] = {
    0,
    0,
    destroy_effect_a0578,
    update_short_effect_a05bc,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c265a10: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265a10[7] = {
    0,
    0,
    destroy_effect_a0698,
    update_short_effect_a06dc,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
