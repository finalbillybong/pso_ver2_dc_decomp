typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c44be90 *g_8c44be90;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c073f34(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c01ef50(int, void *, int);
int operation_8c01e814(int a0)
{
    int t1;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    call_8c073f34(a0);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xc7c);
    if (t1 != 0) {
        call_8c01ef50(t1, g_8c44be90, a0);
    }
    return (int)(t1);
}
