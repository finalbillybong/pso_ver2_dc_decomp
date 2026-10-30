/* Static data 8c276e84-8c276ea0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c1d57d0(void);
extern void operation_8c1d5828(void);
extern void operation_8c1d5868(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276e84: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276e84[7] = {
    0,
    0,
    destroy_context_8c1d57d0,
    operation_8c1d5828,
    operation_8c1d5868,
    operation_8c0111cc,
    hierarchy_output
};
