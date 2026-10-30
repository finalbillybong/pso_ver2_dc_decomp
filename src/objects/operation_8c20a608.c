typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0xb1];
    char fb1;
};
void operation_8c20a608(void)
{
    int v1;
    S_vv2 *v2;
    int m;
    v1 = (int)0;
    v2 = (S_vv2 *)(void *)0x8c504a28;
    m = -3;
    while (8 > v1) {
        if (((v2->fb1 & 1)) != 0) {
            v2->fb1 &= m;
        }
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 180);
    }
}
