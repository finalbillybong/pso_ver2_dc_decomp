typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x10000 S_x10000;
struct S_x10000 {
    int f00;
};
void operation_8c0d9e70(int a0)
{
    int v2;
    int v3;
    int v1;
    v1 = (int)-2;
    v2 = (int)(a0 + 0x40);
    v3 = (int)0;
    while (4 > v3) {
        ((S_x10000 *)(v2 + v3 * 0xfc))->f00 &= v1;
        v3 = (int)(v3 + 1);
    }
}
