/* Static data 8c278acc-8c278b68: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c223ec4(void);
extern void operation_8c223f1c(void);
extern void fn_8c223ff8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void destroy_context_8c2248d0(void);
extern void operation_8c224938(void);
extern void fn_8c224a28(void);
extern void fn_8c1192e8(void);
extern void operation_8c225620(void);
extern void operation_8c225688(void);
extern void fn_8c225704(void);
extern void destroy_object_8c22607c(void);
extern void fn_8c2260c0(void);
extern void operation_8c2262b8(void);
extern void destroy_object_8c226798(void);
extern void update_pair_grid_view(void);
extern void operation_8c2267dc(void);

/* 8c278acc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278acc[8] = {
    0,
    0,
    operation_8c223ec4,
    operation_8c223f1c,
    fn_8c223ff8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278aec: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278aec[8] = {
    0,
    0,
    destroy_context_8c2248d0,
    operation_8c224938,
    fn_8c224a28,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c278b0c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278b0c[8] = {
    0,
    0,
    operation_8c225620,
    operation_8c225688,
    fn_8c225704,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c278b2c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278b2c[7] = {
    0,
    0,
    destroy_object_8c22607c,
    fn_8c2260c0,
    operation_8c2262b8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278b48: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278b48[8] = {
    0,
    0,
    destroy_object_8c226798,
    update_pair_grid_view,
    operation_8c2267dc,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
