/* Static data 8c264348-8c264364: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c080280(void);
extern void operation_8c0802c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c264348: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c264348[7] = {
    0,
    0,
    destroy_object_8c080280,
    operation_8c0802c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
