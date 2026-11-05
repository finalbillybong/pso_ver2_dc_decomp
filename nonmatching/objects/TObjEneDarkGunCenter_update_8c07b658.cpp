/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07b658
 * function: TObjEneDarkGunCenter_update_8c07b658
 * language: c++
 * reference size: 696 bytes
 * compiled size: 696 bytes (+0.0%)
 * differing lines: 12 of 278 reference instruction lines
 * differing bytes: 20
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c012a14 S_c8c012a14;
typedef struct Arg0_334 Arg0_334;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2ec];
    Arg0_334 *f334;
    char unknown338[0x58];
    int f390;
    int f394;
    int f398;
    char unknown39c[0x24];
    int f3c0;
} ObjectData;
struct Arg0_334 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_c8c012a14 {
    char unknown0[0x64];
    int f64;
};
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c07b914(Object *);
extern "C" void call_8c07b918(Object *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" int lookup_low_id(int);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" S_c8c012a14 *operation_8c012a14(int);
extern "C" void call_8c07bd40(Object *);
extern "C" void call_8c07bb94(Object *);
extern "C" int call_8c07bce0(Object *);
extern "C" void call_8c07ba88(Object *);
extern "C" void call_8c07bc00(Object *);
extern "C" void operation_8c09e6d0(void *);
extern "C" void TObjEneDarkGunCenter_update_8c07b658(Object *o)
{
    int v4;
    char *v6;
    int v5;
    int v1;
    int v2;
    int v3;
    int v40;
    int v19;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c012a14 *t5;
    int t6;
    int t7;
    float t8;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c07b914(o);
        return;
    }
    call_8c07b918(o);
    switch (((ObjectData *)o)->f390) {
    case 0:
        t2 = o->v20(0x1e);
        if (t2 == 0) {
            goto L_8c07b838;
        }
        t3 = call_8c04a52c(o, 0, 1000.0f);
        if ((unsigned short)t3 != 0xffff) {
            t4 = lookup_low_id((int)((unsigned short)t3));
            ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t4;
            t8 = errno_wrap_8c130334(((ObjectData *)o)->f334->f44 - ((ObjectData *)o)->f44, ((ObjectData *)o)->f334->f3c - ((ObjectData *)o)->f3c);
            v1 = (int)0x3a0;
            v2 = (int)0x1555;
            v3 = (int)0x398;
            v4 = (int)((int)(t8 * 65536.0f / 6.28318405f) + 0x4000);
            v5 = (int)0;
            v6 = (char *)v4;
            while (*(int *)((char *)((char *)o + 0x0) + (v3)) > v5) {
                t5 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v5 << 1))));
                if (t5 != 0) {
                    t5->f64 = (int)v6;
                }
                v6 = (char *)(v6 + v2);
                v5 = (int)(v5 + 1);
            }
            ((ObjectData *)o)->f394 = 0x5a;
            ((ObjectData *)o)->f390 = 1;
            goto L_8c07b838;
        }
        call_8c07bd40(o);
        break;
    case 1:
        *(int *)((char *)o + 0x394) -= 1;
        if (((ObjectData *)o)->f394 > 0) {
            goto L_8c07b838;
        }
        call_8c07bb94(o);
        ((ObjectData *)o)->f394 = 0xd2;
        ((ObjectData *)o)->f390 = 2;
        break;
    case 2:
        *(int *)((char *)o + 0x394) -= 1;
        t6 = call_8c07bce0(o);
        if (t6 == 0) {
            if (((ObjectData *)o)->f394 > 0) {
                goto L_8c07b838;
            }
        }
        ((ObjectData *)o)->f390 = 3;
        break;
    case 3:
        t7 = call_8c04a52c(o, 0, 1000.0f);
        if ((unsigned short)t7 != 0xffff) {
            call_8c07bb94(o);
            call_8c07ba88(o);
            goto L_8c07b838;
        }
        ((ObjectData *)o)->f390 = 0;
        break;
    case 4:
        *(int *)((char *)o + 0x394) -= 1;
        if (((ObjectData *)o)->f394 > 0) {
            goto L_8c07b838;
        }
        call_8c07bc00(o);
        break;
    case 5:
        *(int *)((char *)o + 0x394) -= 1;
        if (((ObjectData *)o)->f394 > 0) {
            goto L_8c07b838;
        }
        ((ObjectData *)o)->f390 = 3;
        break;
    case 6:
        *(int *)((char *)o + 0x394) -= 1;
        if (!(((ObjectData *)o)->f394 > 0)) {
            ((ObjectData *)o)->f390 = 3;
        }
    }
L_8c07b838:;
    v40 = (int)((ObjectData *)o)->f3c0;
    if (!(v40 >= 0)) {
        if (((ObjectData *)o)->f398 > 0) {
            ((ObjectData *)o)->f3c0 = 0x5a;
            return;
        }
        v19 = (int)(v40 + -1);
        ((ObjectData *)o)->f3c0 = (int)v19;
        if ((float)v19 > -30.0f) {
            return;
        }
        ((ObjectData *)o)->f3c0 = 0x5a;
        return;
    }
    if (((ObjectData *)o)->f398 > 0) {
        ((ObjectData *)o)->f3c0 = 0x5a;
        return;
    }
    if (!((((ObjectData *)o)->f3c0 = v40 + -1) > 0)) {
        operation_8c09e6d0((void *)o);
        ((ObjectData *)o)->f04 |= 1;
    }
}
