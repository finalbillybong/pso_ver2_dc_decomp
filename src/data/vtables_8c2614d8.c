/* Static data 8c2614d8-8c2614f4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c033050(void);
extern void operation_8c0111c4(void);
extern void fn_8c032fdc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2614d8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2614d8[7] = {
    0,
    0,
    destroy_object_8c033050,
    operation_8c0111c4,
    fn_8c032fdc,
    operation_8c0111cc,
    hierarchy_output
};
