/* Static data 8c274c00-8c274c38: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1b08ac(void);
extern void fn_8c1b08f0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c1b3158(void);
extern void update_record_effect_timer(void);
extern void fn_8c1b31bc(void);

/* 8c274c00: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274c00[7] = {
    0,
    0,
    destroy_object_8c1b08ac,
    fn_8c1b08f0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c274c1c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274c1c[7] = {
    0,
    0,
    destroy_object_8c1b3158,
    update_record_effect_timer,
    fn_8c1b31bc,
    operation_8c0111cc,
    hierarchy_output
};
