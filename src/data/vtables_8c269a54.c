/* Static data 8c269a54-8c269a98: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_view_effect_8c10ae44(void);
extern void operation_8c10aea8(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c10a8e4(void);
extern void operation_8c1067d0(void);
extern void operation_8c10a970(void);
extern void operation_8c10aa40(void);
extern void operation_8c10ad64(void);

/* 8c269a54: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269a54[7] = {
    0,
    0,
    destroy_view_effect_8c10ae44,
    operation_8c10aea8,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c269a70: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c269a70[10] = {
    0,
    0,
    operation_8c10a8e4,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c10a970,
    operation_8c10aa40,
    operation_8c10ad64
};
