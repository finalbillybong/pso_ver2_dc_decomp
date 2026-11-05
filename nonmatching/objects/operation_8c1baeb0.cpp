/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1baeb0
 * function: operation_8c1baeb0
 * language: c++
 * reference size: 520 bytes
 * compiled size: 520 bytes (+0.0%)
 * differing lines: 18 of 210 reference instruction lines
 * differing bytes: 202
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
typedef struct S_L8c327758 S_L8c327758;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x14576 S_x14576;
typedef struct S_x41488 S_x41488;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
    int f3b4;
    char unknown3b8[0x8];
    unsigned short f3c0;
    unsigned short f3c2;
    char unknown3c4[0x28];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x14576 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_x41488 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern int g_8c418248;
extern S_L8c327758 g_8c327758;
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c191504(int);
extern "C" void operation_8c1baeb0(Object *o)
{
    Frame frame;
    int v65;
    int v66;
    int v1;
    int v2;
    int v21;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    int t4;
    int t5;
    v1 = (int)0xffff;
    v65 = (int)o->f3c2;
    v66 = (int)(v65 & 0xffff);
    if (v66 == (unsigned short)v1) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v2 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v2 != -1) {
            o->f3ec = (int)v2;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v2 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x14576 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (v66 != v1) {
        t2 = lookup_low_id(v66);
        if (t2 != 0) {
            t3 = errno_wrap_8c130334(t2->f3c - 10000.0f, t2->f44);
            t4 = angle_step((int)(o->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)), 0x888);
            o->f64 = (int)t4;
            o->f3b4 = -((int)o->f64 + 0x800) >> 0xc & 0xf;
            o->f3b0 = -((int)o->f64 + 0x800) >> 0xc & 0xf;
        }
    }
    if (o->f3a0 == 0x31) {
        if ((o->f3c2 & 0xffff) == g_8c418248) {
            operation_8c191504(1);
        }
        o->f3c2 = o->f3c0 = 0xffff;
    }
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v21 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v21 != -1) {
            o->f3ec = (int)v21;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v21 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x41488 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t5 = call_8c18e6fc((void *)(&frame));
        if (t5 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
