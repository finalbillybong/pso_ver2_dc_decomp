/* Static data 8c266244-8c266268: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0ba7bc(void);
extern void fn_8c0ba6d4(void);
extern void operation_8c0babec(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0b6d08(void);
extern void fn_8c0ba800(void);

/* 8c266244: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c266244[9] = {
    0,
    0,
    destroy_object_8c0ba7bc,
    fn_8c0ba6d4,
    operation_8c0babec,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0b6d08,
    fn_8c0ba800
};
