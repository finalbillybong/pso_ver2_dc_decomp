/* Static data 8c279200-8c27923c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c237998(void);
extern void operation_8c237a1c(void);
extern void operation_8c237bcc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_239aa4(void);
extern void operation_1abbcc(void);
extern void operation_239a30(void);
extern void operation_239a20(void);

/* 8c279200: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c279200[7] = {
    0,
    0,
    operation_8c237998,
    operation_8c237a1c,
    operation_8c237bcc,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27921c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27921c[8] = {
    0,
    0,
    operation_239aa4,
    operation_1abbcc,
    operation_239a30,
    operation_8c0111cc,
    hierarchy_output,
    operation_239a20
};
