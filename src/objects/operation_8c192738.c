typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2cc S_g8c4dc2cc;
extern S_g8c4dc2cc *g_8c4dc2cc;
extern int g_8c4dc2d0;
int operation_8c192738(void)
{
    int v1;
    if (g_8c4dc2d0 != 0) {
        v1 = (int)(g_8c4dc2d0 + -1);
        g_8c4dc2d0 = (int)(v1);
        return *(unsigned short *)((char *)((char *)g_8c4dc2cc + 0x0) + (v1 << 1));
    }
    return 0xffff;
}
