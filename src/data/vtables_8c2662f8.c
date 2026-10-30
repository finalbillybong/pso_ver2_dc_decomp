/* Static data 8c2662f8-8c266314: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_record_owner(void);
extern void operation_8c0bc414(void);
extern void fn_8c0bc528(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2662f8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2662f8[7] = {
    0,
    0,
    destroy_record_owner,
    operation_8c0bc414,
    fn_8c0bc528,
    operation_8c0111cc,
    hierarchy_output
};
