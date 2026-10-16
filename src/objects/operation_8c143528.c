typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da3a8 S_g8c4da3a8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_2c S_vv6_2c;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
    char unknown8[0x24];
    int f2c;
    S_vv1_30 *f30;
};
struct S_vv6 {
    int f00;
    S_vv6_4 *f04;
    char unknown8[0x24];
    S_vv6_2c *f2c;
    S_vv6_30 *f30;
};
extern void call_8c38ae68(void);
extern void call_8c38a714(int, void *);
extern void call_8c3aa702(void *);
extern void call_8c38ad10(void);
extern void call_8c143528(void *);
void operation_8c143528(S_vv1 *a0)
{
    int v2;
    int v5;
    S_vv6 *v6;
    char *v7;
    do {
        call_8c38ae68();
        call_8c38a714(0, (void *)(*(S_g8c4da3a8 **)0x8c4da3a8));
        *(int *)0x8c4da3a8 += 0x40;
        v2 = (int)a0->f00;
        if (((v2 & 8)) == 0) {
            call_8c3aa702((void *)(a0->f04));
        }
        call_8c38ad10();
        if (((v2 & 0x10)) == 0) {
            v5 = (int)a0->f2c;
            v6 = (S_vv6 *)v5;
            do {
                call_8c38ae68();
                call_8c38a714(0, (void *)(*(S_g8c4da3a8 **)0x8c4da3a8));
                *(int *)0x8c4da3a8 += 0x40;
                v7 = (char *)v6->f00;
                if ((((int)(v7) & 8)) == 0) {
                    call_8c3aa702((void *)(v6->f04));
                }
                call_8c38ad10();
                if ((((int)(v7) & 0x10)) == 0) {
                    call_8c143528((void *)(v6->f2c));
                }
                v6 = (S_vv6 *)v6->f30;
            } while (v6 != 0);
        }
        a0 = (S_vv1 *)a0->f30;
    } while (a0 != 0);
}
