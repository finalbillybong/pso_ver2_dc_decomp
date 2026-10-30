/* Static data 8c265904-8c265920: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c09d6fc(void);
extern void operation_8c09d740(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265904: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265904[7] = {
    0,
    0,
    destroy_object_8c09d6fc,
    operation_8c09d740,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
