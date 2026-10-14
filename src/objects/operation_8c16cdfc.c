typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
extern S_g8c4db404 *g_8c4db404;
extern int g_8c4db41c;
extern int g_8c4db420;
void operation_8c16cdfc(int a0)
{
    char *v1;
    v1 = (char *)g_8c4db41c;
    g_8c4db41c += 1;
    *(int *)((char *)0x8c4db434 + ((int)(v1) << 2)) = (int)(g_8c4db420);
    g_8c4db420 = (int)(*(int *)((char *)((char *)g_8c4db404 + 0x0) + ((unsigned short)a0 << 2)));
}
