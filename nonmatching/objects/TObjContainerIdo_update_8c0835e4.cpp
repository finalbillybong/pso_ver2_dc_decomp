/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0835e4
 * function: TObjContainerIdo_update_8c0835e4
 * language: c++
 * reference size: 1244 bytes
 * compiled size: 1244 bytes (+0.0%)
 * differing lines: 52 of 474 reference instruction lines
 * differing bytes: 35
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjContainerIdo.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x15984 S_x15984;
typedef struct S_x23536 S_x23536;
typedef struct S_x37776 S_x37776;
typedef struct S_x38288 S_x38288;
typedef struct S_x50672 S_x50672;
class Object;
typedef struct Block_frame_30 {
    float f00;
    float f04;
    float f08;
} Block_frame_30;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
struct S_x50672 {
    float f00;
};
struct S_x15984 {
    int f00;
};
struct S_x37776 {
    float f00;
};
struct S_x38288 {
    float f00;
};
struct S_x23536 {
    int f00;
};
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
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0xb0];
    int f118;
    float f11c;
    char unknown120[0x4];
    float f124;
} ObjectData;
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    Block_frame_24 f24;
    Block_frame_30 f30;
};
extern Vector3 g_8c2ff460;
extern Vector3 g_8c2ff46c;
extern "C" int operation_03d080(unsigned short);
extern "C" float call_8c38d7d8(void *, void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int rand(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c3be280(int, void *, Frame *);
extern "C" void create_effect_777c(void *, int);
extern "C" void update_context_blend(void *);
extern "C" void TObjContainerIdo_update_8c0835e4(Object *o)
{
    Frame frame;
    int v4;
    int v7;
    char *v8;
    int v1;
    int v2;
    int v6;
    int v5;
    int v32;
    float v3;
    int v58;
    int t1;
    float t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v1 = (int)0x118;
    v2 = (int)0x11c;
    v3 = (float)((S_x50672 *)((int)o + v2))->f00;
    v4 = (int)(*(int *)((char *)((char *)o + 0x0) + (v1)) & 0xf);
    ((S_x50672 *)((int)o + v2))->f00 = 0.0f;
    v5 = (int)0x120;
    v6 = (int)0x114;
    v7 = (int)0;
    goto L_8c08367a;
    v8 = (char *)v7;
    do {
        t1 = operation_03d080((unsigned short)(*(Arg0_104 **)((char *)((char *)o + 0x104) + ((int)(v8) << 2))));
        if ((unsigned char)t1 == 1) {
            ((S_x15984 *)((int)o + v1))->f00 |= 1 << (int)(v8);
            ((S_x37776 *)((int)o + v2))->f00 = ((S_x38288 *)((int)o + v5))->f00 + ((S_x37776 *)((int)o + v2))->f00;
        } else {
            ((S_x23536 *)((int)o + v1))->f00 &= ~(1 << (int)(v8));
        }
        v7 = (int)(v8 + 1);
L_8c08367a:;
        v8 = (char *)v7;
    } while (*(int *)((char *)((char *)o + 0x0) + (v6)) > v7);
    v32 = (int)((ObjectData *)o)->f118;
    if ((v4 ^ v32 & 0xf) != 0) {
        if (0.0f > (v3 - ((ObjectData *)o)->f11c)) {
            ((ObjectData *)o)->f118 = v32 & -0x2000001;
            ((ObjectData *)o)->f118 &= -0x1000001;
        } else {
            ((ObjectData *)o)->f118 = v32 | 0x2000000;
            ((ObjectData *)o)->f118 &= -0x1000001;
        }
    }
    ((ObjectData *)o)->f118 &= -0x4000001;
    if (((((ObjectData *)o)->f118 & 0x2000000)) == 0) {
    } else {
        t2 = call_8c38d7d8((void *)(((char *)o + 0xf8)), (void *)(((char *)o + 0x3c)));
        if (t2 > ((ObjectData *)o)->f11c) {
            *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&g_8c2ff460;
            (&frame)->f30.f08 = -((ObjectData *)o)->f124;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
            call_8c3be38c(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f30));
            njPopMatrixEx_8c38ad10();
            ((ObjectData *)o)->f3c -= (&frame)->f30.f00;
            ((ObjectData *)o)->f40 -= (&frame)->f30.f04;
            ((ObjectData *)o)->f44 -= (&frame)->f30.f08;
            ((ObjectData *)o)->f118 |= 0x4000000;
            call_8c05fd7c(0x40017, o, (void *)(((char *)o + 0x3c)), 0, 0);
            goto L_8c083938;
        }
        if (((((ObjectData *)o)->f118 & 0x1000000)) != 0) {
            goto L_8c083938;
        }
        play_se_8c05fbf8(0x40018, (void *)(((char *)o + 0x3c)), 0, 0);
        ((ObjectData *)o)->f118 |= 0x1000000;
        goto L_8c083938;
    }
    t3 = call_8c38d7d8((void *)(((char *)o + 0xf8)), (void *)(((char *)o + 0x3c)));
    if (((ObjectData *)o)->f11c > t3) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&g_8c2ff46c;
        (&frame)->f24.f08 = -((ObjectData *)o)->f124;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        call_8c3be38c(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24));
        njPopMatrixEx_8c38ad10();
        ((ObjectData *)o)->f3c += (&frame)->f24.f00;
        ((ObjectData *)o)->f40 += (&frame)->f24.f04;
        ((ObjectData *)o)->f44 += (&frame)->f24.f08;
        ((ObjectData *)o)->f118 |= 0x4000000;
        call_8c05fd7c(0x40017, o, (void *)(((char *)o + 0x3c)), 0, 0);
    } else {
        if (((((ObjectData *)o)->f118 & 0x1000000)) == 0) {
            play_se_8c05fbf8(0x40018, (void *)(((char *)o + 0x3c)), 0, 0);
            ((ObjectData *)o)->f118 |= 0x1000000;
        }
    }
L_8c083938:;
    v58 = (int)((ObjectData *)o)->f118;
    if (((v58 & 0x8000000)) == 0 && ((v58 & 0x4000000)) != 0) {
        t4 = rand();
        if (0.4f > ((float)t4 / 32768.0f)) {
            t5 = o->v11(400.0f, 100.0f);
            if (t5 != 0) {
                (&frame)->f18 = 10.0f;
                (&frame)->f1c = 2.0f;
                t6 = rand();
                (&frame)->f20 = (float)t6 / 32768.0f * 30.0f - 15.0f;
                (&frame)->f0c = -10.0f;
                (&frame)->f10 = 2.0f;
                t7 = rand();
                (&frame)->f14 = (float)t7 / 32768.0f * 30.0f - 15.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
                call_8c3be280(0, (void *)(&(&frame)->f18), (Frame *)((&frame)));
                create_effect_777c((void *)(&frame), 0x42);
                call_8c3be280(0, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
                create_effect_777c((void *)(&frame), 0x42);
                njPopMatrixEx_8c38ad10();
            }
        }
    }
    update_context_blend((void *)(((char *)o + 0x128)));
}
