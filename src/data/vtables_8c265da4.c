/* Static data 8c265da4-8c265df0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0ac630(void);
extern void fn_8c0ac538(void);
extern void operation_8c0ac930(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0b6d08(void);
extern void operation_8c0ac6c4(void);
extern void fn_8c0ad154(void);
extern void fn_8c0ad0c0(void);
extern void operation_8c0ad0bc(void);
extern void operation_8c0ad458(void);
extern void operation_8c0ba058(void);
extern void fn_8c0ad1f0(void);

/* 8c265da4: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c265da4[9] = {
    0,
    0,
    destroy_object_8c0ac630,
    fn_8c0ac538,
    operation_8c0ac930,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0b6d08,
    operation_8c0ac6c4
};

/* 8c265dc8: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c265dc8[10] = {
    0,
    0,
    fn_8c0ad154,
    fn_8c0ad0c0,
    operation_8c0ad0bc,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0ad458,
    operation_8c0ba058,
    fn_8c0ad1f0
};
