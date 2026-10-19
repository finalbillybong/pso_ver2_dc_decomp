typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_2c Arg1_2c;
typedef struct Arg1_30 Arg1_30;
typedef struct Arg1_4 Arg1_4;
struct Arg1 {
    int f00;
    Arg1_4 *f04;
    char unknown8[0x24];
    Arg1_2c *f2c;
    Arg1_30 *f30;
};
extern int g_8c46f560;
extern int g_8c510f84;
extern int g_8c510f88;
extern int g_8c575570;
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37dc90(void *, int);
extern void call_8c37e390(void *);
extern void call_8c38c0f0(int);
extern void call_8c3aa702(void *);
extern void call_8c24b1e4(int, void *);
extern void call_8c38ad10(void);
void operation_8c24b1e4(int a0, Arg1 *a1)
{
    char *v1;
    char *v34;
    v1 = (char *)a1->f00;
    call_8c38ae68();
    if ((((int)(v1) & 1)) == 0) {
        call_8c382a40((void *)(((char *)a1 + 0x8)));
    }
    if ((((int)(v1) & 2)) == 0) {
        call_8c37dc90((void *)(((char *)a1 + 0x14)), (int)((int)(v1) & 0x20));
    }
    if ((((int)(v1) & 4)) == 0) {
        call_8c37e390((void *)(((char *)a1 + 0x20)));
    }
    if ((((int)(v1) & 8)) == 0) {
        v34 = (char *)a1->f04;
        if (v34 != 0) {
            if ((int)(a1) == g_8c510f84 || (int)(a1) == g_8c510f88) {
                g_8c46f560 = (int)(g_8c575570);
                g_8c575570 |= 0x10;
                call_8c38c0f0((int)(a0 + 0x10c));
                call_8c3aa702((void *)(a1->f04));
                call_8c38c0f0((int)((void *)0x8c305fd8));
                g_8c575570 = (int)(g_8c46f560);
                goto L_8c24b27e;
            }
            call_8c3aa702((void *)v34);
        }
    }
L_8c24b27e:;
    if (a1->f2c != 0) {
        call_8c24b1e4(a0, (void *)(a1->f2c));
    }
    call_8c38ad10();
    if (a1->f30 != 0) {
        call_8c24b1e4(a0, (void *)(a1->f30));
    }
}
