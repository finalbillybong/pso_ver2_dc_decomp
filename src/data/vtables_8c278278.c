/* Static data 8c278278-8c278298: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c215a54(void);
extern void operation_8c215b60(void);
extern void operation_8c215b90(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c278278: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278278[8] = {
    0,
    0,
    destroy_object_8c215a54,
    operation_8c215b60,
    operation_8c215b90,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
