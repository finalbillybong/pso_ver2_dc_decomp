/* Static data 8c266200-8c266244: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c0b9ce8(void);
extern void refresh_follow_effect_8c0b9d48(void);
extern void operation_8c0b9f98(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0ad458(void);
extern void operation_8c0ba058(void);
extern void operation_8c0ba1fc(void);
extern void destroy_object_8c0baa20(void);
extern void operation_8c0baa64(void);
extern void operation_8c0111c8(void);

/* 8c266200: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c266200[10] = {
    0,
    0,
    destroy_context_8c0b9ce8,
    refresh_follow_effect_8c0b9d48,
    operation_8c0b9f98,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0ad458,
    operation_8c0ba058,
    operation_8c0ba1fc
};

/* 8c266228: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266228[7] = {
    0,
    0,
    destroy_object_8c0baa20,
    operation_8c0baa64,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
