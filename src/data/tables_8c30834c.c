/* Static data 8c30834c-8c308370: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0e94cc(void);
extern void operation_8c0e9630(void);
extern void operation_8c0e96e4(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c30834c[3] = {
    { 0, -1, (void *)operation_8c0e94cc },
    { 0, -1, (void *)operation_8c0e9630 },
    { 0, -1, (void *)operation_8c0e96e4 }
};
