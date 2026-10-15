typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, int, ...);
void operation_8c08daa8(int a0, int a1, int a2, int a3)
{
    if ((int)a0 == *(int *)0x8c469da4) {
        call_8c38c5b6(-0xff0100);
        call_8c38cf80((int)(a1 << 0x10 | a2), a3);
        call_8c38c5b6(-0xf0f10);
    }
}
