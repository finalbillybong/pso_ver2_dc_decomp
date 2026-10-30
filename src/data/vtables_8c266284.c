/* Static data 8c266284-8c2662d0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0bad1c(void);
extern void fn_8c0bad60(void);
extern void operation_8c0bada0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0badf4(void);
extern void operation_8c0ad9a8(void);
extern void destroy_object_8c0bb658(void);
extern void fn_8c0bb024(void);
extern void operation_8c0bb654(void);
extern void operation_8c0ad458(void);
extern void operation_8c0ba058(void);
extern void operation_8c0bb69c(void);

/* 8c266284: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c266284[9] = {
    0,
    0,
    destroy_object_8c0bad1c,
    fn_8c0bad60,
    operation_8c0bada0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0badf4,
    operation_8c0ad9a8
};

/* 8c2662a8: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2662a8[10] = {
    0,
    0,
    destroy_object_8c0bb658,
    fn_8c0bb024,
    operation_8c0bb654,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0ad458,
    operation_8c0ba058,
    operation_8c0bb69c
};
