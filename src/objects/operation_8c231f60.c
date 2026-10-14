typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    int f2c;
};
extern char g_8c338c18[];
extern int call_8c03f6d8(void);
extern void call_8c03f4bc(void);
extern void call_8c03f6cc(Object *);
extern void select_mode19_8c1cc648(void);
extern void select_mode18_8c1cc630(void);
extern void operation_8c01c1a4(int);
extern void call_8c1003d0(void *);
extern void select_mode4_8c1cc4f8(void);
extern void select_mode23_8c1cc678(void);
extern void select_mode10_8c1cc588(void);
void operation_8c231f60(Object *o)
{
    char *v1;
    int t1;
    int t2;
    v1 = (char *)o->f24;
    o->f24 += 1;
    if ((float)(int)v1 > 6.5f) {
        if (o->f2c != 0) {
            if (o->f2c == 1) {
                goto L_8c231fc0;
            }
            if (o->f2c == 2) {
                goto L_8c23200e;
            }
            return;
        }
        t1 = call_8c03f6d8();
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c231fac;
            }
            if (t1 == 2) {
                goto L_8c231fb6;
            }
            return;
        }
        call_8c03f4bc();
        return;
L_8c231fac:;
        call_8c03f6cc(o);
        return;
L_8c231fb6:;
        select_mode19_8c1cc648();
        return;
L_8c231fc0:;
        t2 = call_8c03f6d8();
        if (t2 != 0) {
            if (t2 == 1) {
                goto L_8c231fe0;
            }
            if (t2 == 2) {
                goto L_8c232004;
            }
            return;
        }
        select_mode18_8c1cc630();
        return;
L_8c231fe0:;
        if (*(int *)0x8c4e2e24 != 0) {
            operation_8c01c1a4(9);
            return;
        }
        call_8c1003d0((void *)((g_8c338c18 + 0x5)));
        select_mode4_8c1cc4f8();
        return;
L_8c232004:;
        select_mode23_8c1cc678();
        return;
L_8c23200e:;
        call_8c1003d0((void *)((g_8c338c18 + 0x5)));
        *(char *)0x8c4e3130 = 1;
        select_mode10_8c1cc588();
    }
}
