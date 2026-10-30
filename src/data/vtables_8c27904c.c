/* Static data 8c27904c-8c2790a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c237304(void);
extern void operation_8c237670(void);
extern void operation_8c237708(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c236f64(void);
extern void operation_8c236fc0(void);
extern void operation_8c2371a0(void);
extern void operation_8c236a74(void);
extern void operation_8c236ae0(void);
extern void operation_8c236c9c(void);

/* 8c27904c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27904c[7] = {
    0,
    0,
    destroy_object_8c237304,
    operation_8c237670,
    operation_8c237708,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c279068: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c279068[7] = {
    0,
    0,
    operation_8c236f64,
    operation_8c236fc0,
    operation_8c2371a0,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c279084: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c279084[7] = {
    0,
    0,
    operation_8c236a74,
    operation_8c236ae0,
    operation_8c236c9c,
    operation_8c0111cc,
    hierarchy_output
};
