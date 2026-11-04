/* Static data 8c266060-8c2660c0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecMegid_dtor_8c0b5514(void);
extern void TTecMegid_update_8c0b53cc(void);
extern void TTecMegid_render_8c0b5844(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0ad458(void);
extern void operation_8c0ba058(void);
extern void TTecMegid_v07_8c0b5640(void);
extern void destroy_object_8c0b691c(void);
extern void fn_8c0b6960(void);
extern void operation_8c0b6a70(void);
extern void operation_8c0b68a0(void);
extern void fn_8c0b68f4(void);
extern void TObject_render_default_8c0111c8(void);

/* 8c266060: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TTecMegid_vtable_8c266060[10] = {
    0,
    0,
    TTecMegid_dtor_8c0b5514,
    TTecMegid_update_8c0b53cc,
    TTecMegid_render_8c0b5844,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0ad458,
    operation_8c0ba058,
    TTecMegid_v07_8c0b5640
};

/* 8c266088: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266088[7] = {
    0,
    0,
    destroy_object_8c0b691c,
    fn_8c0b6960,
    operation_8c0b6a70,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2660a4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2660a4[7] = {
    0,
    0,
    operation_8c0b68a0,
    fn_8c0b68f4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
