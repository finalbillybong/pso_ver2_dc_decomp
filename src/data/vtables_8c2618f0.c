/* Static data 8c2618f0-8c261998: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c03c214(void);
extern void run_actor_callback_on_timeout(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c03c258(void);
extern void run_actor_callback_if_present(void);
extern void destroy_object_8c03c29c(void);
extern void run_actor_callback_when_idle(void);
extern void destroy_object_8c03b8b8(void);
extern void update_timed_actor_child(void);
extern void destroy_actor_child(void);
extern void update_actor_child(void);
extern void destroy_optional_child_owner(void);
extern void operation_8c0111c4(void);

/* 8c2618f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2618f0[7] = {
    0,
    0,
    destroy_object_8c03c214,
    run_actor_callback_on_timeout,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26190c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26190c[7] = {
    0,
    0,
    destroy_object_8c03c258,
    run_actor_callback_if_present,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261928: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261928[7] = {
    0,
    0,
    destroy_object_8c03c29c,
    run_actor_callback_when_idle,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261944: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261944[7] = {
    0,
    0,
    destroy_object_8c03b8b8,
    update_timed_actor_child,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261960: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261960[7] = {
    0,
    0,
    destroy_actor_child,
    update_actor_child,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26197c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26197c[7] = {
    0,
    0,
    destroy_optional_child_owner,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
