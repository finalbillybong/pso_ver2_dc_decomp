/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cf360
 * function: operation_8c0cf360
 * language: c++
 * reference size: 740 bytes
 * compiled size: 740 bytes (+0.0%)
 * differing lines: 44 of 287 reference instruction lines
 * differing bytes: 40
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c2857f0 S_L8c2857f0;
typedef struct Frame Frame;
typedef struct S_g8c46fc2c S_g8c46fc2c;
typedef struct S_g8c46fc34 S_g8c46fc34;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
class Arg0_334;
class Arg0_3c8;
class S_vv77;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x68];
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x6];
    short f3ae;
    char unknown3b0[0x4];
    int f3b4;
    int f3b8;
    char unknown3bc[0xc];
    Arg0_3c8 *f3c8;
};
class Arg0_334 {
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25(Object *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_334Data;
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
struct S_L8c2857f0 {
    char unknown0[0x8];
    float f08;
};
struct Frame {
    char unknown0[0x30];
};
class S_vv77 {
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
    virtual void v20();
    virtual void v21();
    virtual int v22(Object *, float);
};
typedef struct S_vv77Data {

} S_vv77Data;
class Arg0_3c8 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, void *);
};
typedef struct Arg0_3c8Data {

} Arg0_3c8Data;
extern Block8 g_8c306c4c;
extern S_L8c2857f0 g_8c2857f0;
extern "C" void operation_8c11895c(void *);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c0521a0(Object *);
extern "C" void operation_8c05228c(Object *);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0cf360(Object *o)
{
    Frame frame;
    char *v50;
    int v28;
    int v27;
    int v29;
    S_vv77 *v77;
    int v1;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    int t6;
    if (o->f398 == -1) {
    } else {
        switch (o->f398) {
        default:
            return;
        case 0:
            if (o->f3ae != 0) {
                v1 = (int)0xc;
            } else {
                v1 = (int)2;
            }
            o->ff0 = v1;
            o->f34 |= 0x200000;
            operation_8c11895c((void *)(o->f3c8));
            o->f398 = 1;
        case 1:
            ;
        }
        if (o->f334 != 0) {
            *(Vector3 *)&o->f164 = *(Vector3 *)&((Arg0_334Data *)o->f334)->f324;
            call_8c043f28(o, (void *)(o->f36c->f08));
        }
        operation_8c01c5f0(o);
        v27 = (int)-1;
        t1 = check_range_8c01cf68((void *)o, *(float *)((char *)&g_8c2857f0 + (o->f3ae << 2)));
        if (t1 != 0) {
            if (o->f3b8 != 0) {
                goto L_8c0cf428;
            }
            v28 = (int)4;
            v29 = (int)v28;
        } else {
            t2 = check_range_8c01cf68((void *)o, *(float *)((char *)&g_8c2857f0.f08 + (o->f3ae << 2)));
            v29 = (int)v27;
            if (t2 != 0) {
                v29 = (int)v27;
                if (o->f3b4 == 0) {
                    v29 = (int)3;
                }
            }
        }
        v27 = (int)v29;
L_8c0cf428:;
        if (v27 >= 0) {
            play_se_8c05fbf8(0x30003, (void *)(((char *)o + 0x3c)), 0, 0);
            v77 = (S_vv77 *)o->f334;
            if (v77 != 0) {
                t3 = v77->v22(o, 1.0f);
                if (t3 != 0) {
                    o->f334->v24(o, 1.0f);
                    o->f334->v27(o, 3.0f);
                    if (o->f384 != 0) {
                        t4 = object_random_fraction((void *)o);
                        if (!(t4 > 0.166666672f)) {
                            o->f334->v25(o, 0, *(Block8 *)&g_8c306c4c);
                        }
                    }
                }
            }
        }
        operation_8c0521a0(o);
        operation_8c05228c(o);
        t5 = call_8c119190((void *)(*(S_g8c46fc2c **)((char *)0x8c46fc2c + (o->f3ae << 2))), o->ff8);
        t6 = call_8c119190((void *)(*(S_g8c46fc34 **)((char *)0x8c46fc34 + (o->f3ae << 2))), o->ff8);
        njPushMatrixEx_8c38ae68();
        njUnitMatrix_8c37b5c4(0);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        if (t5 != 0) {
            call_8c3be2dc(0, t5, (Frame *)((&frame)), 2);
            o->f3c8->v5((&frame), ((char *)(&frame) + 0xc));
        }
        if (t6 != 0) {
            v50 = (char *)((char *)(&frame) + 0x18);
            call_8c3be2dc(0, t6, (Frame *)v50, 2);
            o->f3c8->v5(v50, ((char *)(&frame) + 0x24));
        }
        njPopMatrixEx_8c38ad10();
        if (o->fec == 4) {
            return;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 1) {
            o->f39c = o->f30a;
            o->f390 = 1;
        }
        o->f398 = -1;
        return;
    }
    o->f34 &= -0x200001;
}
