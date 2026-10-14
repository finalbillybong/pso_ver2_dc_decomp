typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505c24 S_g8c505c24;
extern char g_8c336fc8[];
extern int call_8c247d48(void);
extern int call_8c12b0cc(int);
extern void call_8c18e720(void *, int);
void operation_8c220fc8(void)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c247d48();
    if (t1 != 0) {
        t2 = call_8c12b0cc(t1);
        call_8c18e720((void *)(*(S_g8c505c24 **)0x8c505c24), t1);
        *(int *)0x8c505c24 += t2;
        return;
    }
    t3 = call_8c12b0cc((int)(g_8c336fc8 + 0x30));
    call_8c18e720((void *)(*(S_g8c505c24 **)0x8c505c24), (int)(g_8c336fc8 + 0x30));
    *(int *)0x8c505c24 += t3;
}
