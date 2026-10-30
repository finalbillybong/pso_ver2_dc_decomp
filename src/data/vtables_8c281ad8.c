/* Static data 8c281ad8-8c281b10: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c2591fc(void);
extern void operation_8c259240(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_view_effect_8c259674(void);
extern void operation_8c0111c4(void);

/* 8c281ad8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281ad8[7] = {
    0,
    0,
    destroy_object_8c2591fc,
    operation_8c259240,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c281af4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281af4[7] = {
    0,
    0,
    destroy_view_effect_8c259674,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
