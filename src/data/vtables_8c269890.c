/* Static data 8c269890-8c2698b0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1074fc(void);
extern void operation_8c1075c8(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c107540(void);

/* 8c269890: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c269890[8] = {
    0,
    0,
    destroy_object_8c1074fc,
    operation_8c1075c8,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c107540
};
