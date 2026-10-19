typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
extern S_g8c4db4e4 *g_8c4db4e4;
extern int call_8c12b0cc(void *);
extern void call_8c18e720(void *, void *);
void operation_8c1727e8(void)
{
    int t1;
    t1 = call_8c12b0cc((void *)((void *)0x8c4db484));
    call_8c18e720(g_8c4db4e4, (void *)((void *)0x8c4db484));
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t1);
}
