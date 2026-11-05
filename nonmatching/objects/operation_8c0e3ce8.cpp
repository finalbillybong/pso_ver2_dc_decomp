/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e3ce8
 * function: operation_8c0e3ce8
 * language: c++
 * reference size: 1536 bytes
 * compiled size: 1552 bytes (+1.0%)
 * differing lines: 244 of 557 reference instruction lines
 * differing bytes: 1243
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
typedef struct Arg0_364 Arg0_364;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv15 S_vv15;
typedef struct S_vv2 S_vv2;
typedef struct S_vv20 S_vv20;
class Object;
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
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
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
    char unknown330[0x34];
    Arg0_364 *f364;
    int f368;
    Arg0_36c *f36c;
    char unknown370[0x4];
    float f374;
    char unknown378[0x1c];
    int f394;
    int f398;
    char unknown39c[0x14];
    float f3b0;
} ObjectData;
struct S_vv2 {
    char unknown0[0x35c];
    int f35c;
    int f360;
};
struct S_vv15 {
    char unknown0[0x364];
    int f364;
};
struct S_vv20 {
    char unknown0[0x398];
    int f398;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_L8c46f5a0 {
    Block_L8c46f5a0_0 f00;
};
extern int g_8c467874;
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f5c0 g_8c46f5c0;
extern "C" char gc_8c46f5c0[];
extern "C" void operation_8c0e4ffc(void *);
extern "C" void operation_8c0e50e0(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c0123d8(Object *);
extern "C" void call_8c012810(Object *, S_vv20 *, Object *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
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
extern "C" void call_8c0446f8(Object *, void *, float, float, float);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void transform_actor_records(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void operation_8c0e3ce8(Object *o)
{
    int v1;
    S_vv2 *v2;
    int v4;
    int v5;
    int v12;
    char *v14;
    int v13;
    int v16;
    S_vv15 *v15;
    int v19;
    S_vv20 *v20;
    int v21;
    float v33;
    float v34;
    int v35;
    char *v63;
    int v36;
    int v38;
    char *v64;
    int v44;
    int v46;
    char *v65;
    float t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    int t7;
    float t8;
    float t9;
    int t10;
    int t11;
    float t12;
    float t13;
    float t14;
    float t15;
    float t16;
    operation_8c0e4ffc((void *)o);
    operation_8c0e50e0((void *)o);
    operation_8c01c5f0(o);
    if (((ObjectData *)o)->f30c != 0 && ((ObjectData *)o)->f30c == 1) {
        v2 = (S_vv2 *)/* ? clobbered */ 0;
    } else {
        ((ObjectData *)o)->f30c = 1;
        call_8c0123d8(o);
        v2 = (S_vv2 *)o;
        goto L_8c0e3d42;
        v1 = (int)/* ? clobbered */ 0;
        do {
            v2 = (S_vv2 *)v1;
L_8c0e3d42:;
            v1 = (int)v2->f360;
        } while (v1 != 0);
        v4 = (int)v2->f35c;
        switch (v4) {
        case 0:
            break;
        }
        v5 = (int)(v4 != 0);
        ((ObjectData *)o)->f394 = (int)v5;
    }
    v12 = (int)((ObjectData *)o)->f368;
    v19 = (int)0;
    if (v12 != 0) {
        v15 = (S_vv15 *)v12;
        v16 = (int)0;
        goto L_8c0e3d82;
        v13 = (int)0;
        v14 = (char *)v12;
        do {
            v15 = (S_vv15 *)v14;
            v16 = (int)(v13 + 1);
L_8c0e3d82:;
            v13 = (int)v16;
            v14 = (char *)v15->f364;
        } while (v14 != 0);
        v19 = (int)(v13 + 1);
    }
    ((ObjectData *)o)->f398 = (int)v19;
    v20 = (S_vv20 *)((ObjectData *)o)->f364;
    if (v20 != 0) {
        v21 = (int)(v20->f398 - (int)((ObjectData *)o)->f398);
        if (v21 > 1) {
            call_8c012810(o, v20, o);
            ((ObjectData *)o)->f398 += 1;
            v20->f398 -= 1;
        } else {
            if (-1 > v21) {
                call_8c012810(o, (S_vv20 *)o, (Object *)v20);
                ((ObjectData *)o)->f398 -= 1;
                v20->f398 += 1;
            }
        }
    }
    v33 = (float)((ObjectData *)o)->f36c->f04;
    v34 = (float)((ObjectData *)o)->f374;
    v33 = (float)(v33 + ((ObjectData *)o)->fdc->f0c);
    v33 = (float)(v33 + v34);
    t1 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
    if (!(t1 > (v33 * v33))) {
        v46 = (int)v20;
    } else {
        *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f54;
        *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f324;
        *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
        *(Vector3 *)&(&g_8c46f5a0)->f00 = *(Vector3 *)&((ObjectData *)o)->f54;
        vector_sub_in_place_8c37f6f0((void *)((void *)&g_8c46f5a0), (void *)(((char *)o + 0x3c)));
        t12 = errno_wrap_8c130334((&g_8c46f5a0)->f00.f00, (&g_8c46f5a0)->f00.f08);
        v35 = (int)(int)(t12 * 65536.0f / 6.28318405f);
        *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f3b0;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v35);
        call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
        njPopMatrix_8c38accc(1);
        call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
        t2 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
        if (t2 == 1) {
            ((ObjectData *)o)->ff0 = 2;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
            v63 = (char *)((ObjectData *)o)->f36c->f08;
            t3 = angle_step((int)(((ObjectData *)o)->f64), v35, (int)(v63));
            ((ObjectData *)o)->f64 = (int)t3;
            goto L_8c0e427e;
        }
        t5 = call_8c12c714((&g_8c46f5a0)->f00.f00);
        t4 = call_8c12c714((&g_8c46f5a0)->f00.f08);
        if (t4 > t5) {
            t13 = errno_wrap_8c130334((&g_8c46f5a0)->f00.f00, 0.0f);
            v38 = (int)(int)(t13 * 65536.0f / 6.28318405f);
        } else {
            t15 = errno_wrap_8c130334(0.0f, (&g_8c46f5a0)->f00.f08);
            v36 = (int)(int)(t15 * 65536.0f / 6.28318405f);
            v38 = (int)v36;
        }
        *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f3b0;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v38);
        call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
        njPopMatrix_8c38accc(1);
        call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
        t6 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
        if (t6 == 1) {
            ((ObjectData *)o)->ff0 = 2;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
            v64 = (char *)((ObjectData *)o)->f36c->f08;
            t7 = angle_step((int)(((ObjectData *)o)->f64), v38, (int)(v64));
            ((ObjectData *)o)->f64 = (int)t7;
            goto L_8c0e427e;
        }
        t9 = call_8c12c714((&g_8c46f5a0)->f00.f00);
        t8 = call_8c12c714((&g_8c46f5a0)->f00.f08);
        if (t8 > t9) {
            t14 = errno_wrap_8c130334(0.0f, (&g_8c46f5a0)->f00.f08);
            v46 = (int)(int)(t14 * 65536.0f / 6.28318405f);
        } else {
            t16 = errno_wrap_8c130334((&g_8c46f5a0)->f00.f00, 0.0f);
            v44 = (int)(int)(t16 * 65536.0f / 6.28318405f);
            v46 = (int)v44;
        }
        *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x8) = ((ObjectData *)o)->f3b0;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v46);
        call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
        njPopMatrix_8c38accc(1);
        call_8c3bdf60((void *)((void *)&g_8c46f5c0), (void *)(((char *)o + 0x3c)));
        t10 = operation_8c051ff4((void *)o, (void *)((void *)&g_8c46f5c0), (void *)0);
        if (t10 == 1) {
            ((ObjectData *)o)->ff0 = 2;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&*(Vector3 *)(gc_8c46f5c0 + 0x0);
            v65 = (char *)((ObjectData *)o)->f36c->f08;
            t11 = angle_step((int)(((ObjectData *)o)->f64), v46, (int)(v65));
            ((ObjectData *)o)->f64 = (int)t11;
            goto L_8c0e427e;
        }
        if (g_8c467874 == 1) {
            ((ObjectData *)o)->ff0 = 0;
            goto L_8c0e427e;
        }
        TEffHit_create_8c0a061c((void *)(((char *)o + 0x324)));
        ((ObjectData *)o)->f1b8 |= 4;
        set_330((void *)o, (short)0);
        ((ObjectData *)o)->f34 |= 0xa00;
        o->v81(0);
        goto L_8c0e427e;
    }
    if (((ObjectData *)o)->f398 == 0 && v34 > 0.0f) {
        ((ObjectData *)o)->ff0 = 2;
        call_8c0446f8(o, (void *)(((ObjectData *)o)->f36c->f08), ((ObjectData *)o)->f36c->f04, ((ObjectData *)o)->f374, ((ObjectData *)o)->f374);
        goto L_8c0e427e;
    }
    ((ObjectData *)o)->ff0 = 0;
L_8c0e427e:;
    if (((((ObjectData *)o)->f34 & 0x800000)) == 0) {
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
    }
    transform_actor_records((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    ((ObjectData *)o)->f34 &= -0x4240001;
    operation_8c05428c((void *)o, 0, 0x14000000);
}
