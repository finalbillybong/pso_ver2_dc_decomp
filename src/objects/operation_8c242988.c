typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x8];
    Arg0_34 *f34;
    Arg0_38 *f38;
    int f3c;
    char unknown40[0x8];
    int f48;
    char unknown4c[0x14];
    int f60;
};
extern void operation_8c244258(void *);
extern int call_8c2436e4(Object *, int);
extern void operation_8c2436b8(int, int, int);
extern int call_8c36e998(void);
extern int call_8c36ea6c(void *, int);
extern int call_8c36e9a2(int, int);
extern void operation_8c0de330(int);
extern int call_8c244a18(Object *);
extern void call_8c24488c(Object *, int);
extern void call_8c244730(Object *);
extern void call_8c243cd4(Object *);
void operation_8c242988(Object *o)
{
    float v3;
    int v4;
    int v5;
    int v6;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    switch (o->f24) {
    case -1:
        break;
    case 0:
        operation_8c244258((void *)o);
        o->f24 = 1;
    case 1:
        t1 = call_8c2436e4(o, 1);
        if (t1 != 0) {
            operation_8c2436b8(5, 0, 0);
            return;
        }
        t2 = call_8c36e998();
        t3 = call_8c36ea6c((void *)(o->f34), t2);
        t4 = call_8c36e9a2(t3, 4);
        v3 = (float)(float)t4;
        if (0.0f > (float)t4) {
            v3 = (float)((float)t4 + 4294967296.0f);
        }
        v4 = (int)(int)(v3 * 1e-06f);
        v5 = (int)((int)o->f3c - v4);
        if (v5 > 0) {
            v6 = (int)v5;
        } else {
            v6 = (int)0;
        }
        o->f38 = (Arg0_38 *)v6;
        operation_8c0de330((int)(o->f38));
        if (o->f38 == 0) {
            o->f28 = 3;
            operation_8c2436b8(3, 0, 0);
            return;
        }
        t5 = call_8c244a18(o);
        if (t5 != 0) {
            if (--o->f48 > 0) {
                goto L_8c242a52;
            }
            o->f28 = 3;
            operation_8c2436b8(3, 0, 0);
        } else {
            o->f48 = 0x12c;
        }
L_8c242a52:;
        call_8c24488c(o, v4);
        if (!(--o->f60 > 0)) {
            call_8c244730(o);
            o->f60 = 0x5a;
        }
        call_8c243cd4(o);
    }
}
