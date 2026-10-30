/* Static data 8c272cfc-8c272d18: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1a0648(void);
extern void operation_8c1a0640(void);
extern void operation_8c1a0644(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c272cfc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272cfc[7] = {
    0,
    0,
    destroy_object_8c1a0648,
    operation_8c1a0640,
    operation_8c1a0644,
    operation_8c0111cc,
    hierarchy_output
};
