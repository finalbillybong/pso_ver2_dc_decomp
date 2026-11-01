/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b9c00
 * function: operation_8c1b9c00
 * language: c++
 * reference size: 912 bytes
 * compiled size: 912 bytes (+0.0%)
 * differing lines: 126 of 347 reference instruction lines
 * differing bytes: 109
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327758 S_L8c327758;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_x14640 S_x14640;
typedef struct S_x33648 S_x33648;
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
    char unknown3c2[0x2a];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
    char unknown400[0x128];
    int f528;
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
struct S_x33648 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_c8c1794c8 {
    char unknown0[0x20];
    int f20;
};
struct S_x14640 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327758 g_8c327758;
extern "C" char g_8c327a88[];
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void mark_effect_for_release(void *);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" int call_8c18e768(int, int);
extern "C" void TObjDFHorming_create_8c21b968(void *, void *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c0a7608(void *, int);
extern "C" void operation_8c1b9c00(Object *o)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v4;
    int v5;
    int id;
    int v57;
    int v61;
    int i;
    int k;
    int v76;
    S_c8c021ef8 *t2;
    float t3;
    int t5;
    int t6;
    v1 = (int)0xffff;
    v2 = (S_vv2 *)((char *)o + 0x420);
    v3 = (S_vv3 *)((char *)o + 0x424);
    v4 = (int)((char *)o + 0x44c);
    v5 = (int)((char *)o + 0x458);
    id = o->f3c0 & 0xffff;
    if (id == (unsigned short)v1) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v76 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v76 != -1) {
            o->f3ec = (int)v76;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)g_8c327a88 + (v76 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x33648 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        if (call_8c18e6fc((void *)(&(&frame)->f0c)) == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (o->f3a0 > 0x93) {
        if (id == v1) {
            goto L_8c1b9e32;
        }
        t2 = lookup_low_id(id);
        if (t2 == 0) {
            goto L_8c1b9e32;
        }
        t3 = call_8c130334(t2->f3c - 10000.0f, t2->f44);
        o->f64 = angle_step((int)(o->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)), 0x888);
        o->f3b4 = -((int)o->f64 + 0x800) >> 0xc & 0xf;
        o->f3b0 = -((int)o->f64 + 0x800) >> 0xc & 0xf;
    } else if (o->f3a0 == 0x93) {
        t5 = create_effect_769c((void *)v4, 0xf7);
        v2->f00 = (S_vv2_0 *)(int)t5;
        if (t5 != 0) {
            set_effect_bits((void *)(v2->f00), (unsigned short)0x40);
        }
        t6 = create_effect_769c((void *)v5, 0xf7);
        v3->f00 = (S_vv3_0 *)(int)t6;
        if (t6 != 0) {
            set_effect_bits((void *)(v3->f00), (unsigned short)0x40);
        }
        o->f3ec = 6;
        o->f3f0 = 0.0f;
        o->f3fc = (int)(*(int *)(g_8c327a88 + 0x78));
    } else if (o->f3a0 == 0x75) {
        if (v2->f00 != 0) {
            mark_effect_for_release((void *)(v2->f00));
            v2->f00 = (S_vv2_0 *)0;
        }
        if (v3->f00 != 0) {
            mark_effect_for_release((void *)(v3->f00));
            v3->f00 = (S_vv3_0 *)0;
        }
        o->f528 = 0;
    }
L_8c1b9e32:;
    v57 = record30_8c1794c8(0x38)->f20;
    if (1 > v57 || v57 > 8) {
        v57 = 4;
    }
    v61 = call_8c18e768(0x42, v57);
    if (1 > v61) {
        v61 = 1;
    }
    for (i = 0, k = 0x75; i < v57; i++, k += v61) {
        if (o->f3a0 == k) {
            TObjDFHorming_create_8c21b968((void *)o, (void *)v4, (void *)(o->f3c0));
            TObjDFHorming_create_8c21b968((void *)o, (void *)v5, (void *)(o->f3c0));
            play_se_8c05fbf8(0x30029, (void *)(((char *)o + 0x3c)), 0, 1);
            break;
        }
    }
    if (v2->f00 != 0) {
        call_8c0a7608((void *)(v2->f00), v4);
    }
    if (v3->f00 != 0) {
        call_8c0a7608((void *)(v3->f00), v5);
    }
    if (--o->f3a0 < 0) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v76 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v76 != -1) {
            o->f3ec = (int)v76;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)g_8c327a88 + (v76 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x14640 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        if (call_8c18e6fc((void *)(&frame)) != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
