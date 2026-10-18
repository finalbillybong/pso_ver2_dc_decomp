typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_2c S_vv7_2c;
typedef struct S_vv7_30 S_vv7_30;
typedef struct S_vv7_4 S_vv7_4;
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
    char unknown8[0x24];
    int f2c;
    S_vv1_30 *f30;
};
struct S_vv7 {
    int f00;
    S_vv7_4 *f04;
    char unknown8[0x24];
    S_vv7_2c *f2c;
    S_vv7_30 *f30;
};
extern void call_8c38ae68(void);
extern void call_8c38a714(int, int);
extern void call_8c3aa702(void *);
extern void call_8c38ad10(void);
extern void call_8c0d1f80(void *);
void operation_8c0d1f80(S_vv1 *a0)
{
    int v2;
    int v3;
    int v6;
    S_vv7 *v7;
    int v8;
    char *v9;
    do {
        call_8c38ae68();
        v2 = (int)*(int *)0x8c46fd74;
        *(int *)0x8c46fd74 = v2 + 0x40;
        call_8c38a714(0, v2);
        v3 = (int)a0->f00;
        if (((v3 & 8)) == 0) {
            call_8c3aa702((void *)(a0->f04));
        }
        call_8c38ad10();
        if (((v3 & 0x10)) == 0) {
            v6 = (int)a0->f2c;
            v7 = (S_vv7 *)v6;
            do {
                call_8c38ae68();
                v8 = (int)*(int *)0x8c46fd74;
                *(int *)0x8c46fd74 = v8 + 0x40;
                call_8c38a714(0, v8);
                v9 = (char *)v7->f00;
                if ((((int)(v9) & 8)) == 0) {
                    call_8c3aa702((void *)(v7->f04));
                }
                call_8c38ad10();
                if ((((int)(v9) & 0x10)) == 0) {
                    call_8c0d1f80((void *)(v7->f2c));
                }
                v7 = (S_vv7 *)v7->f30;
            } while (v7 != 0);
        }
        a0 = (S_vv1 *)a0->f30;
    } while (a0 != 0);
}
