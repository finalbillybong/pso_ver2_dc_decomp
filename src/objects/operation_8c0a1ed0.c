typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ee80 S_g8c46ee80;
struct S_g8c46ee80 {
    char unknown0[0xd8];
    int fd8;
    float fdc;
};
extern void call_8c191504(int);
void operation_8c0a1ed0(int a0)
{
    if (*(int *)0x8c46ee80 != 0) {
        if (a0 != 0) {
            if (a0 == 1) {
                goto L_8c0a1f08;
            }
            if (a0 == 2) {
                goto L_8c0a1f24;
            }
            return;
        }
        (*(S_g8c46ee80 **)0x8c46ee80)->fd8 = 0x14;
        (*(S_g8c46ee80 **)0x8c46ee80)->fdc = 0.0175f;
        call_8c191504(1);
        return;
L_8c0a1f08:;
        (*(S_g8c46ee80 **)0x8c46ee80)->fd8 = 0x1e;
        (*(S_g8c46ee80 **)0x8c46ee80)->fdc = 0.175f;
        call_8c191504(1);
        return;
L_8c0a1f24:;
        (*(S_g8c46ee80 **)0x8c46ee80)->fd8 = 0x1e;
        (*(S_g8c46ee80 **)0x8c46ee80)->fdc = 0.05f;
        call_8c191504(1);
    }
}
