typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c506080;
extern int allocate_block(void *, unsigned int);
extern void operation_8c2232f8(void *, int, int, int, int);
void operation_8c223424(void)
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
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x30);
    if (t1 != 0) {
        operation_8c2232f8((void *)t1, 0, 0xc, (int)((void *)0x8c2234d8), (int)((void *)0x8c223504));
    }
    g_8c506080 = (int)(t1);
}
