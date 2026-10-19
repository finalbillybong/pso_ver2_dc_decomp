typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_274 Arg0_274;
struct Object {
    char unknown0[0x260];
    char f260;
    char f261;
    char unknown262[0x2];
    int f264;
    char unknown268[0xc];
    Arg0_274 *f274;
    int f278;
    char f27c;
};
struct Arg0_274 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c1a6214(Object *);
extern void call_8c01c380(void);
extern void operation_8c1a6240(Object *);
extern void call_8c01c2c8(void);
extern void set_global_8c17bb2c(void);
extern void operation_8c01c1a4(int);
void operation_8c1a56d8(Object *o)
{
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    operation_8c1cc690();
    if (o->f27c == 1) {
        return;
    }
    v1 = (int)0;
    if (o->f278 == 0) {
        v2 = (int)(g_8c41cba0 + 0x20);
        t1 = operation_8c01d858(v2, 0x40, 6, 1);
        if (t1 == 0) {
            t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
            if (t2 == 0) {
                goto L_8c1a573c;
            }
        }
        call_8c05fbf8(0x50000, 0, 0, 0);
        o->f260 -= 1;
L_8c1a573c:;
        t3 = operation_8c01d858(v2, 0x80, 6, 1);
        if (t3 == 0) {
            t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
            if (t4 == 0) {
                goto L_8c1a5774;
            }
        }
        call_8c05fbf8(0x50000, 0, 0, 0);
        o->f260 += 1;
L_8c1a5774:;
        if (o->f260 >= 3) {
            o->f260 = 0;
        }
        if (!(o->f260 >= 0)) {
            o->f260 = 2;
        }
    }
    o->f261 = o->f260;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t5 == 0) {
            goto L_8c1a57c4;
        }
    }
    call_8c05fbf8(0x50001, 0, 0, 0);
    v1 = (int)(v1 | 1);
L_8c1a57c4:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t6 == 0) {
            goto L_8c1a57ee;
        }
    }
    call_8c05fbf8(0x50016, 0, 0, 0);
    v1 = (int)(v1 | 2);
L_8c1a57ee:;
    if (o->f278 != 0) {
        switch ((char)v1) {
        case 1:
            operation_8c1a6214(o);
            call_8c01c380();
            operation_8c1a6240(o);
            o->f278 = 0;
            break;
        case 2:
            operation_8c1a6214(o);
            call_8c01c2c8();
            operation_8c1a6240(o);
            o->f278 = 0;
            break;
        }
        return;
    }
    {
        switch ((char)v1) {
        case 1:
            switch (o->f260) {
            case 0:
                operation_8c1a6214(o);
                call_8c01c2c8();
                operation_8c1a6240(o);
                set_global_8c17bb2c();
                operation_8c01c1a4(2);
                break;
            case 1:
                operation_8c1a6214(o);
                call_8c01c380();
                operation_8c1a6240(o);
                set_global_8c17bb2c();
                operation_8c01c1a4(2);
                break;
            case 2:
                o->f274->f04 |= 0x10;
                operation_8c1a6214(o);
                call_8c01c380();
                operation_8c1a6240(o);
                o->f27c = 1;
                o->f264 = 1;
                break;
            }
            break;
        case 2:
            set_global_8c17bb2c();
            operation_8c01c1a4(2);
            break;
        }
    }
}
