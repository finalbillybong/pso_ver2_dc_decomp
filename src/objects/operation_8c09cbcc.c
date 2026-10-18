typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
};
extern void call_8c02d368(void *, S_vv3 *);
void operation_8c09cbcc(void)
{
    int v2;
    int v1;
    S_vv3 *v3;
    *(int *)0x8c46ec24 = 0;
    v1 = (int)0x20000;
    goto L_8c09cc04;
    v2 = (int)(void *)0x8c46ec24;
L_8c09cbde:;
    v3 = (S_vv3 *)(*(int *)0x8c46ec20 + v2);
    if ((v3->f00) != 0) {
        call_8c02d368((void *)(*(S_g8c418a00 **)0x8c418a00), v3);
        *(int *)0x8c46ec24 += v3->f02;
L_8c09cc04:;
        v2 = (int)*(int *)0x8c46ec24;
        if (v1 > *(int *)0x8c46ec24) {
            goto L_8c09cbde;
        }
    }
}
