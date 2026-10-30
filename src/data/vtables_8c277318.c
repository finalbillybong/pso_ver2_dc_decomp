/* Static data 8c277318-8c277334: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1dbba4(void);
extern void operation_8c1dbc08(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c277318: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277318[7] = {
    0,
    0,
    operation_8c1dbba4,
    operation_8c1dbc08,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
