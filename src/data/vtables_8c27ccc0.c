/* Static data 8c27ccc0-8c27ccf8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c244038(void);
extern void operation_8c24407c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c242500(void);
extern void operation_8c24259c(void);

/* 8c27ccc0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27ccc0[7] = {
    0,
    0,
    destroy_object_8c244038,
    operation_8c24407c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27ccdc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27ccdc[7] = {
    0,
    0,
    operation_8c242500,
    operation_8c24259c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
