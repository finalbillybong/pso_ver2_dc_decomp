typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
};
extern void call_8c38c0f0(int);
void operation_8c074c30(int a0)
{
    int v1;
    S_vv2 *v2;
    if (a0 != 0) {
        v1 = (int)(((*(int *)0x8c4689f4 & 1)) != 0);
        if (v1 == 0) {
            v2 = (S_vv2 *)(void *)0x8c575570;
            *(int *)0x8c46f560 = (int)(v2->f00);
            *(Block16 *)&*(Block16 *)0x8c46f564 = *(Block16 *)&*(Block16 *)0x8c5755ac;
            v2->f00 = v2->f00 & -0x21 | 0x10;
            call_8c38c0f0(a0);
            *(int *)0x8c4689f4 |= 1;
        }
    }
}
