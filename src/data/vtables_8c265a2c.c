/* Static data 8c265a2c-8c265ad4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_follow_effect(void);
extern void refresh_follow_effect(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c09adfc(void);
extern void reset_follow_effect(void);
extern void operation_8c09ae08(void);
extern void operation_8c09ae04(void);
extern void operation_8c09ae0c(void);
extern void fn_8c0a0d20(void);
extern void destroy_follow_base(void);
extern void operation_8c0a117c(void);
extern void operation_8c09ae00(void);
extern void destroy_context_8c0a127c(void);
extern void fn_8c0a12c8(void);
extern void operation_8c0a12d4(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);

/* 8c265a2c: type-information and this-adjustment header, then 11 slots */
VirtualFunction const vt_8c265a2c[13] = {
    0,
    0,
    destroy_follow_effect,
    refresh_follow_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c09adfc,
    reset_follow_effect,
    operation_8c09ae08,
    operation_8c09ae04,
    operation_8c09ae0c,
    fn_8c0a0d20
};

/* 8c265a60: type-information and this-adjustment header, then 11 slots */
VirtualFunction const vt_8c265a60[13] = {
    0,
    0,
    destroy_follow_base,
    operation_8c0a117c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c09adfc,
    operation_8c09ae00,
    operation_8c09ae08,
    operation_8c09ae04,
    operation_8c09ae0c,
    fn_8c0a0d20
};

/* 8c265a94: type-information and this-adjustment header, then 14 slots */
VirtualFunction const vt_8c265a94[16] = {
    0,
    0,
    destroy_context_8c0a127c,
    fn_8c0a12c8,
    operation_8c0a12d4,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    operation_8c010504,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};
