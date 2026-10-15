typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern int g_8c513380;
extern int g_8c513384;
extern int call_8c18de4c(int);
void operation_8c257f4c(void)
{
    int v4;
    int v3;
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
    g_8c513380 = 0;
    g_8c513384 = 0;
    v3 = (int)0x200;
    v4 = (int)0;
    while (v4 != 2) {
        t1 = call_8c18de4c(v3);
        *(int *)((char *)0x8c513388 + (v4 << 2)) = (int)(t1);
        v4 = (int)(v4 + 1);
    }
}
