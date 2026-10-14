typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4db408 S_g8c4db408;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4db408 *g_8c4db408;
extern char g_8c4db418;
extern int g_8c4db428;
extern int g_8c4db4d0;
extern int operation_8c1747d0(int);
void operation_8c170ea0(int a0)
{
    int t1;
    t1 = operation_8c1747d0((int)g_8c44be88);
    g_8c4db4d0 = (int)(t1);
    *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 0;
    g_8c4db418 = a0;
    g_8c4db428 = 0xb;
}
