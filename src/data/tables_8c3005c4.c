/* Static data 8c3005c4-8c3005dc: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void fn_8c08dfa4(void);
extern void fn_8c08e1bc(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c3005c4[2] = {
    { 0, -1, (void *)fn_8c08dfa4 },
    { 0, -1, (void *)fn_8c08e1bc }
};
