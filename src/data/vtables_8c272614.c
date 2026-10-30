/* Static data 8c272614-8c27266c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c18aed0(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c18bc10(void);
extern void operation_8c18bcf0(void);
extern void operation_8c18bd24(void);
extern void operation_194098_8c18cc18(void);
extern void operation_8c18cc6c(void);
extern void operation_8c18ccb4(void);
extern void operation_8c0dc63c(void);

/* 8c272614: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272614[7] = {
    0,
    0,
    destroy_object_8c18aed0,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c272630: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272630[7] = {
    0,
    0,
    operation_8c18bc10,
    operation_8c18bcf0,
    operation_8c18bd24,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27264c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27264c[8] = {
    0,
    0,
    operation_194098_8c18cc18,
    operation_8c18cc6c,
    operation_8c18ccb4,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
