/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2151d0
 * function: operation_8c2151d0
 * language: c++
 * reference size: 592 bytes
 * compiled size: 600 bytes (+1.4%)
 * differing lines: 142 of 248 reference instruction lines
 * differing bytes: 457
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct S_g8c46fe00 S_g8c46fe00;
class Object;
struct S_c0 {
    char unknown0[0x2c];
    float f2c;
    int f30;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x5c];
    float f5c;
    char unknown60[0x8];
    int f68;
    int f6c;
    int f70;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    char unknown28[0xa0];
    float fc8;
    float fcc;
    char unknownd0[0x10];
};
extern float g_8c2e153c;
extern float g_8c2e15f8;
extern float g_8c2e1600;
extern S_g8c467184 *g_8c467184;
extern S_g8c46fe00 *g_8c46fe00;
extern "C" void call_8c20b098(Object *, S_c0 *);
extern "C" float operation_8c20b160(float, float);
extern "C" void operation_8c20a89c(void *, int, float);
extern "C" void operation_8c20b178(int, int);
extern "C" void operation_8c20b1b0(void *, void *);
extern "C" void call_8c20b22c(S_c0 *, void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void sq_select_8c38aeb4(int);
extern "C" void sq_header_8c38af22(int, int);
extern "C" void sq_header3_8c38b02e(int);
extern "C" void sq_quad_8c38b09e(Frame *, float);
extern "C" void sq_flush_8c38af12(void);
extern "C" int operation_8c20b148(void *);
extern "C" void call_8c38d9a0(void *, int, int, int);
extern "C" void operation_8c2151d0(Object *o)
{
    Frame frame;
    float v1;
    float v17;
    float v3;
    float v4;
    int v14;
    S_c0 *t1;
    int v8;
    int t4;
    int v10;
    float v2;
    int v5;
    int v7;
    int v6;
    float t2;
    float t3;
    int v12;
    t1 = (S_c0 *)o->v5();
    if (!(t1->f30 >= 0)) {
        return;
    }
    call_8c20b098(o, t1);
    t2 = operation_8c20b160(((ObjectData *)o)->f5c, 0.0f);
    operation_8c20a89c((void *)(&(&frame)->f20), -1, t2);
    operation_8c20b178((int)(&(&frame)->f20), 0);
    operation_8c20b1b0((void *)t1, (void *)(&(&frame)->f20));
    call_8c20b22c(t1, (void *)(&(&frame)->f20), 0);
    t3 = operation_8c20b160(((ObjectData *)o)->f5c, 0.2f);
    v1 = (float)g_8c2e153c;
    v17 = (float)t1->f2c;
    v2 = (float)(v1 * v17);
    v3 = (float)g_8c2e1600;
    v4 = (float)(v3 * g_8c2e15f8);
    (&frame)->f00 = (&frame)->f20;
    (&frame)->f08 = (&frame)->fc8;
    (&frame)->f04 = (&frame)->f24 + v17;
    (&frame)->f0c = (&frame)->fcc - v17;
    (&frame)->f10 = 0.0f;
    (&frame)->f18 = 1.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f1c = v4;
    call_8c3827d8(g_8c467184);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(3, -1);
    v8 = (int)0;
    v5 = (int)-0x1000000;
    v6 = (int)-0x7f7f80;
    v7 = (int)-1;
    while (3 > v8) {
        if (v8 == ((ObjectData *)o)->f70 && ((ObjectData *)o)->f68 == 0) {
            v10 = (int)v5;
        } else {
            if (v8 >= ((ObjectData *)o)->f6c) {
                v10 = (int)v7;
            } else {
                v10 = (int)v6;
            }
        }
        sq_header3_8c38b02e(v10);
        sq_quad_8c38b09e((Frame *)((&frame)), t3);
        (&frame)->f04 += v2;
        (&frame)->f0c += v2;
        (&frame)->f14 = (&frame)->f1c;
        (&frame)->f1c += v4;
        v8 = (int)(v8 + 1);
    }
    sq_flush_8c38af12();
    t4 = operation_8c20b148(g_8c46fe00);
    if (((ObjectData *)o)->f68 == 0) {
        v12 = (int)((ObjectData *)o)->f70;
    } else {
        v12 = (int)-1;
    }
    v14 = (int)0;
    while (3 > v14) {
        call_8c20b22c(t1, (void *)(&(&frame)->f20), v14);
        if (v14 == v12) {
            operation_8c20b178((int)(&(&frame)->f20), 1);
            call_8c38d9a0((void *)(&(&frame)->f20), 8, t4, 1);
            operation_8c20b178((int)(&(&frame)->f20), 0);
        } else {
            call_8c38d9a0((void *)(&(&frame)->f20), 8, t4, 1);
        }
        v14 = (int)(v14 + 1);
    }
}
