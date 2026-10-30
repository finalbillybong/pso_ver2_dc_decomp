/* Static data 8c281850-8c28186c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_view_effect_8c256940(void);
extern void operation_8c25698c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281850: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281850[7] = {
    0,
    0,
    destroy_view_effect_8c256940,
    operation_8c25698c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
