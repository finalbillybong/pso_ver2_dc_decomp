/* Static data 8c269edc-8c269ef8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c118918(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c269edc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269edc[7] = {
    0,
    0,
    destroy_object_8c118918,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
