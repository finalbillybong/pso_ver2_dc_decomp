/* Static data 8c265df0-8c265e4c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_effect_d870(void);
extern void operation_8c0ad8cc(void);
extern void operation_8c0ad9d4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0adb08(void);
extern void operation_8c0ad9a8(void);
extern void destroy_object_8c0adbc8(void);
extern void operation_8c0adc0c(void);
extern void operation_8c0ae8a0(void);
extern void destroy_object_8c0b05ec(void);
extern void operation_8c0b0630(void);
extern void operation_8c0111c8(void);

/* 8c265df0: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c265df0[9] = {
    0,
    0,
    destroy_effect_d870,
    operation_8c0ad8cc,
    operation_8c0ad9d4,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0adb08,
    operation_8c0ad9a8
};

/* 8c265e14: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265e14[7] = {
    0,
    0,
    destroy_object_8c0adbc8,
    operation_8c0adc0c,
    operation_8c0ae8a0,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c265e30: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265e30[7] = {
    0,
    0,
    destroy_object_8c0b05ec,
    operation_8c0b0630,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
