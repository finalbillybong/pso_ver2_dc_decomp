/* Static data 8c327d50-8c327d80: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c1bb980(void);
extern void operation_8c1bb9c8(void);
extern void operation_8c1bbb50(void);
extern void operation_8c1bbcf0(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c327d50[4] = {
    { 0, -1, (void *)operation_8c1bb980 },
    { 0, -1, (void *)operation_8c1bb9c8 },
    { 0, -1, (void *)operation_8c1bbb50 },
    { 0, -1, (void *)operation_8c1bbcf0 }
};
