/* Static data 8c261c28-8c261cb8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0407c0(void);
extern void operation_8c0111c4(void);
extern void fn_8c040804(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c040a74(void);
extern void fn_8c040ab8(void);
extern void destroy_object_8c040d40(void);
extern void fn_8c040d84(void);
extern void destroy_object_8c0419e8(void);
extern void fn_8c041a2c(void);
extern void destroy_hex_field(void);
extern void clear_hex_field(void);
extern void move_hex_field_cursor(void);
extern void adjust_hex_field(void);
extern void draw_hex_field(void);
extern void fn_8c0430dc(void);

/* 8c261c28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261c28[7] = {
    0,
    0,
    destroy_object_8c0407c0,
    operation_8c0111c4,
    fn_8c040804,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261c44: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261c44[7] = {
    0,
    0,
    destroy_object_8c040a74,
    operation_8c0111c4,
    fn_8c040ab8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261c60: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261c60[7] = {
    0,
    0,
    destroy_object_8c040d40,
    operation_8c0111c4,
    fn_8c040d84,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261c7c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261c7c[7] = {
    0,
    0,
    destroy_object_8c0419e8,
    operation_8c0111c4,
    fn_8c041a2c,
    operation_8c0111cc,
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
