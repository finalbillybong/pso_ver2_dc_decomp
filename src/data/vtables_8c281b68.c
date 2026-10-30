/* Static data 8c281b68-8c281b84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c25ab4c(void);
extern void operation_8c25abb0(void);
extern void operation_8c25aca8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281b68: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281b68[7] = {
    0,
    0,
    operation_8c25ab4c,
    operation_8c25abb0,
    operation_8c25aca8,
    operation_8c0111cc,
    hierarchy_output
};
