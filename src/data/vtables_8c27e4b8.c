/* Static data 8c27e4b8-8c27e4d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_controller_child_a(void);
extern void update_controller_child_a(void);
extern void fn_8c24ea94(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e4b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e4b8[7] = {
    0,
    0,
    destroy_controller_child_a,
    update_controller_child_a,
    fn_8c24ea94,
    operation_8c0111cc,
    hierarchy_output
};
