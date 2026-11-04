/* Static data 8c30aa24-8c30aa3c: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0fc9a0(void);
extern void operation_8c0fc9b4(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c30aa24[2] = {
    { 0, -1, (void *)operation_8c0fc9a0 },
    { 0, -1, (void *)operation_8c0fc9b4 }
};
