/* Static data 8c2652a4-8c26532c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_color_rise_8c08b714(void);
extern void operation_8c08b5d4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c08b35c(void);
extern void operation_8c0111c4(void);
extern void destroy_object_8c08b900(void);
extern void operation_8c03ceac(void);
extern void operation_8c08b9a8(void);
extern void operation_8c08b944(void);
extern void operation_8c08ba38(void);
extern void destroy_object_8c08de2c(void);
extern void operation_8c08ded4(void);
extern void operation_8c08de70(void);
extern void operation_8c08df50(void);

/* 8c2652a4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2652a4[7] = {
    0,
    0,
    destroy_color_rise_8c08b714,
    operation_8c08b5d4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2652c0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2652c0[7] = {
    0,
    0,
    destroy_object_8c08b35c,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2652dc: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2652dc[10] = {
    0,
    0,
    destroy_object_8c08b900,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c08b9a8,
    operation_8c08b944,
    operation_8c08ba38
};

/* 8c265304: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c265304[10] = {
    0,
    0,
    destroy_object_8c08de2c,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c08ded4,
    operation_8c08de70,
    operation_8c08df50
};
