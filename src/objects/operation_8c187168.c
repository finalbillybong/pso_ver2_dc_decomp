typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
void TSetEvtScriptTest_v07_8c187168(void)
{
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x11;
    }
}
