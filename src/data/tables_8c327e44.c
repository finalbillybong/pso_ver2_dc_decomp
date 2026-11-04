/* Static data 8c327e44-8c327e68: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c1bcd18(void);
extern void operation_8c1bcd60(void);
extern void operation_8c1bcdf8(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c327e44[3] = {
    { 0, -1, (void *)operation_8c1bcd18 },
    { 0, -1, (void *)operation_8c1bcd60 },
    { 0, -1, (void *)operation_8c1bcdf8 }
};
