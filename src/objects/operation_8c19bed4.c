typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_158 Arg0_158;
typedef struct Arg0_15c Arg0_15c;
typedef struct Arg0_160 Arg0_160;
typedef struct Arg0_164 Arg0_164;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x10];
    int f4c;
    char unknown50[0x4];
    Arg0_54 *f54;
    char unknown58[0xf8];
    int f150;
    char unknown154[0x4];
    Arg0_158 *f158;
    Arg0_15c *f15c;
    Arg0_160 *f160;
    Arg0_164 *f164;
};
struct Frame {
    Block8 f00;
};
struct Arg0_15c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c31cc44[];
extern int operation_8c220ce0(void);
extern int operation_8c156c6c(int);
extern void operation_8c1571d4(void *, int);
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void operation_8c04a9c4(void *, int);
extern void operation_8c220ca8(int, int);
extern int call_8c163428(void *, void *, int);
extern void call_8c023bb4(void *, void *);
extern void operation_8c1005bc(int);
void operation_8c19bed4(Object *o)
{
    Frame frame;
    S_vv7 *v7;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    if (o->f15c == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31cc3c;
        t2 = operation_8c156c6c((int)(&frame));
        o->f15c = (Arg0_15c *)t2;
        operation_8c1571d4((void *)(o->f15c), 0);
    }
    if (o->f15c == 0) {
    } else {
        if (((o->f15c->f80 & 0xffff & 2)) == 0) {
        } else {
            t3 = operation_8c1571f4((void *)(o->f15c));
            if (t3 == 0) {
                if (o->f164 != 0) {
                    request_resource_release((void *)(o->f164));
                    o->f164 = (Arg0_164 *)0;
                }
                if (o->f158 != 0) {
                    request_resource_release((void *)(o->f158));
                    o->f158 = (Arg0_158 *)0;
                }
                if (o->f160 != 0) {
                    request_resource_release((void *)(o->f160));
                    o->f160 = (Arg0_160 *)0;
                }
                if (o->f54 != 0) {
                    v7 = (S_vv7 *)o->f54;
                    v7->f04 |= 1;
                    o->f54 = (Arg0_54 *)0;
                }
                o->f150 = 3;
                request_resource_release((void *)(o->f15c));
                o->f15c = (Arg0_15c *)0;
                operation_8c04a9c4((void *)(o->f28), 0x64);
                operation_8c220ca8(0xa, 1);
                o->f24 = 5;
                return;
            }
            if (t3 == 1) {
                if (o->f164 != 0) {
                    request_resource_release((void *)(o->f164));
                    o->f164 = (Arg0_164 *)0;
                }
                if (o->f158 != 0) {
                    request_resource_release((void *)(o->f158));
                    o->f158 = (Arg0_158 *)0;
                }
                if (o->f160 != 0) {
                    request_resource_release((void *)(o->f160));
                    o->f160 = (Arg0_160 *)0;
                }
                operation_8c04a9c4((void *)(o->f28), 0x64);
                t4 = call_8c163428((void *)(o->f28), (void *)(((char *)o + 0x2c)), 0);
                if (t4 != 0) {
                    operation_8c220ca8(0xc, 1);
                    request_resource_release((void *)(o->f15c));
                    o->f15c = (Arg0_15c *)0;
                    o->f24 = 7;
                } else {
                    o->f38 = (int)(o->f4c);
                    call_8c023bb4((void *)(o->f28), (void *)(((char *)o + 0x2c)));
                    operation_8c220ca8(0xb, 1);
                    request_resource_release((void *)(o->f15c));
                    o->f15c = (Arg0_15c *)0;
                    if (*(int *)0x8c4dc4a8 > 0) {
                        operation_8c1005bc((int)(g_8c31cc44 + 0x35));
                    }
                    o->f24 = 0;
                }
                return;
            }
        }
    }
    if (o->f15c != 0 && ((o->f15c->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f15c));
        o->f15c = (Arg0_15c *)0;
        operation_8c220ca8(8, 1);
        o->f24 = 4;
    }
}
