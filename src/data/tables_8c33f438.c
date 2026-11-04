/* Static data 8c33f438-8c33f480: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void fn_8c24e2d8(void);
extern void operation_8c24e534(void);
extern void operation_8c24e530(void);
extern void operation_8c24e640(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c33f438[6] = {
    { 0, -1, (void *)fn_8c24e2d8 },
    { 0, -1, (void *)operation_8c24e534 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, -1, (void *)operation_8c24e530 },
    { 0, -1, (void *)operation_8c24e640 }
};
