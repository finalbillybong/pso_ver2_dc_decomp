typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    int f04;
};
void operation_8c1a19cc(int a0, int a1)
{
    int *v2;
    int v1;
    int v3;
    int n;
    v1 = (int)(a1 + 0x30c);
    v2 = (int *)(a0 + 0x20);
    n = 0x200;
    v3 = (int)0;
    while (n > v3) {
        if (*v2 == 0) {
            *v2++ = v1;
            *v2 = 0;
            return;
        }
        v2++;
        v3 = (int)(v3 + 1);
    }
}
