typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc7e4 S_g8c4dc7e4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern int g_8c4dc7e0;
extern S_g8c4dc7e4 *g_8c4dc7e4;
extern char g_8c31e15c[];
extern int operation_8c105360(int);
extern int call_8c18de4c(int);
extern void call_8c0787cc(void *, int);
void operation_8c1a4d24(void)
{
    int t1;
    int t2;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = operation_8c105360((int)(g_8c31e15c + 0x113));
    g_8c4dc7e4 = (S_g8c4dc7e4 *)(int)(t1);
    t2 = call_8c18de4c(0x1a1800);
    g_8c4dc7e0 = (int)(t2);
    call_8c0787cc(g_8c4dc7e4, t2);
}
