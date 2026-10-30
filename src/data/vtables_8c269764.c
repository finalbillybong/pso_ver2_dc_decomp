/* Static data 8c269764-8c269778: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c1049ec(void);
extern void operation_8c104a28(void);
extern void fn_8c104a2c(void);

/* 8c269764: type-information and this-adjustment header, then 3 slots */
VirtualFunction const vt_8c269764[5] = {
    0,
    0,
    destroy_field_8c1049ec,
    operation_8c104a28,
    fn_8c104a2c
};
