/* Static data 8c265cd8-8c265d10: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0a9c78(void);
extern void fn_8c0aa064(void);
extern void fn_8c0a9cbc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c0aad54(void);
extern void fn_8c0aae6c(void);
extern void operation_8c0aad98(void);

/* 8c265cd8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265cd8[7] = {
    0,
    0,
    destroy_object_8c0a9c78,
    fn_8c0aa064,
    fn_8c0a9cbc,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c265cf4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265cf4[7] = {
    0,
    0,
    destroy_object_8c0aad54,
    fn_8c0aae6c,
    operation_8c0aad98,
    operation_8c0111cc,
    hierarchy_output
};
