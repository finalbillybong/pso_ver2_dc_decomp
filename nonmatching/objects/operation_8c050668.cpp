/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c050668
 * function: operation_8c050668
 * language: c++
 * reference size: 648 bytes
 * compiled size: 648 bytes (+0.0%)
 * differing lines: 16 of 267 reference instruction lines
 * differing bytes: 19
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x1c];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0x48];
    short f356;
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x24];
    char f394;
    char f395;
    char unknown396[0x4];
    short f39a;
    char unknown39c[0xc];
    float f3a8;
} ObjectData;
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
extern "C" float distance_xz(void *, void *);
extern "C" float object_random_fraction(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c0446f8(Object *, float, float, float, void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c0444f8(Object *, float, Vector3);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" void transform_actor_records(void *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c050668(Object *o)
{
    float v1;
    char v3;
    short *pf1;
    int t1;
    float t2;
    float t3;
    float t4;
    t1 = o->v20(0x1e);
    if (t1 != 0) {
        if (((ObjectData *)o)->f395 != 0) {
            v1 = (float)10.0f;
        } else {
            v1 = (float)100.0f;
        }
        t2 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
        if (t2 > (v1 * v1)) {
            ((ObjectData *)o)->f394 = 2;
            ((ObjectData *)o)->ff0 = 3;
        } else {
            v3 = (char)((ObjectData *)o)->f395;
            if (((ObjectData *)o)->f394 != (char)v3) {
                ((ObjectData *)o)->f394 = v3;
                ((ObjectData *)o)->f30c = 0;
            }
        }
    }
    if (((ObjectData *)o)->f394 != 0) {
        if (((ObjectData *)o)->f394 == 1) {
            goto L_8c0507a6;
        }
        if (((ObjectData *)o)->f394 == 2) {
            goto L_8c0507f4;
        }
    } else {
        if (((ObjectData *)o)->f30c != 0) {
            if (((ObjectData *)o)->f30c == 1) {
                goto L_8c050724;
            }
            if (((ObjectData *)o)->f30c == 2) {
                goto L_8c05074e;
            }
            if (((ObjectData *)o)->f30c == 3) {
                goto L_8c050764;
            }
        } else {
            t3 = object_random_fraction((void *)o);
            ((ObjectData *)o)->f39a = (int)((t3 + 1.0f) * 45.0f);
            ((ObjectData *)o)->ff0 = 1;
            ((ObjectData *)o)->f30c = 1;
L_8c050724:;
            *(short *)((char *)o + 0x39a) -= 1;
            if (!(((ObjectData *)o)->f39a >= 0)) {
                play_se_8c05fbf8(0x3000b, (void *)(((char *)o + 0x3c)), 0, 0);
                ((ObjectData *)o)->f30c = 2;
                goto L_8c05079c;
L_8c05074e:;
                ((ObjectData *)o)->f3a8 = 30.0f;
                ((ObjectData *)o)->ff0 = 3;
                ((ObjectData *)o)->f30c = 3;
L_8c050764:;
                call_8c0446f8(o, ((ObjectData *)o)->f36c->f04, 100.0f, 100.0f, (void *)(((ObjectData *)o)->f36c->f08));
                ((ObjectData *)o)->f3a8 -= ((ObjectData *)o)->f36c->f04;
                if (0.0f > ((ObjectData *)o)->f3a8) {
                    ((ObjectData *)o)->f30c = 0;
                }
            }
        }
L_8c05079c:;
        operation_8c01c5f0(o);
        goto L_8c05082e;
L_8c0507a6:;
        ((ObjectData *)o)->ff0 = 0;
        operation_8c01c5f0(o);
        *(short *)((char *)o + 0x39a) -= 1;
        if (!(((ObjectData *)o)->f39a >= 0)) {
            play_se_8c05fbf8(0x3000b, (void *)(((char *)o + 0x3c)), 0, 0);
            t4 = object_random_fraction((void *)o);
            ((ObjectData *)o)->f39a = (int)((t4 + 1.0f) * 6.0f * 30.0f);
            goto L_8c05082e;
L_8c0507f4:;
            operation_8c01c5f0(o);
            call_8c0444f8(o, ((ObjectData *)o)->f36c->f04, *(Vector3 *)&((ObjectData *)o)->f54);
            operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(((char *)o + 0x318)));
        }
    }
L_8c05082e:;
    transform_actor_records((void *)o);
    if (((((ObjectData *)o)->f34 & 0x800000)) == 0) {
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
    if (((((ObjectData *)o)->f34 & 0x40000)) != 0) {
        pf1 = (short *)((char *)o + 0x358);
        if (!(((*pf1)--) >= 0)) {
            ((ObjectData *)o)->f34 &= -0x40001;
            ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
        }
    }
}
