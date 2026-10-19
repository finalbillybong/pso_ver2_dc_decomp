typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
extern S_g8c4db4e4 *g_8c4db4e4;
extern int g_8c4db9e4;
extern char g_8c318c08[];
extern int call_8c12b0cc(int);
extern void call_8c18e720(void *, int);
void operation_8c172820(void)
{
    int t1;
    int t2;
    char *v2;
    int v1;
    v2 = (char *)g_8c4db9e4;
    if (v2 != 0) {
        v1 = (int)(v2 + 0x1224);
        t1 = call_8c12b0cc(v1);
        call_8c18e720(g_8c4db4e4, v1);
        g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t1);
        return;
    }
    t2 = call_8c12b0cc((int)(g_8c318c08 + 0x65));
    call_8c18e720(g_8c4db4e4, (int)(g_8c318c08 + 0x65));
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t2);
}
