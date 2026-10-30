/* Static data 8c268244-8c268260: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_linked_8c0f00c0(void);
extern void operation_8c0f0114(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c268244: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c268244[7] = {
    0,
    0,
    destroy_linked_8c0f00c0,
    operation_8c0f0114,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
