/* Static data 8c27cee4-8c27cf00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c245e18(void);
extern void operation_8c245e5c(void);
extern void operation_8c245f68(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27cee4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27cee4[7] = {
    0,
    0,
    destroy_object_8c245e18,
    operation_8c245e5c,
    operation_8c245f68,
    operation_8c0111cc,
    hierarchy_output
};
