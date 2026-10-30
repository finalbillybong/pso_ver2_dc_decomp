/* Static data 8c269e94-8c269edc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_color_rise_8c118c60(void);
extern void fn_8c118d78(void);
extern void fn_8c118e50(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c118cfc(void);
extern void discard_textured_trail_pair(void);
extern void destroy_color_rise_8c1189f0(void);
extern void fn_8c118b28(void);
extern void draw_colored_trail(void);
extern void fn_8c118a8c(void);
extern void discard_colored_trail_pair(void);

/* 8c269e94: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c269e94[9] = {
    0,
    0,
    destroy_color_rise_8c118c60,
    fn_8c118d78,
    fn_8c118e50,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c118cfc,
    discard_textured_trail_pair
};

/* 8c269eb8: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c269eb8[9] = {
    0,
    0,
    destroy_color_rise_8c1189f0,
    fn_8c118b28,
    draw_colored_trail,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c118a8c,
    discard_colored_trail_pair
};
