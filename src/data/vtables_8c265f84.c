/* Static data 8c265f84-8c265fa0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_delayed_effect(void);
extern void update_delayed_effect(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265f84: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265f84[7] = {
    0,
    0,
    destroy_delayed_effect,
    update_delayed_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
