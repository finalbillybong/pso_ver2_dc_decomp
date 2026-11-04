/* Static data 8c314690-8c3146b4: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c13fb18(void);
extern void operation_8c13fb5c(void);
extern void fn_8c13fbf4(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c314690[3] = {
    { 0, -1, (void *)operation_8c13fb18 },
    { 0, -1, (void *)operation_8c13fb5c },
    { 0, -1, (void *)fn_8c13fbf4 }
};
