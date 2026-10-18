typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
struct S_vv1 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
    int f10;
};
struct S_vv13 {
    unsigned char f00;
    unsigned char f01;
};
extern void operation_8c09ccfc(void);
extern void call_8c036d04(S_vv13 *);
void operation_8c09cc48(void)
{
    S_vv1 *v1;
    int v11;
    int v12;
    S_vv13 *v13;
    v1 = *(S_vv1 **)0x8c41cba0;
    switch (*(int *)0x8c46ec2c) {
    case 0:
        break;
    case 1:
        if ((v1->f10 & 0x20) != 0 && (v1->f08 & 0x20000) != 0) {
            operation_8c09ccfc();
        }
        *(int *)0x8c46ec28 += 1;
        break;
    case 2:
        v11 = 0x20000;
        while (v11 > (v12 = *(int *)0x8c46ec24)) {
            v13 = (S_vv13 *)(*(int *)0x8c46ec20 + v12);
            if ((unsigned char)v13->f00 != 0) {
                call_8c036d04(v13);
                *(int *)0x8c46ec24 += v13->f01;
            } else {
                *(int *)0x8c46ec2c = 3;
                break;
            }
        }
        *(int *)0x8c46ec28 += 1;
        break;
    case 3:
        *(int *)0x8c46ec2c = 0;
        break;
    }
}
