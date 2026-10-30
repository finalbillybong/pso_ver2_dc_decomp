/* Static data 8c262be0-8c262bfc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c05ec70(void);
extern void operation_8c05ecb4(void);
extern void operation_8c05ed04(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c262be0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c262be0[7] = {
    0,
    0,
    destroy_object_8c05ec70,
    operation_8c05ecb4,
    operation_8c05ed04,
    operation_8c0111cc,
    hierarchy_output
};
