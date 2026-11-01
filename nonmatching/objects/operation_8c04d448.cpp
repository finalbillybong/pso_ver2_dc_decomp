/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04d448
 * function: operation_8c04d448
 * language: c++
 * reference size: 1460 bytes
 * compiled size: 1476 bytes (+1.1%)
 * differing lines: 160 of 527 reference instruction lines
 * differing bytes: 912
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct S_L8c46f5c0 S_L8c46f5c0;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s3cc;
typedef struct Block_L8c46f5a0_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_L8c46f5a0_0;
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81(int);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x4];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x48];
    int f1b8;
    char unknown1bc[0x150];
    short f30c;
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    char unknown370[0x48];
    short f3b8;
    char unknown3ba[0xe];
    int f3c8;
} ObjectData;
struct S_L8c46f5a0 {
    Block_L8c46f5a0_0 f00;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
class Arg0_s3cc {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3ccData {

} Arg0_s3ccData;
extern int g_8c467874;
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f5c0 g_8c46f5c0;
extern "C" char gc_8c46f5c0[];
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c1147cc(void *);
extern "C" void call_8c1084fc(void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float call_8c130334(float, float);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" int angle_step(int, int, int);
extern "C" float call_8c12c714(float);
extern "C" void TEffHit_create_8c0a061c(void *);
extern "C" void set_330(void *, short);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void apply_object_velocity(void *);
extern "C" void call_8c0446f8(Object *, void *, float, float, float);
extern "C" void transform_actor_records(void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c04d448(Object *o)
{
    int v2;
    int v34;
    int v35;
    int v37;
    int v42;
    int v44;
    int t1;
    float t2;
    int t3;
    int t4;
    float t5;
    float t6;
    int t7;
    int t8;
    float t9;
    float t10;
    int t11;
    int t12;
    float t13;
    float t14;
    float t15;
    float t16;
    float t17;
    operation_8c01c5f0(o);
    if (((ObjectData *)o)->f30c != 0) {
        if (((ObjectData *)o)->f30c == 1) {
            goto L_8c04d4b0;
        }
        if (((ObjectData *)o)->f30c == 2) {
            goto L_8c04d4fe;
        }
        v2 = (int)0x30c;
    } else {
        ((ObjectData *)o)->f34 |= 0x4040000;
        operation_8c1147cc((void *)(((char *)o + 0x3cc)));
        call_8c1084fc((void *)(((char *)o + 0x3c)));
        ((ObjectData *)o)->f30c = 1;
        goto L_8c04d9c4;
L_8c04d4b0:;
        ((ObjectData *)o)->f34 |= 0x4040000;
        t1 = ((Arg0_s3cc *)((char *)o + 0x3cc))->v5();
        if (t1 != 1) {
            goto L_8c04d9c4;
        }
        ((ObjectData *)o)->f30c = 2;
        ((ObjectData *)o)->ff0 = 1;
        ((ObjectData *)o)->f3c8 = 0;
        goto L_8c04d9c4;
        v2 = (int)0;
    }
    *(short *)((char *)((char *)o + 0x0) + (v2)) = 2;
L_8c04d4fe:;
    ((ObjectData *)o)->f34 &= -0x4040001;
    switch (((ObjectData *)o)->f3b8) {
    case 1:
        ((ObjectData *)o)->ff0 = 1;
        t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
        if (!(t2 > 10000.0f)) {
        } else {
            *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f54;
            *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f324;
            *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
            *(Vector3 *)&(&g_8c46f5a0)->f00 = *(Vector3 *)&((ObjectData *)o)->f54;
            vector_sub_in_place_8c37f6f0((void *)((void *)&g_8c46f5a0), (void *)(((char *)o + 0x3c)));
            t13 = call_8c130334((&g_8c46f5a0)->f00.f00, (&g_8c46f5a0)->f00.f08);
            v34 = (int)(int)(t13 * 65536.0f / 6.28318405f);
            *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
            *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
            *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f36c->f04;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, v34);
            call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
            njPopMatrix_8c38accc(1);
            call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
            t3 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
            if (t3 == 1) {
                ((ObjectData *)o)->ff0 = 1;
                *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
                t4 = angle_step((int)(((ObjectData *)o)->f64), v34, (int)(((ObjectData *)o)->f36c->f08));
                ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t4;
                v44 = (int)v34;
            } else {
                t6 = call_8c12c714((&g_8c46f5a0)->f00.f00);
                t5 = call_8c12c714((&g_8c46f5a0)->f00.f08);
                if (t5 > t6) {
                    t14 = call_8c130334((&g_8c46f5a0)->f00.f00, 0.0f);
                    v37 = (int)(int)(t14 * 65536.0f / 6.28318405f);
                } else {
                    t16 = call_8c130334(0.0f, (&g_8c46f5a0)->f00.f08);
                    v35 = (int)(int)(t16 * 65536.0f / 6.28318405f);
                    v37 = (int)v35;
                }
                *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
                *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
                *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f36c->f04;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, v37);
                call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
                njPopMatrix_8c38accc(1);
                call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
                t7 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
                if (t7 == 1) {
                    ((ObjectData *)o)->ff0 = 1;
                    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
                    t8 = angle_step((int)(((ObjectData *)o)->f64), v37, (int)(((ObjectData *)o)->f36c->f08));
                    ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t8;
                    v44 = (int)v37;
                } else {
                    t10 = call_8c12c714((&g_8c46f5a0)->f00.f00);
                    t9 = call_8c12c714((&g_8c46f5a0)->f00.f08);
                    if (t9 > t10) {
                        t15 = call_8c130334(0.0f, (&g_8c46f5a0)->f00.f08);
                        v44 = (int)(int)(t15 * 65536.0f / 6.28318405f);
                    } else {
                        t17 = call_8c130334((&g_8c46f5a0)->f00.f00, 0.0f);
                        v42 = (int)(int)(t17 * 65536.0f / 6.28318405f);
                        v44 = (int)v42;
                    }
                    *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
                    *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
                    *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f36c->f04;
                    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                    njRotateY_8c37df90(0, v44);
                    call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
                    njPopMatrix_8c38accc(1);
                    call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
                    t11 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
                    if (t11 == 1) {
                        ((ObjectData *)o)->ff0 = 1;
                        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
                        t12 = angle_step((int)(((ObjectData *)o)->f64), v44, (int)(((ObjectData *)o)->f36c->f08));
                        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t12;
                    } else {
                        if (g_8c467874 == 1) {
                            ((ObjectData *)o)->ff0 = 0;
                        } else {
                            TEffHit_create_8c0a061c((void *)(((char *)o + 0x324)));
                            ((ObjectData *)o)->f1b8 |= 4;
                            set_330((void *)o, (short)0);
                            ((ObjectData *)o)->f34 |= 0xa00;
                            o->v81(0);
                        }
                    }
                }
            }
            call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
            call_8c044410(o, (void *)(((ObjectData *)o)->f64), ((ObjectData *)o)->f36c->f04);
            apply_object_velocity((void *)o);
            goto L_8c04d98a;
        }
        call_8c0446f8(o, (void *)(((ObjectData *)o)->f36c->f08), ((ObjectData *)o)->f36c->f04 * 0.25f, 100.0f, 50.0f);
L_8c04d98a:;
        transform_actor_records((void *)o);
        break;
    default:
        ((ObjectData *)o)->ff0 = 0;
        if (((((ObjectData *)o)->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, (void *)0, 0.0f);
        }
        break;
    }
L_8c04d9c4:;
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    ((ObjectData *)o)->f34 &= -0x200001;
}
