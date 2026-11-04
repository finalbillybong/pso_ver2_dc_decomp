/* Static data 8c33a1b4-8c33a1d8: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c237ad4(void);
extern void operation_8c237b34(void);
extern void operation_8c237b9c(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c33a1b4[3] = {
    { 0, -1, (void *)operation_8c237ad4 },
    { 0, -1, (void *)operation_8c237b34 },
    { 0, -1, (void *)operation_8c237b9c }
};
