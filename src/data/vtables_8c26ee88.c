/* Static data 8c26ee88-8c26eecc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c15b004(void);
extern void operation_8c15b048(void);
extern void operation_8c15b07c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c15bb20(void);
extern void operation_8c1067d0(void);
extern void operation_8c0111c8(void);
extern void operation_8c15bbf0(void);
extern void operation_8c15bd04(void);
extern void operation_8c15be6c(void);

/* 8c26ee88: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26ee88[7] = {
    0,
    0,
    destroy_object_8c15b004,
    operation_8c15b048,
    operation_8c15b07c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c26eea4: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c26eea4[10] = {
    0,
    0,
    operation_8c15bb20,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c15bbf0,
    operation_8c15bd04,
    operation_8c15be6c
};
