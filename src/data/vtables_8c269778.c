/* Static data 8c269778-8c269828: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c105654(void);
extern void operation_8c1067d0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1056dc(void);
extern void operation_8c1060b8(void);
extern void operation_8c106144(void);
extern void operation_8c1065dc(void);
extern void operation_8c10664c(void);
extern void destroy_object_8c106598(void);
extern void operation_8c1066e0(void);
extern void destroy_object_8c10671c(void);
extern void operation_8c1068dc(void);
extern void update_callback_dialog(void);

/* 8c269778: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c269778[8] = {
    0,
    0,
    operation_8c105654,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1056dc
};

/* 8c269798: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c269798[10] = {
    0,
    0,
    operation_8c1060b8,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c106144,
    operation_8c1065dc,
    operation_8c10664c
};

/* 8c2697c0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2697c0[10] = {
    0,
    0,
    destroy_object_8c106598,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1066e0,
    operation_8c1065dc,
    operation_8c10664c
};

/* 8c2697e8: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2697e8[8] = {
    0,
    0,
    destroy_object_8c10671c,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1066e0
};

/* 8c269808: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c269808[8] = {
    0,
    0,
    operation_8c1068dc,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    update_callback_dialog
};
