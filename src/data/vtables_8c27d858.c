/* Static data 8c27d858-8c27d878: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c24bbc4(void);
extern void operation_8c24bc08(void);
extern void operation_8c1cbabc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c27d858: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27d858[8] = {
    0,
    0,
    destroy_object_8c24bbc4,
    operation_8c24bc08,
    operation_8c1cbabc,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
