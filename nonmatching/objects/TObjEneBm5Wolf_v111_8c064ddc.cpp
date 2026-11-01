/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c064ddc
 * function: TObjEneBm5Wolf_v111_8c064ddc
 * language: c++
 * reference size: 604 bytes
 * compiled size: 600 bytes (-0.7%)
 * differing lines: 108 of 234 reference instruction lines
 * differing bytes: 495
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3f8 Arg0_3f8;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv26 S_vv26;
typedef struct S_vv8 S_vv8;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0xa8];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x20c];
    Vector3 f324;
    char unknown330[0x4c];
    float f37c;
    float f380;
    char unknown384[0x70];
    int f3f4;
    Arg0_3f8 *f3f8;
} ObjectData;
struct S_vv8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv26 {
    char unknown0[0x4];
    int f04;
    short f08;
};
struct S_c8c053d84 {
    char unknown0[0x3f8];
    int f3f8;
};
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c4688dc;
extern "C" char g_8c2fcb6c[];
extern "C" int call_8c05a0a8(void);
extern "C" int pack_ids_8c05a09c(int, int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void call_8c05ba9c(Object *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3addea(void *, S_vv8 *, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c0c5488(void *, int, int, int);
extern "C" void TObjEneBm5Wolf_v111_8c064ddc(Object *o)
{
    Frame frame;
    int v4;
    int v6;
    float v7;
    float v9;
    char *v24;
    int v10;
    float v13;
    float v16;
    S_vv8 *v8;
    int v25;
    int v27;
    S_vv26 *v26;
    int v32;
    int v35;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    S_c8c053d84 *t6;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        t2 = pack_ids_8c05a09c(0, 0);
        debug_print_at_8c38cf80(t2, (void *)((g_8c2fcb6c + 0x1af)), ((ObjectData *)o)->f3f8);
        if (((ObjectData *)o)->f3f4 != 0) {
            t3 = pack_ids_8c05a09c(0, 1);
            debug_print_at_8c38cf80(t3, (void *)((g_8c2fcb6c + 0x1b9)));
        } else {
            t4 = pack_ids_8c05a09c(0, 1);
            debug_print_at_8c38cf80(t4, (void *)((g_8c2fcb6c + 0x1c4)));
        }
    }
    t5 = o->v11(400.0f, 20.0f);
    v16 = (float)/* ? fr15 */ 0;
    if (t5 != 0) {
        call_8c05ba9c(o, 0);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (!((int)((ObjectData *)o)->f37c >= 0)) {
            v6 = (int)0;
        } else {
            v4 = (int)(int)((ObjectData *)o)->f37c;
            if ((int)((ObjectData *)o)->f37c >= 0x13) {
                v4 = (int)0x12;
            }
            v6 = (int)v4;
        }
        v7 = (float)((ObjectData *)o)->f380;
        v8 = (S_vv8 *)*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (*(int *)((char *)((char *)((ObjectData *)o)->f110 + 0x4) + (v6 << 4)) << 3));
        if (0.0f > v7) {
            v9 = (float)0.0f;
            v16 = (float)v9;
        } else {
            v10 = (int)v8->f04;
            v13 = (float)(float)(unsigned int)(v10 + -1);
            v16 = (float)v7;
            if (v7 > v13) {
                v16 = (float)(float)(unsigned int)v10;
            }
        }
        njTranslate_8c3829bc(0, 0.0f, 0.0f, -10.0f);
        operation_8c1086fc();
        call_8c3addea((void *)(((ObjectData *)o)->f38), v8, v16);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
    v24 = (char *)((ObjectData *)o)->f3f8;
    v25 = (int)g_8c4688dc;
    v32 = (int)v25;
    goto L_8c064f54;
    v26 = (S_vv26 *)v25;
L_8c064f38:;
    t6 = lookup_object_by_id((unsigned short)(v26->f08));
    if (t6 != 0) {
        v27 = (int)t6->f3f8;
        if (v27 == (int)(v24)) {
            v35 = (int)t6;
            v32 = (int)v26;
            goto L_8c064f5a;
        }
    }
    v32 = (int)v26->f04;
L_8c064f54:;
    v26 = (S_vv26 *)v32;
    if (v32 != 0) {
        goto L_8c064f38;
    }
    v35 = (int)0;
L_8c064f5a:;
    if (v35 != 0) {
        operation_8c0c5488((void *)(((char *)o + 0x324)), (int)(v35 + 0x324), -0x3f3f40, -0x9f9f01);
        return;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    (&frame)->f00.f04 += 50.0f;
    operation_8c0c5488((void *)(((char *)o + 0x324)), (int)(&frame), -0x3f3f40, -0x9f9f01);
}
