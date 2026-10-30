/* Static data 8c27e4d4-8c27e4f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_controller_child_b(void);
extern void update_controller_child_b(void);
extern void draw_controller_child_b(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e4d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e4d4[7] = {
    0,
    0,
    destroy_controller_child_b,
    update_controller_child_b,
    draw_controller_child_b,
    operation_8c0111cc,
    hierarchy_output
};
