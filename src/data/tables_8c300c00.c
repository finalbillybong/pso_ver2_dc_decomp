/* Static data 8c300c00-8c300c84: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c0965dc(void);
extern void operation_8c096678(void);
extern void operation_8c0966d8(void);
extern void fn_8c096ad4(void);
extern void fn_8c096c00(void);
extern void operation_8c096ca0(void);
extern void operation_8c096d14(void);
extern void operation_8c0968f4(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c300c00[11] = {
    { 0, -1, (void *)operation_8c0965dc },
    { 0, -1, (void *)operation_8c096678 },
    { 0, -1, (void *)operation_8c0966d8 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, -1, (void *)fn_8c096ad4 },
    { 0, -1, (void *)fn_8c096c00 },
    { 0, -1, (void *)operation_8c096ca0 },
    { 0, -1, (void *)operation_8c096d14 },
    { 0, -1, (void *)operation_8c0968f4 }
};
