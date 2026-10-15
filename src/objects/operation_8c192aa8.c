typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    int f10;
};
extern int operation_8c054248(void *, int, int);
extern void call_8c1922a0(void);
void operation_8c192aa8(void)
{
    S_vv3 *v3;
    int v2;
    int v1;
    int t1;
    v1 = (int)0x40000;
    v2 = (int)0;
    while ((int)v2 != *(int *)0x8c467870) {
        v3 = (S_vv3 *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2));
        if (v3 != 0) {
            t1 = operation_8c054248((void *)v3, 0, v1);
            if (t1 != 0 && (int)v3->f10 == *(int *)0x8c4689e0) {
                v3->f04 |= 1;
            }
        }
        v2 = (int)(v2 + 1);
    }
    call_8c1922a0();
}
