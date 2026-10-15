typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    short f00;
    char unknown2[0x2];
};
extern S_g8c4db408 *g_8c4db408;
extern int g_8c4db9e8;
extern void call_8c3889a4(int, Frame *, int);
void operation_8c1714a8(unsigned int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2));
    if (g_8c4db9e8 != 0 && (unsigned int)0xff > a0) {
        call_8c3889a4((int)(g_8c4db9e8 + a0 + 0x3214), (Frame *)((&frame)), 2);
    }
}
