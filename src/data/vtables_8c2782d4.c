/* Static data 8c2782d4-8c2782f4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c2177f0(void);
extern void update_pair_grid_view(void);
extern void operation_8c217834(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c2782d4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2782d4[8] = {
    0,
    0,
    destroy_object_8c2177f0,
    update_pair_grid_view,
    operation_8c217834,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
