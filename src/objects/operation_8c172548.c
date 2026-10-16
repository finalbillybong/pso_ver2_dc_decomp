typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern void call_8c3889a4(int, void *, int);
void operation_8c172548(int a0)
{
    int v1;
    v1 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2));
    if (*(int *)0x8c4db9e8 != 0 && v1 >= 0 && 0xfd > v1) {
        call_8c3889a4((int)(*(int *)0x8c4db9e8 + v1 + 0x3214), (void *)((void *)0x8c4db4d4), 4);
    }
}
