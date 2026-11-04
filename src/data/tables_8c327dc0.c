/* Static data 8c327dc0-8c327de4: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c1bc424(void);
extern void operation_8c1bc6c8(void);
extern void operation_8c1bc72c(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c327dc0[3] = {
    { 0, -1, (void *)operation_8c1bc424 },
    { 0, -1, (void *)operation_8c1bc6c8 },
    { 0, -1, (void *)operation_8c1bc72c }
};
