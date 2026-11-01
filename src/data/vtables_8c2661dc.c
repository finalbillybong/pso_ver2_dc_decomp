/* Static data 8c2661dc-8c266200: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecResta_dtor_8c0b91c8(void);
extern void TTecResta_update_8c0b920c(void);
extern void TTecResta_render_8c0b92f4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecPlayerInfluence_v05_8c0b6d08(void);
extern void TTecResta_v06_8c0b92f8(void);

/* 8c2661dc: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c2661dc[9] = {
    0,
    0,
    TTecResta_dtor_8c0b91c8,
    TTecResta_update_8c0b920c,
    TTecResta_render_8c0b92f4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecPlayerInfluence_v05_8c0b6d08,
    TTecResta_v06_8c0b92f8
};
