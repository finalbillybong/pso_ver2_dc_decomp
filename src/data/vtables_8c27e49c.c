/* Static data 8c27e49c-8c27e4b8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_effect_controller(void);
extern void update_effect_controller(void);
extern void operation_24e798(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e49c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e49c[7] = {
    0,
    0,
    destroy_effect_controller,
    update_effect_controller,
    operation_24e798,
    operation_8c0111cc,
    hierarchy_output
};
