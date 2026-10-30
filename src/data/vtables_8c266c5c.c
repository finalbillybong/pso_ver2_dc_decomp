/* Static data 8c266c5c-8c266c94: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_position_ring(void);
extern void fn_8c0cbb80(void);
extern void fn_8c0cbc88(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c0cb954(void);
extern void fn_8c0cb998(void);
extern void operation_8c0cb9f8(void);

/* 8c266c5c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266c5c[7] = {
    0,
    0,
    destroy_position_ring,
    fn_8c0cbb80,
    fn_8c0cbc88,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c266c78: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266c78[7] = {
    0,
    0,
    destroy_object_8c0cb954,
    fn_8c0cb998,
    operation_8c0cb9f8,
    operation_8c0111cc,
    hierarchy_output
};
