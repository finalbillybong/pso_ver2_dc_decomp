/* Static data 8c277334-8c277354: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowMenuInfomation_dtor_8c1dbd44(void);
extern void TWindowMenuInfomation_update_8c1dbdac(void);
extern void TWindowMenuInfomation_render_8c1dbf6c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c277334: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c277334[8] = {
    0,
    0,
    TWindowMenuInfomation_dtor_8c1dbd44,
    TWindowMenuInfomation_update_8c1dbdac,
    TWindowMenuInfomation_render_8c1dbf6c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
