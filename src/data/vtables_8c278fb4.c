/* Static data 8c278fb4-8c279030: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_child_owner_8c231d48(void);
extern void operation_8c231d9c(void);
extern void operation_8c231dec(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c232188(void);
extern void operation_8c2321ec(void);
extern void operation_8c232318(void);
extern void operation_8c232c38(void);
extern void operation_8c232ca0(void);
extern void operation_8c232f9c(void);
extern void destroy_object_8c23499c(void);
extern void operation_8c2349e0(void);
extern void operation_8c0111c8(void);
extern void operation_8c234cb4(void);
extern void operation_8c234cb0(void);
extern void operation_8c234a0c(void);

/* 8c278fb4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278fb4[7] = {
    0,
    0,
    destroy_child_owner_8c231d48,
    operation_8c231d9c,
    operation_8c231dec,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278fd0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278fd0[7] = {
    0,
    0,
    operation_8c232188,
    operation_8c2321ec,
    operation_8c232318,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278fec: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278fec[7] = {
    0,
    0,
    operation_8c232c38,
    operation_8c232ca0,
    operation_8c232f9c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c279008: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c279008[10] = {
    0,
    0,
    destroy_object_8c23499c,
    operation_8c2349e0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c234cb4,
    operation_8c234cb0,
    operation_8c234a0c
};
