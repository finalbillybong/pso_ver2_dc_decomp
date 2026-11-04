/* Static data 8c261c28-8c261cb8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TQuadSpriteNormal_dtor_8c0407c0(void);
extern void TObject_update_default_8c0111c4(void);
extern void TQuadSpriteNormal_render_8c040804(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TQuadSpriteScl_dtor_8c040a74(void);
extern void TQuadSpriteScl_render_8c040ab8(void);
extern void destroy_object_8c040d40(void);
extern void fn_8c040d84(void);
extern void TQuadSpriteSclColRot_dtor_8c0419e8(void);
extern void TQuadSpriteSclColRot_render_8c041a2c(void);
extern void destroy_hex_field(void);
extern void clear_hex_field(void);
extern void move_hex_field_cursor(void);
extern void adjust_hex_field(void);
extern void draw_hex_field(void);
extern void fn_8c0430dc(void);

/* 8c261c28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TQuadSpriteNormal_vtable_8c261c28[7] = {
    0,
    0,
    TQuadSpriteNormal_dtor_8c0407c0,
    TObject_update_default_8c0111c4,
    TQuadSpriteNormal_render_8c040804,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261c44: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TQuadSpriteScl_vtable_8c261c44[7] = {
    0,
    0,
    TQuadSpriteScl_dtor_8c040a74,
    TObject_update_default_8c0111c4,
    TQuadSpriteScl_render_8c040ab8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261c60: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261c60[7] = {
    0,
    0,
    destroy_object_8c040d40,
    TObject_update_default_8c0111c4,
    fn_8c040d84,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261c7c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TQuadSpriteSclColRot_vtable_8c261c7c[7] = {
    0,
    0,
    TQuadSpriteSclColRot_dtor_8c0419e8,
    TObject_update_default_8c0111c4,
    TQuadSpriteSclColRot_render_8c041a2c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261c98: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c261c98[8] = {
    0,
    0,
    destroy_hex_field,
    clear_hex_field,
    move_hex_field_cursor,
    adjust_hex_field,
    draw_hex_field,
    fn_8c0430dc
};
