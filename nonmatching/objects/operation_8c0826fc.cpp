/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0826fc
 * function: operation_8c0826fc
 * language: c++
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 2 of 152 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c2ff2a4 S_L8c2ff2a4;
typedef struct Frame Frame;
class Object;
struct S_L8c2ff2a4 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
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
    char unknown0[0xe4];
    int fe4;
} ObjectData;
struct Frame {
    char unknown0[0x8];
    float f08;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c2ff25c;
extern Vector3 g_8c2ff268;
extern Vector3 g_8c2ff274;
extern Vector3 g_8c2ff280;
extern Vector3 g_8c2ff28c;
extern Vector3 g_8c2ff298;
extern int g_8c469c44;
extern char g_8c469c49;
extern S_L8c2ff2a4 g_8c2ff2a4;
extern "C" char gc_8c2ff2a4[];
extern "C" int operation_8c08286c(int, float, float);
extern "C" void call_8c3be280(int, void *, Frame *);
extern "C" void operation_8c0826fc(Object *o)
{
    Frame frame;
    int v12;
    int t1;
    int t2;
    if (g_8c469c49 == 0) {
        ((PMF_0 *)gc_8c2ff2a4)[0] = *(PMF_0 *)&g_8c2ff25c;
        ((PMF_0 *)gc_8c2ff2a4)[1] = *(PMF_0 *)&g_8c2ff268;
        ((PMF_0 *)gc_8c2ff2a4)[2] = *(PMF_0 *)&g_8c2ff274;
        ((PMF_0 *)gc_8c2ff2a4)[3] = *(PMF_0 *)&g_8c2ff280;
        ((PMF_0 *)gc_8c2ff2a4)[4] = *(PMF_0 *)&g_8c2ff28c;
        ((PMF_0 *)gc_8c2ff2a4)[5] = *(PMF_0 *)&g_8c2ff298;
        g_8c469c49 = 1;
    }
    v12 = (int)((ObjectData *)o)->fe4;
    if (g_8c469c44 != 0) {
        ((ObjectData *)o)->fe4 = 0;
    }
    if (((ObjectData *)o)->fe4 != 0 && ((ObjectData *)o)->fe4 != 2) {
        goto L_8c0827e4;
    }
    t1 = operation_8c08286c((int)o, 700.0f, 250.0f);
    if (t1 != 0) {
        call_8c3be280(0, (void *)(((char *)o + 0x3c)), (Frame *)((&frame)));
        if ((&frame)->f08 > 28.0f) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(((ObjectData *)o)->fe4 * 0xc + gc_8c2ff2a4)))();
            goto L_8c08280e;
L_8c0827e4:;
            t2 = o->v11(700.0f, 250.0f);
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)(((ObjectData *)o)->fe4 * 0xc + gc_8c2ff2a4)))();
            }
        }
    }
L_8c08280e:;
    if (g_8c469c44 != 0) {
        ((ObjectData *)o)->fe4 = (int)v12;
    }
}
