/* Static data 8c300f34-8c300ff4: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } MemberFunction;

extern void operation_8c097404(void);
extern void operation_8c0974dc(void);
extern void operation_8c0974e0(void);
extern void operation_8c097588(void);
extern void operation_8c09759c(void);
extern void operation_8c097864(void);
extern void fn_8c097868(void);

/* CodeWarrior pointers to member functions {this offset, vtable index (-1: non-virtual),
   function}; {0, 0, 0} is a null member pointer. */
const MemberFunction member_function_table_8c300f34[16] = {
    { 0, -1, (void *)operation_8c097404 },
    { 0, -1, (void *)operation_8c0974dc },
    { 0, -1, (void *)operation_8c0974e0 },
    { 0, -1, (void *)operation_8c0974dc },
    { 0, -1, (void *)operation_8c0974dc },
    { 0, -1, (void *)operation_8c097588 },
    { 0, -1, (void *)operation_8c09759c },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, -1, (void *)operation_8c097864 },
    { 0, -1, (void *)fn_8c097868 }
};
