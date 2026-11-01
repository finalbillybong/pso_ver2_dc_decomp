/* Static data 8c266284-8c2662d0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecZarua_dtor_8c0bad1c(void);
extern void TTecZarua_update_8c0bad60(void);
extern void TTecZarua_render_8c0bada0(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecZarua_v05_8c0badf4(void);
extern void operation_8c0ad9a8(void);
extern void TTecZonde_dtor_8c0bb658(void);
extern void TTecZonde_update_8c0bb024(void);
extern void TTecZonde_render_8c0bb654(void);
extern void operation_8c0ad458(void);
extern void operation_8c0ba058(void);
extern void TTecZonde_v07_8c0bb69c(void);

/* 8c266284: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c266284[9] = {
    0,
    0,
    TTecZarua_dtor_8c0bad1c,
    TTecZarua_update_8c0bad60,
    TTecZarua_render_8c0bada0,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecZarua_v05_8c0badf4,
    operation_8c0ad9a8
};

/* 8c2662a8: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2662a8[10] = {
    0,
    0,
    TTecZonde_dtor_8c0bb658,
    TTecZonde_update_8c0bb024,
    TTecZonde_render_8c0bb654,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0ad458,
    operation_8c0ba058,
    TTecZonde_v07_8c0bb69c
};
