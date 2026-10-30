/* Static data 8c261cb8-8c261cf8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_integer_field(void);
extern void clear_integer_field(void);
extern void move_integer_field_cursor(void);
extern void adjust_integer_field(void);
extern void draw_integer_field(void);
extern void highlight_integer_field(void);
extern void destroy_float_field(void);
extern void clear_float_field(void);
extern void move_float_field_cursor(void);
extern void adjust_float_field(void);
extern void draw_float_field(void);
extern void highlight_float_field(void);

/* 8c261cb8: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c261cb8[8] = {
    0,
    0,
    destroy_integer_field,
    clear_integer_field,
    move_integer_field_cursor,
    adjust_integer_field,
    draw_integer_field,
    highlight_integer_field
};

/* 8c261cd8: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c261cd8[8] = {
    0,
    0,
    destroy_float_field,
    clear_float_field,
    move_float_field_cursor,
    adjust_float_field,
    draw_float_field,
    highlight_float_field
};
