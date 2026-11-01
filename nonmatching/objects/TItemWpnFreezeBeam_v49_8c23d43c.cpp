/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23d43c
 * function: TItemWpnFreezeBeam_v49_8c23d43c
 * language: c++
 * reference size: 1036 bytes
 * compiled size: 1116 bytes (+7.7%)
 * differing lines: 400 of 416 reference instruction lines
 * differing bytes: 1064
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +80 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct S_c8c1581d8 S_c8c1581d8;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv13 S_vv13;
typedef struct S_vv3 S_vv3;
typedef struct S_vv7 S_vv7;
typedef struct S_x69120 S_x69120;
class Object;
typedef struct Block_frame_34 {
    float f00;
    float f04;
    float f08;
} Block_frame_34;
typedef struct Block_frame_1c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_1c;
typedef struct Block_frame_10 {
    int f00;
    char unknown4[0x8];
} Block_frame_10;
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
    virtual void v48(int, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xe0];
    float f220;
    short f224;
    char unknown226[0x2];
    int f228;
    void *f22c;
} ObjectData;
struct Frame {
    Block16 f00;
    Block_frame_10 f10;
    Block_frame_1c f1c;
    float f28;
    float f2c;
    float f30;
    Block_frame_34 f34;
    int f40;
    int f44;
    int f48;
};
struct S_vv1 {
    short f00;
    short f02;
};
struct S_c8c0541b4 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xba];
    int fdc;
    char unknowne0[0x228];
    short f308;
};
struct S_vv3 {
    Vector3 f00;
};
struct S_x69120 {
    char unknown0[0xc];
    float f0c;
};
struct S_c8c1581d8 {
    float f00;
};
struct Arg0_13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
    char unknown68[0x2bc];
    Vector3 f324;
};
struct S_vv7 {
    char unknown0[0x4];
    float f04;
};
struct S_vv11 {
    char unknown0[0x2];
    short f02;
};
struct S_vv13 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
    char unknownc[0xc];
    int f18;
};
extern Vector3 g_8c33a61c;
extern Block16 g_8c33a628;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4689e0 *g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" int operation_8c1aaabc(void *);
extern "C" S_c8c0541b4 *operation_8c0541b4(short, short);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float njUnitVector_8c37b630(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" S_c8c1581d8 *operation_8c1581d8(void *, short);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" S_c8c011214 *operation_8c011214(int, int, int);
extern "C" float call_8c38d7d8(S_vv7 *, int);
extern "C" int rand(void);
extern "C" void TItemEffFreezeBeam_create_8c23d848(int, short, int, int, unsigned short);
extern "C" void TItemEffLandHit_ctor_8c1c5f48(void *, void *, void *, void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void extra_b6394(void *, void *, void *, int, void *, int, float);
extern "C" int operation_8c0750cc(void *);
extern "C" void create_object_8c23d9b8();
extern "C" void operation_1ac120();
extern "C" void TItemWpnFreezeBeam_v49_8c23d43c(Object *o)
{
    Frame frame;
    S_vv7 *v7;
    int v51;
    short v14;
    char *v4;
    float v5;
    int v48;
    S_c8c0541b4 *t2;
    S_vv11 *v11;
    float v12;
    S_vv3 *v3;
    S_vv13 *v13;
    int v15;
    int v16;
    int v18;
    int v19;
    float v30;
    float v42;
    int v2;
    int t1;
    S_c8c011214 *t5;
    int t3;
    S_c8c1581d8 *t4;
    S_vv1 *v1;
    int t6;
    float t7;
    int t8;
    int t9;
    float t10;
    float t11;
    float t12;
    operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), (int)(((ObjectData *)o)->f224), (int)(&(&frame)->f40));
    t1 = operation_8c1aaabc((void *)(((char *)((ObjectData *)o)->f13c + 0x754)));
    if ((short)t1 != 2) {
        v48 = (int)&(&frame)->f40;
    } else {
        ((ObjectData *)o)->f22c = (void *)create_object_8c23d9b8;
        if (((int)((char *)((ObjectData *)o)->f13c + 0x754) + 0x30) == 0) {
            return;
        }
        v1 = (S_vv1 *)((char *)((ObjectData *)o)->f13c + 0x788);
        (&frame)->f34.f00 = (int)((&frame)->f40);
        v2 = (int)0;
        (&frame)->f34.f04 = (int)((&frame)->f44);
        (&frame)->f34.f08 = (int)((&frame)->f48);
        t2 = operation_8c0541b4(v1->f00, v1->f02);
        v7 = (S_vv7 *)&(&frame)->f40;
        if (t2 != 0) {
            v51 = (int)t2->fdc;
            v3 = (S_vv3 *)((char *)(v51 + v1->f02 * 0x2c) + 0x1c);
            *(Vector3 *)&(&frame)->f34 = *(Vector3 *)&v3->f00;
            v4 = (char *)&(&frame)->f40;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f34), v4);
            t10 = njUnitVector_8c37b630((void *)(&(&frame)->f34));
            v5 = (float)(t10 - ((S_x69120 *)(v51 + v1->f02 * 0x2c))->f0c);
            (&frame)->f34.f00 *= v5;
            (&frame)->f34.f04 *= v5;
            (&frame)->f34.f08 *= v5;
            call_8c3bdf60((void *)(&(&frame)->f34), v4);
            v2 = (int)1;
            v7 = (S_vv7 *)v4;
        }
        if (v2 == 0) {
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            t3 = operation_8c1aaabc((void *)(((char *)((ObjectData *)o)->f13c + 0x754)));
            t4 = operation_8c1581d8((void *)o, (short)t3);
            (&frame)->f2c = 0.0f;
            (&frame)->f28 = 0.0f;
            (&frame)->f30 = t4->f00;
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f13c->f64));
            call_8c3be280(0, (void *)(&(&frame)->f28), (void *)(&(&frame)->f34));
            njPopMatrixEx_8c38ad10();
            call_8c3bdf60((void *)(&(&frame)->f34), (void *)v7);
        }
        *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&((ObjectData *)o)->f13c->f324;
        (&frame)->f1c.f04 = v7->f04;
        t5 = operation_8c011214((int)(&(&frame)->f1c), (int)(&(&frame)->f34), 0x40000100);
        if (t5 != 0) {
        } else {
            if (t2 == 0) {
            } else {
                v11 = (S_vv11 *)((char *)((ObjectData *)o)->f13c + 0x788);
                t11 = call_8c38d7d8(v7, (int)(t2->fdc + v11->f02 * 0x2c + 0x1c));
                v12 = (float)(t11 / ((ObjectData *)o)->f220);
                t6 = rand();
                if (!(0.8f > ((float)t6 / 32768.0f))) {
                    v42 = (float)v12;
                    goto L_8c23d74c;
                }
                v13 = (S_vv13 *)((ObjectData *)o)->f13c;
                v14 = (short)v13->f308;
                v15 = (int)((short)v14 == 2);
                if (v15 == 0) {
                    v16 = (int)(t2->f308 == 2);
                    if (v16 == 0) {
                        goto L_8c23d648;
                    }
                }
                v18 = (int)((short)v14 == 2);
                if (v18 == 0) {
                    v42 = (float)v12;
                    goto L_8c23d74c;
                }
                v19 = (int)(t2->f308 == 1);
                if (v19 == 0) {
                    v42 = (float)v12;
                    goto L_8c23d74c;
                }
L_8c23d648:;
                TItemEffFreezeBeam_create_8c23d848((int)g_8c4689e0, t2->f20, (int)(v11->f02), (int)((int)v12), (unsigned short)(v13->f20));
                v42 = (float)v12;
                goto L_8c23d74c;
            }
            t12 = call_8c38d7d8(v7, (int)(&(&frame)->f34));
            v42 = (float)(t12 / ((ObjectData *)o)->f220);
            goto L_8c23d74c;
        }
        *(Vector3 *)&(&frame)->f34 = *(Vector3 *)&t5->f04->f00;
        t7 = call_8c38d7d8(v7, (int)(&(&frame)->f34));
        v30 = (float)(t7 / ((ObjectData *)o)->f220);
        if (((t5->f04->f18 & 0x100)) != 0 && ((ObjectData *)o)->f228 != 0) {
            TItemEffLandHit_ctor_8c1c5f48(g_8c44be9c, (void *)o, (void *)v7, (void *)(&(&frame)->f34.f00), (int)((int)(t7 / ((ObjectData *)o)->f220)));
        }
        v42 = (float)v30;
L_8c23d74c:;
        *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c33a61c;
        *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c33a628;
        t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
        if (t8 != 0) {
            extra_b6394((void *)t8, (void *)(&frame), (void *)(&(&frame)->f10.f00), 1, (void *)(((ObjectData *)o)->f13c), (int)g_8c44bea0, 0.2f);
        }
        if (((ObjectData *)o)->f22c == 0) {
            return;
        }
        t9 = operation_8c0750cc((void *)o);
        if (t9 != 1) {
            return;
        }
        ((void (*)(Object *, S_vv7 *, void *, float))(((ObjectData *)o)->f22c))(o, v7, (void *)(&(&frame)->f34), v42);
        return;
    }
    ((ObjectData *)o)->f22c = (void *)operation_1ac120;
    o->v48(v48, 0, 0, 1);
}
