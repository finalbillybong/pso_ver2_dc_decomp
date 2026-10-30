/* Static data 8c278b68-8c278bbc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c226938(void);
extern void operation_8c22697c(void);
extern void operation_8c2269a4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c226c94(void);
extern void operation_8c226d28(void);
extern void operation_8c2270a8(void);
extern void operation_8c227c14(void);
extern void operation_8c227c68(void);
extern void operation_8c227c8c(void);

/* 8c278b68: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278b68[7] = {
    0,
    0,
    destroy_object_8c226938,
    operation_8c22697c,
    operation_8c2269a4,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278b84: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278b84[7] = {
    0,
    0,
    operation_8c226c94,
    operation_8c226d28,
    operation_8c2270a8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278ba0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278ba0[7] = {
    0,
    0,
    operation_8c227c14,
    operation_8c227c68,
    operation_8c227c8c,
    operation_8c0111cc,
    hierarchy_output
};
