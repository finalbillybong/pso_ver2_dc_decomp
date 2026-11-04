/* Static data 8c30176c-8c301784: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void fn_8c09b5c0(void);
extern void operation_8c09b7ec(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c30176c[2] = {
    { 0, -1, (void *)fn_8c09b5c0 },
    { 0, -1, (void *)operation_8c09b7ec }
};
