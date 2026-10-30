/* Static data 8c281a04-8c281a3c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_view_effect_8c257f00(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c258728(void);
extern void operation_8c25876c(void);

/* 8c281a04: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281a04[7] = {
    0,
    0,
    destroy_view_effect_8c257f00,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c281a20: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281a20[7] = {
    0,
    0,
    destroy_object_8c258728,
    operation_8c25876c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
