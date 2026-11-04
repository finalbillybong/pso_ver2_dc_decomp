/* Static data 8c300d68-8c300de0: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0983ec(void);
extern void operation_8c098430(void);
extern void operation_8c098490(void);
extern void operation_8c0984c0(void);
extern void operation_8c098460(void);
extern void operation_8c0984f0(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c300d68[10] = {
    { 0, -1, (void *)operation_8c0983ec },
    { 0, -1, (void *)operation_8c0983ec },
    { 0, -1, (void *)operation_8c098430 },
    { 0, -1, (void *)operation_8c0983ec },
    { 0, -1, (void *)operation_8c0983ec },
    { 0, -1, (void *)operation_8c0983ec },
    { 0, -1, (void *)operation_8c098490 },
    { 0, -1, (void *)operation_8c0984c0 },
    { 0, -1, (void *)operation_8c098460 },
    { 0, -1, (void *)operation_8c0984f0 }
};
