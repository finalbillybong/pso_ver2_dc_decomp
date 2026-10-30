/* Static data 8c2767e0-8c276838: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1c7288(void);
extern void operation_8c1c72f4(void);
extern void operation_8c1c72f8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c1c7464(void);
extern void operation_8c1c7350(void);
extern void operation_8c0111c8(void);
extern void destroy_object_8c1ca148(void);
extern void operation_8c1ca18c(void);
extern void operation_8c1ca1b0(void);
extern void operation_8c0dc63c(void);

/* 8c2767e0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2767e0[7] = {
    0,
    0,
    operation_8c1c7288,
    operation_8c1c72f4,
    operation_8c1c72f8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2767fc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2767fc[7] = {
    0,
    0,
    destroy_object_8c1c7464,
    operation_8c1c7350,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c276818: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276818[8] = {
    0,
    0,
    destroy_object_8c1ca148,
    operation_8c1ca18c,
    operation_8c1ca1b0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
