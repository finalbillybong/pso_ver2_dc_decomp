/* Static data 8c276668-8c276684: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_timed_owner_effect_8c1c5b40(void);
extern void fn_8c1c5b90(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276668: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276668[7] = {
    0,
    0,
    destroy_timed_owner_effect_8c1c5b40,
    fn_8c1c5b90,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
