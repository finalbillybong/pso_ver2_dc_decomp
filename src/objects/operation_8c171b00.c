typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
extern void call_8c1794e8(int);
void operation_8c171b00(int a0)
{
    int v21;
    v21 = (int)(*(int *)((char *)((char *)*(S_g8c4db404 **)0x8c4db404 + 0x0) + ((unsigned short)a0 << 2)) + *(int *)0x8c4db400);
    if (v21 != 0) {
        call_8c1794e8(v21);
    }
}
