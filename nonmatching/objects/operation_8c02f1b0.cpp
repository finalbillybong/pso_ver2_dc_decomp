/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02f1b0
 * function: operation_8c02f1b0
 * language: c++
 * reference size: 224 bytes
 * compiled size: 228 bytes (+1.8%)
 * differing lines: 12 of 92 reference instruction lines
 * differing bytes: 149
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(int, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct S_c8c011ecc {
    char f00;
    char f01;
    short f02;
};
extern "C" char g_8c2e7ce0[];
extern "C" S_c8c011ecc *game_malloc_8c011ecc(int);
extern "C" void memcpy_8c12b77c(void *, int, int);
extern "C" int call_8c18e768(int, int);
extern "C" int TProtocol_wait_send_drain_8c010a1c(Object *);
extern "C" void call_8c011ed8(S_c8c011ecc *);
extern "C" void operation_8c02f1b0(Object *o, int a1, int a2, int a3)
{
    int v3;
    S_c8c011ecc *t1;
    int v4;
    int v2;
    int pm3;
    int pm2;
    S_c8c011ecc *pm4;
    void *pm10;
    int pm5;
    char *pm7;
    int v1;
    int pm9;
    short pm11;
    int pm8;
    v2 = a1;
    pm8 = 0x482;
    o->v4((pm8 + g_8c2e7ce0));
    pm9 = ((ObjectData *)o)->fa7c;
    pm2 = pm9;
    pm5 = pm2;
    if (0 != pm5) {
        pm4 = game_malloc_8c011ecc(0x8004);
        t1 = pm4;
        pm7 = (char *)t1;
        pm7 += 0x4;
        pm10 = (void *)((pm7));
        memcpy_8c12b77c(pm10, a2, a3);
        t1->f00 = (char)0x6d;
        t1->f01 = (char)a1;
        pm11 = (short)(4 + a3);
        t1->f02 = (int)pm11;
        v4 = call_8c18e768(a3 + 4, 0x5b4);
        v1 = 0x5b4;
        pm2 = 4 + a3;
        pm5 = v4 * v1;
        v3 = (pm2 - pm5);
        v2 = 0;
        while (v4 > 0) {
            int pm12;
            pm2 = TProtocol_wait_send_drain_8c010a1c(o);
            pm5 = pm2;
            if (0 != pm5) {
                goto L_8c02f252;
            }
            a2 = (int)t1;
            pm12 = a2 + v2;
            a1 = pm12;
            o->v9(a1, v1);
            v4 = -1 + v4;
            v2 = v1 + v2;
        }
        v1 = TProtocol_wait_send_drain_8c010a1c(o);
        v4 = v1;
        a3 = v4;
        if (0 == a3) {
            if (!(0 >= v3)) {
                v4 = (int)t1 + v2;
                o->v9(v4, v3);
            }
        }
    L_8c02f252:
        ;
        call_8c011ed8(t1);
    }
}
