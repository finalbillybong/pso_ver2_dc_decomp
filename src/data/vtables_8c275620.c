/* Static data 8c275620-8c275658: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1bef00(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1bed08(void);
extern void operation_8c1bed64(void);
extern void operation_8c1beda4(void);

/* 8c275620: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c275620[7] = {
    0,
    0,
    operation_8c1bef00,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27563c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27563c[7] = {
    0,
    0,
    operation_8c1bed08,
    operation_8c1bed64,
    operation_8c1beda4,
    operation_8c0111cc,
    hierarchy_output
};
