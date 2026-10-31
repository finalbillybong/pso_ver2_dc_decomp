/* Static data 8c3f70a4-8c3f70b4: function_table objects, in address order. */

typedef void (*Function)(void);

extern void syMalloc_alloc_8c36cd2a(void);
extern void syMalloc_free_8c36cdf8(void);
extern void fn_8c36d058(void);
extern void fn_8c36ceb0(void);

Function const d_8c3f70a4[4] = {
    syMalloc_alloc_8c36cd2a,
    syMalloc_free_8c36cdf8,
    fn_8c36d058,
    fn_8c36ceb0
};
