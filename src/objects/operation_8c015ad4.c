typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
struct S_g8c418a00 {
    char unknown0[0x2a];
    char f2a;
};
extern S_g8c418a00 *g_8c418a00;
extern int g_8c41bce4;
extern int g_8c5049f0;
extern void call_8c015cd4(void);
extern void operation_8c015e2c(void);
extern void operation_8c015ec8(void);
extern void operation_8c015f58(void);
extern void operation_8c0165d0(void);
extern void operation_8c016354(void);
extern void operation_8c016070(void);
extern void call_8c016108(void);
extern void call_8c0161c0(void);
extern void operation_8c016278(void *);
extern void operation_8c0162d0(void);
extern void call_8c01669c(void);
extern void operation_8c016828(void);
extern void operation_8c0168bc(void);
extern void call_8c015d8c(void);
extern void operation_8c01640c(void);
extern void operation_8c01780c(void);
extern int operation_8c036544(void);
extern void operation_8c208268(void);
extern void operation_8c016d30(void);
extern int operation_8c03661c(void);
extern void operation_8c016e10(void);
extern void call_8c2280f0(void);
void operation_8c015ad4(int a0)
{
    int t1;
    int t2;
    switch (g_8c41bce4) {
    case 1:
        call_8c015cd4();
        break;
    case 2:
        call_8c015cd4();
        break;
    case 3:
        operation_8c015e2c();
        break;
    case 4:
        operation_8c015ec8();
        break;
    case 6:
        operation_8c015f58();
        break;
    case 9:
        operation_8c0165d0();
        break;
    case 10:
        operation_8c016354();
        break;
    case 5:
        operation_8c016070();
        break;
    case 7:
        call_8c016108();
        break;
    case 8:
        call_8c0161c0();
        break;
    case 12:
        operation_8c016278((void *)a0);
        return;
    case 13:
        operation_8c0162d0();
        break;
    case 17:
        call_8c01669c();
        break;
    case 20:
        operation_8c016828();
        break;
    case 22:
        operation_8c0168bc();
        break;
    case 21:
        call_8c015d8c();
        break;
    case 24:
        operation_8c01640c();
        break;
    case 25:
        operation_8c01780c();
        break;
    case 23:
        return;
    case 0:
    case 11:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
        break;
    }
    if (g_8c418a00->f2a == 0) {
        t1 = operation_8c036544();
        if (t1 != 0) {
            goto L_8c015c46;
        }
    }
    g_8c418a00->f2a = 0;
    operation_8c208268();
    operation_8c016d30();
L_8c015c46:;
    t2 = operation_8c03661c();
    if (!(t2 >= 0)) {
        operation_8c016e10();
    }
    if (g_8c5049f0 != 0) {
        call_8c2280f0();
    }
}
