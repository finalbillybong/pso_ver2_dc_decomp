typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    short f04;
};
void operation_8c0fe2f4(void)
{
    S_vv2 *v2;
    int v1;
    int v3;
    v1 = (int)(*(int *)0x8c467874 + *(int *)0x8c467878);
    while (*(int *)0x8c467870 > v1) {
        v2 = (S_vv2 *)*(S_g8c467240 **)((char *)0x8c467240 + (v1 << 2));
        if (v2 != 0) {
            v3 = (int)((int)v2->f00 == *(int *)0x8c30ab10);
            if (v3 != 0) {
                v2->f04 |= 1;
            }
        }
        v1 = (int)(v1 + 1);
    }
}
