/* Static data 8c300264-8c30027c: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void fn_8c08ba8c(void);
extern void fn_8c08bbe4(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c300264[2] = {
    { 0, -1, (void *)fn_8c08ba8c },
    { 0, -1, (void *)fn_8c08bbe4 }
};
