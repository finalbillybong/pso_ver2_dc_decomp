/* Static data 8c2708e0-8c270934: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c175f20(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c176c68(void);
extern void operation_8c176cac(void);
extern void operation_8c176cc8(void);
extern void destroy_object_8c176dec(void);
extern void operation_8c176e30(void);
extern void operation_8c176e34(void);

/* 8c2708e0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2708e0[7] = {
    0,
    0,
    destroy_object_8c175f20,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2708fc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2708fc[7] = {
    0,
    0,
    destroy_object_8c176c68,
    operation_8c176cac,
    operation_8c176cc8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c270918: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270918[7] = {
    0,
    0,
    destroy_object_8c176dec,
    operation_8c176e30,
    operation_8c176e34,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
