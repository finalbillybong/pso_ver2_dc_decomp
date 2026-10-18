typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x2];
    char f02;
    char unknown3[0x1];
    short f04;
    char unknown6[0x2];
};
extern void call_8c158570(int, void *, Frame *);
int operation_8c163900(int a0)
{
    Frame frame;
    int v1;
    short v2;
    int v3;
    v1 = (int)((unsigned char)a0 + -1);
    call_8c158570(v1, (void *)(&(&frame)->f04), (Frame *)((&frame)));
    call_8c158570(a0, (void *)(&(&frame)->f02), (Frame *)((&frame)));
    v2 = (short)-1;
    if ((&frame)->f04 != v2 && *(short *)&(&frame)->f02 != -1) {
        if ((&frame)->f04 == *(short *)&(&frame)->f02) {
            v3 = (int)v1;
        } else {
            v3 = (int)a0;
        }
        return (int)(v3);
    }
    return (int)(a0);
}
