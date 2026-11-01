/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ba2cc
 * function: operation_8c1ba2cc
 * language: c++
 * reference size: 488 bytes
 * compiled size: 488 bytes (+0.0%)
 * differing lines: 16 of 191 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327758 S_L8c327758;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x24080 S_x24080;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x48];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_c8c1794c8 {
    char unknown0[0x1c];
    int f1c;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x24080 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern int g_8c467874;
extern int g_8c4703c0;
extern S_L8c327758 g_8c327758;
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" int lookup_low_id(int);
extern "C" int ring_actor_eligible(unsigned short);
extern "C" void vector_sub_in_place_8c37f6f0(void *, int);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" int rand(void);
extern "C" void call_8c3bdf60(void *, int);
extern "C" void TTecMegid_create_8c0b55f0(void *, void *, void *, void *);
extern "C" void operation_8c191504(int);
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1ba2cc(Object *o)
{
    Frame frame;
    char *v1;
    int v3;
    int v4;
    float v8;
    int t3;
    int v21;
    int t1;
    float t2;
    int v2;
    int t4;
    S_c8c1794c8 *t5;
    int t6;
    if (o->f3a0 == 0x46) {
        t5 = record30_8c1794c8(0x38);
        v2 = (int)0x324;
        v1 = (char *)t5->f1c;
        v3 = (int)0;
        while (g_8c467874 > v3) {
            t3 = lookup_low_id(v3);
            t1 = ring_actor_eligible((unsigned short)v3);
            if (t1 != 0) {
                if (g_8c4703c0 == 3) {
                    v4 = (int)(t3 + v2);
                    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), v4);
                    t2 = njScalor_8c37e480((void *)(&(&frame)->f0c));
                    if (t2 == 0.0f) {
                        (&frame)->f0c.f04 = 1.0f;
                    } else {
                        njUnitVector_8c37b630((void *)(&(&frame)->f0c));
                    }
                    t6 = rand();
                    v8 = (float)((float)t6 / 32768.0f * 40.0f + 35.0f);
                    (&frame)->f0c.f00 *= v8;
                    (&frame)->f0c.f04 *= v8;
                    (&frame)->f0c.f08 *= v8;
                    call_8c3bdf60((void *)(&(&frame)->f0c), v4);
                    TTecMegid_create_8c0b55f0((void *)o, (void *)(&(&frame)->f0c), (void *)v4, (void *)v1);
                } else {
                    TTecMegid_create_8c0b55f0((void *)o, (void *)(t3 + v2), (void *)(t3 + v2), (void *)v1);
                }
            }
            v3 = (int)(v3 + 1);
        }
        operation_8c191504(1);
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
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x24080 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t4 = call_8c18e6fc((Frame *)((&frame)));
        if (t4 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
