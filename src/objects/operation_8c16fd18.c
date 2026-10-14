typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
void operation_8c16fd18(int a0)
{
    int v1;
    int v2;
    v1 = (int)*(int *)0x8c4703c0;
    if (!(*(int *)0x8c4703c0 >= 0)) {
        v1 = (int)0;
    }
    v2 = (int)v1;
    if (v1 > 3) {
        v2 = (int)3;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)(v2);
}
