/* Static data 8c301fac-8c301fc4: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c09d7b0(void);
extern void fn_8c09d864(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c301fac[2] = {
    { 0, -1, (void *)operation_8c09d7b0 },
    { 0, -1, (void *)fn_8c09d864 }
};
