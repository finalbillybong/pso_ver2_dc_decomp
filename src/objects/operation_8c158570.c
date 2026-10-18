typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_34 S_g8c4daaa4_34;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    short f00;
};
struct S_g8c4daaa4 {
    char unknown0[0x34];
    S_g8c4daaa4_34 *f34;
};
struct Arg2 {
    short f00;
};
extern S_g8c4daaa4 *g_8c4daaa4;
void operation_8c158570(int a0, Arg1 *a1, Arg2 *a2)
{
    unsigned char i;
    i = (unsigned char)(a0 & 0x7f);
    if (i < 0x29 && a1 != 0 && a2 != 0) {
        a1->f00 = *(short *)((char *)((char *)g_8c4daaa4->f34 + 0x0) + (i << 2));
        a2->f00 = *(short *)((char *)((char *)g_8c4daaa4->f34 + 0x2) + (i << 2));
        return;
    }
    a1->f00 = -1;
    a2->f00 = -1;
}
