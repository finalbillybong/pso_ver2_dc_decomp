/* Static data 8c3089f0-8c308a08: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0ed080(void);
extern void operation_8c0ed130(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c3089f0[2] = {
    { 0, -1, (void *)operation_8c0ed080 },
    { 0, -1, (void *)operation_8c0ed130 }
};
