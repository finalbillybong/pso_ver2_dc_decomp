/* Static data 8c267768-8c26777c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c0e14bc(void);
extern void operation_8c0e14e8(void);
extern void operation_8c0e14ec(void);

/* 8c267768: type-information and this-adjustment header, then 3 slots */
VirtualFunction const vt_8c267768[5] = {
    0,
    0,
    destroy_field_8c0e14bc,
    operation_8c0e14e8,
    operation_8c0e14ec
};
