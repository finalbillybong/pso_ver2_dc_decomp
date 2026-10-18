typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block128 {
    int words[32];
} Block128;
typedef struct Frame Frame;
typedef struct S_g8c4e2fa0 S_g8c4e2fa0;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    Block128 f04;
};
struct S_g8c4e2fa0 {
    Block128 f00;
};
extern S_g8c4e2fa0 *g_8c4e2fa0;
extern void operation_8c036914(void *, int);
void operation_8c1dc9a4(int a0)
{
    Frame frame;
    (&frame)->f00 = 6;
    (&frame)->f01 = 0x21;
    *(Block128 *)&(&frame)->f04 = *(Block128 *)&g_8c4e2fa0->f00;
    operation_8c036914((void *)(&frame), a0);
}
