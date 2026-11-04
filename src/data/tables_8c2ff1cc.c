/* Static data 8c2ff1cc-8c2ff2a4: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0828ec(void);
extern void operation_8c082980(void);
extern void operation_8c0829cc(void);
extern void operation_8c082a40(void);
extern void operation_8c082a44(void);
extern void operation_8c082a68(void);
extern void fn_8c082a6c(void);
extern void operation_8c082bb4(void);
extern void fn_8c082be4(void);
extern void fn_8c082d0c(void);
extern void fn_8c082dc8(void);
extern void fn_8c082f04(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c2ff1cc[18] = {
    { 0, -1, (void *)operation_8c0828ec },
    { 0, -1, (void *)operation_8c082980 },
    { 0, -1, (void *)operation_8c0829cc },
    { 0, -1, (void *)operation_8c082a40 },
    { 0, -1, (void *)operation_8c082a44 },
    { 0, -1, (void *)operation_8c082a68 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, -1, (void *)fn_8c082a6c },
    { 0, -1, (void *)operation_8c082bb4 },
    { 0, -1, (void *)fn_8c082be4 },
    { 0, -1, (void *)fn_8c082d0c },
    { 0, -1, (void *)fn_8c082dc8 },
    { 0, -1, (void *)fn_8c082f04 }
};
