/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09723c
 * function: operation_8c09723c
 * language: c++
 * reference size: 456 bytes
 * compiled size: 456 bytes (+0.0%)
 * differing lines: 34 of 180 reference instruction lines
 * differing bytes: 35
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
typedef struct S_L8c300f88 S_L8c300f88;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    int f34;
    char unknown38[0x4];
    int f3c;
    char unknown40[0x14];
    int f54;
};
struct S_L8c300f88 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Vector3 f48;
};
struct Frame {
    float f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c300f34;
extern Vector3 g_8c300f40;
extern Vector3 g_8c300f4c;
extern Vector3 g_8c300f58;
extern Vector3 g_8c300f64;
extern Vector3 g_8c300f70;
extern Vector3 g_8c300f7c;
extern int g_8c469e50;
extern char g_8c469e54;
extern S_L8c300f88 g_8c300f88;
extern "C" char gc_8c300f88[];
extern "C" void call_8c09a498(void);
extern "C" void rand(void);
extern "C" void operation_8c0975b0(void *);
extern "C" void operation_8c097630(void *);
extern "C" void operation_8c097670(void *);
extern "C" void operation_8c0976b0(void *);
extern "C" void operation_8c097724(Object *);
extern "C" void operation_8c09a658(void *, void *);
extern "C" int operation_8c09a64c(int);
extern "C" void call_8c09b8f4(int);
extern "C" void operation_8c09723c(Object *o)
{
    Frame frame;
    int v14;
    int t1;
    call_8c09a498();
    rand();
    o->f3c += 1;
    operation_8c0975b0((void *)o);
    operation_8c097630((void *)o);
    operation_8c097670((void *)o);
    if (g_8c469e54 == 0) {
        {
            Vector3 *d = (Vector3 *)gc_8c300f88;
            d[0] = g_8c300f34;
            d[1] = g_8c300f40;
            d[2] = g_8c300f4c;
            d[3] = g_8c300f58;
            d[4] = g_8c300f64;
            d[5] = g_8c300f70;
            d[6] = g_8c300f7c;
        }
        g_8c469e54 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f30 * 0xc + gc_8c300f88)))();
    g_8c469e50 = (int)(*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)));
    operation_8c0976b0((void *)o);
    operation_8c097724(o);
    operation_8c09a658((void *)0, (void *)(&frame));
    if (!((&frame)->f00 > 0.0f)) {
        t1 = operation_8c09a64c(0xf0);
        if (t1 == 0) {
            goto L_8c09735c;
        }
    }
    if (o->f54 > 0) {
        call_8c09b8f4(0);
    }
    o->f54 = 0;
    return;
L_8c09735c:;
    o->f54 += 1;
    v14 = (int)o->f54;
    if (v14 == 0x384) {
        call_8c09b8f4(1);
        return;
    }
    if (v14 == 0x546) {
        call_8c09b8f4(2);
        return;
    }
    if (v14 > 0x546) {
        o->f54 = 0x546;
    }
}
