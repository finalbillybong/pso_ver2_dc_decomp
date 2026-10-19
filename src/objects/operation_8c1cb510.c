typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct S_vv32 S_vv32;
struct Object {
    char unknown0[0x44];
    Arg0_44 *f44;
};
struct S_vv32 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c1571f4(void *);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
extern void call_8c372c46(int, void *);
extern void operation_8c1ca7e8(void *);
extern int operation_8c01d8a8(void *, int);
void operation_8c1cb510(Object *o)
{
    S_vv32 *v32;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v32 = (S_vv32 *)o->f44;
    if (((v32->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)v32);
        switch (t1) {
        case 0:
            t2 = operation_8c19b054();
            t3 = call_8c372d38((int)((char)t2), (void *)((void *)0x8c319870));
            if (t3 == 0) {
                t4 = operation_8c19b054();
                call_8c372c46((int)((char)t4), (void *)((void *)0x8c319870));
            }
            operation_8c1ca7e8((void *)o);
            return;
        case 1:
            operation_8c1ca7e8((void *)o);
            return;
        }
    }
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t5 == 0) {
            goto L_8c1cb596;
        }
    }
    operation_8c1ca7e8((void *)o);
    return;
L_8c1cb596:;
    t6 = operation_8c19b054();
    t7 = call_8c372d38((int)((char)t6), (void *)((void *)0x8c319870));
    if (t7 != 0) {
        operation_8c1ca7e8((void *)o);
    }
}
