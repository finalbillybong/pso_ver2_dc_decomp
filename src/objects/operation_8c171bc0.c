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
extern void call_8c12b77c(Frame *, int, int);
void operation_8c171bc0(int a0, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    v1 = (int)((unsigned char)a1 << 2);
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = 0;
    v2 = (int)*(int *)0x8c4db9e8;
    if (v2 != 0) {
        v3 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2));
        if (v3 >= 0 && 0xff > v3) {
            call_8c12b77c((Frame *)((&frame)), (int)(v2 + v3 + 0x3214), 2);
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = (&frame)->f00;
        }
    }
}
