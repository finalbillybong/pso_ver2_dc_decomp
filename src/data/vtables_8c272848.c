/* Static data 8c272848-8c272884: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_194098(void);
extern void operation_1940ec(void);
extern void fn_8c194158(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void destroy_object_8c196d84(void);
extern void operation_8c1971cc(void);
extern void fn_8c197298(void);

/* 8c272848: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c272848[8] = {
    0,
    0,
    operation_194098,
    operation_1940ec,
    fn_8c194158,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c272868: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272868[7] = {
    0,
    0,
    destroy_object_8c196d84,
    operation_8c1971cc,
    fn_8c197298,
    operation_8c0111cc,
    hierarchy_output
};
