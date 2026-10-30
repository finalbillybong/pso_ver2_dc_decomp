/* Static data 8c270594-8c2705b0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c175a74(void);
extern void operation_8c17583c(void);
extern void operation_8c175898(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c270594: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270594[7] = {
    0,
    0,
    destroy_object_8c175a74,
    operation_8c17583c,
    operation_8c175898,
    operation_8c0111cc,
    hierarchy_output
};
