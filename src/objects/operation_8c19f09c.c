typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    int f20;
    char unknown24[0x8];
    int f2c;
    int f30;
    int f34;
};
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, int, int);
extern void call_8c19f884(Object *, int);
extern int current_mode_active(void);
extern int current_mode_in_range(void);
void operation_8c19f09c(Object *o, int a1, int a2, int a3)
{
    int v1;
    int v2;
    int v12;
    int t1;
    int t2;
    int t3;
    int t4;
    o->f08 = 11.0f;
    o->f1c = 0x2d;
    v1 = (int)8;
    o->f1d = v1;
    v2 = (int)o->f20;
    if (v2 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v2);
    }
    if (a1 != 0) {
        t1 = operation_8c257e2c(a1);
        t2 = call_8c18de4c((int)(t1 + 1));
        v12 = (int)a1;
        a1 = (int)t2;
        call_8c12b154(a1, v12, (int)(t1 + 1));
        o->tag |= 8;
    }
    o->f20 = (int)(a1);
    call_8c19f884(o, a2);
    o->dispatch = a3;
    if (!(a2 > 0)) {
        o->f30 = -0x979798;
        o->f2c = -0x555556;
        o->tag |= 0xc5;
    } else {
        t3 = current_mode_active();
        if (t3 != 0) {
            t4 = current_mode_in_range();
            if (t4 == 0) {
                goto L_8c19f150;
            }
        }
        o->f30 = -0x979798;
        o->f2c = -0x555556;
        o->tag |= 0x45;
        goto L_8c19f15c;
L_8c19f150:;
        o->f30 = -1;
        o->f2c = -1;
        o->tag |= 0x45;
    }
L_8c19f15c:;
    o->f34 = (int)(o->f30);
}
