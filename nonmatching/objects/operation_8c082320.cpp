/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c082320
 * function: operation_8c082320
 * language: c++
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 2 of 135 reference instruction lines
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
typedef struct S_L8c2ff214 S_L8c2ff214;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct S_L8c2ff214 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c2ff1cc;
extern Vector3 g_8c2ff1d8;
extern Vector3 g_8c2ff1e4;
extern Vector3 g_8c2ff1f0;
extern Vector3 g_8c2ff1fc;
extern Vector3 g_8c2ff208;
extern int g_8c469c44;
extern char g_8c469c48;
extern S_L8c2ff214 g_8c2ff214;
extern "C" char gc_8c2ff214[];
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void operation_8c082470(Object *);
extern "C" void call_8c102d80(void *, int, void *, int, int);
extern "C" void operation_8c082320(Object *o)
{
    int v12;
    if (g_8c469c48 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0x0) = *(Vector3 *)&g_8c2ff1cc;
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0xc) = *(Vector3 *)&g_8c2ff1d8;
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0x18) = *(Vector3 *)&g_8c2ff1e4;
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0x24) = *(Vector3 *)&g_8c2ff1f0;
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0x30) = *(Vector3 *)&g_8c2ff1fc;
        *(Vector3 *)&*(Vector3 *)(gc_8c2ff214 + 0x3c) = *(Vector3 *)&g_8c2ff208;
        g_8c469c48 = 1;
    }
    v12 = (int)o->fe4;
    if (g_8c469c44 != 0) {
        o->fe4 = 0;
        operation_8c05426c((void *)o, 0, 1);
    } else {
        operation_8c082470(o);
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->fe4 * 0xc + gc_8c2ff214)))();
    if (o->fe4 == 0) {
        call_8c102d80((void *)(((char *)o + 0x3c)), -0x10000, (void *)(o->f64), 0, 0);
    } else {
        call_8c102d80((void *)(((char *)o + 0x3c)), -0xff0100, (void *)(o->f64), 0, 0);
    }
    if (g_8c469c44 != 0) {
        o->fe4 = (int)v12;
    }
}
