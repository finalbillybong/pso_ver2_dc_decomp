typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_g8c4db408_0 {
    short f00;
};
void operation_8c172404(int a0, int a1)
{
    S_g8c4db408_0 *v1;
    int v2;
    v1 = *(S_g8c4db408_0 **)((char *)*(int **)0x8c4db408 + ((unsigned char)a1 << 2));
    v2 = (unsigned short)(int)v1;
    v1->f00 = v2;
}
