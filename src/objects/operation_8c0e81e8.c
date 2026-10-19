typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3082e4 S_g8c3082e4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c3082e4 *g_8c3082e4;
extern int g_8c470300;
extern int operation_8c105360(int);
void operation_8c0e81e8(void)
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
    t1 = operation_8c105360((int)g_8c3082e4);
    g_8c470300 = (int)(t1);
}
