/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ba05c
 * function: operation_8c1ba05c
 * language: c++
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 12 of 156 reference instruction lines
 * differing bytes: 158
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
typedef struct S_L8c327a88 S_L8c327a88;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x32880 S_x32880;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x48];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_L8c327a88 {
    char unknown0[0x8c];
    int f8c;
};
struct S_c8c1794c8 {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Vector3 f00;
    int f0c;
    short f10;
    short f12;
    char unknown14[0x54];
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x32880 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327758 g_8c327758;
extern S_L8c327a88 g_8c327a88;
extern "C" int create_effect_777c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" int ring_actor_eligible(unsigned short);
extern "C" void call_8c18e044(int, void *, int, int, int);
extern "C" void TTecGrants_ctor_8c0b3178(Object *, int, void *, int);
extern "C" void operation_8c191504(int);
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c07de9c();
extern "C" void operation_8c1ba05c(Object *o)
{
    Frame frame;
    int v1;
    char *v11;
    int v13;
    int v12;
    int v22;
    int t1;
    int t2;
    int t3;
    S_c8c1794c8 *t4;
    v1 = (int)o;
    v1 = (int)(v1 + 0x470);
    if (o->f3a0 == 0x62) {
        o->f3ec = 7;
        o->f3f0 = 0.0f;
        o->f3fc = (int)((&g_8c327a88)->f8c);
    }
    if (o->f3a0 == 0x49) {
        t1 = create_effect_777c((void *)v1, 0x133);
        if (t1 != 0) {
            set_effect_bits((void *)t1, (unsigned short)0x40);
        }
    }
    if (o->f3a0 == 0x45) {
        t4 = record30_8c1794c8(0x38);
        v13 = (int)0;
        v11 = (char *)t4->f18;
        v12 = (int)&(&frame)->f10;
        while (4 > v13) {
            t2 = ring_actor_eligible((unsigned short)v13);
            if (t2 != 0) {
                call_8c18e044(v12, operation_8c07de9c, 0, 8, 0xb);
                (&frame)->f0c = 1;
                (&frame)->f10 = v13;
                (&frame)->f12 = 0;
                TTecGrants_ctor_8c0b3178(o, v1, (void *)(&(&frame)->f0c), (int)(v11));
            }
            v13 = (int)(v13 + 1);
        }
        operation_8c191504(1);
    }
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v22 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v22 != -1) {
            o->f3ec = (int)v22;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)&g_8c327a88 + (v22 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x32880 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t3 = call_8c18e6fc((Frame *)((&frame)));
        if (t3 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
