/* Static data 8c2658b8-8c2658d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_view_effect_8c09cd90(void);
extern void operation_8c09cddc(void);
extern void operation_8c09ce2c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2658b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2658b8[7] = {
    0,
    0,
    destroy_view_effect_8c09cd90,
    operation_8c09cddc,
    operation_8c09ce2c,
    operation_8c0111cc,
    hierarchy_output
};
