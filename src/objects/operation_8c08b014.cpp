typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
class Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
class Arg0_20 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6();
};
typedef struct Arg0_20Data {

} Arg0_20Data;
extern "C" char g_8c41cba0[];
extern "C" void call_8c355cf8(void);
extern "C" int operation_8c0e9ab8(void);
extern "C" int operation_8c01d8a8(void *, int);
extern "C" void operation_8c01c244(int);
extern "C" void call_8c355d04(void);
extern "C" void operation_8c08b014(Object *o)
{
    int v3;
    char *p;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    call_8c355cf8();
    t1 = o->f20->v6();
    if (t1 != 3) {
        t2 = o->f20->v6();
        if (t2 != 4) {
            goto L_8c08b046;
        }
    }
    o->f04 |= 1;
    return;
L_8c08b046:;
    t3 = operation_8c0e9ab8();
    switch ((char)t3) {
    case 0:
        p = g_8c41cba0;
        v3 = *(int *)(p + 0x28);
        if (((v3 & 4)) == 0) {
            if (((v3 & 2)) == 0) {
                if (((v3 & 0x400)) == 0) {
                    if (((v3 & 0x200)) == 0) {
                        if (((v3 & 8)) == 0) {
                            if (((v3 & 0x10)) == 0) {
                                if (((v3 & 0x20)) == 0) {
                                    if (((v3 & 0x40)) == 0) {
                                        if (((v3 & 0x80)) == 0) {
                                            if (((v3 & 0x20000)) == 0) {
                                                if (((v3 & 0x10000)) == 0) {
                                                    p += 0x110;
                                                    t4 = operation_8c01d8a8((void *)p, 4);
                                                    if (t4 == 0) {
                                                        t5 = operation_8c01d8a8((void *)p, 2);
                                                        if (t5 == 0) {
                                                            goto L_8c08b122;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        o->f04 |= 1;
        operation_8c01c244(2);
        return;
    case 1:
        p = g_8c41cba0;
        v3 = *(int *)(p + 0x28);
        if (((v3 & 2)) == 0) {
            if (((v3 & 8)) == 0) {
                p += 0x110;
                t6 = operation_8c01d8a8((void *)p, 4);
                if (t6 == 0) {
                    t7 = operation_8c01d8a8((void *)p, 2);
                    if (t7 == 0) {
                        goto L_8c08b122;
                    }
                }
            }
        }
        o->f04 |= 1;
        return;
    }
L_8c08b122:;
    call_8c355d04();
}
