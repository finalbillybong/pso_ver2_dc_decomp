/* Static data 8c31479c-8c3147cc: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void open_pair_context(void);
extern void fn_8c140a84(void);
extern void operation_8c140ad4(void);
extern void operation_8c140ad8(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c31479c[4] = {
    { 0, -1, (void *)open_pair_context },
    { 0, -1, (void *)fn_8c140a84 },
    { 0, -1, (void *)operation_8c140ad4 },
    { 0, -1, (void *)operation_8c140ad8 }
};
