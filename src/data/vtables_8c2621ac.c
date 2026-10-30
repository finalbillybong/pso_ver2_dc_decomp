/* Static data 8c2621ac-8c2621c8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c051bfc(void);
extern void operation_8c051c68(void);
extern void operation_8c051ce0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2621ac: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2621ac[7] = {
    0,
    0,
    operation_8c051bfc,
    operation_8c051c68,
    operation_8c051ce0,
    operation_8c0111cc,
    hierarchy_output
};
