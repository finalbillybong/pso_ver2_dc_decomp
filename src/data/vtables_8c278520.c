/* Static data 8c278520-8c278590: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c21b5ec(void);
extern void update_delayed_position_effect(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c21b39c(void);
extern void operation_8c21b3f4(void);
extern void destroy_following_position_effect(void);
extern void update_following_position_effect(void);
extern void destroy_raised_position_effect(void);
extern void update_raised_position_effect(void);

/* 8c278520: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278520[7] = {
    0,
    0,
    destroy_object_8c21b5ec,
    update_delayed_position_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27853c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27853c[7] = {
    0,
    0,
    operation_8c21b39c,
    operation_8c21b3f4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278558: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278558[7] = {
    0,
    0,
    destroy_following_position_effect,
    update_following_position_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278574: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278574[7] = {
    0,
    0,
    destroy_raised_position_effect,
    update_raised_position_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
