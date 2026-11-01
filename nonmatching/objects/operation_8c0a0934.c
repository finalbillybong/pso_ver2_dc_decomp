/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0934
 * function: operation_8c0a0934
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 6 of 112 reference instruction lines
 * differing bytes: 7
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    char unknown58[0x18];
    Arg0_70 *f70;
    float f74;
};
struct Arg0_70 {
    int f00;
    char unknown4[0x10];
    short f14;
    short f16;
};
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
void operation_8c0a0934(Object *o)
{
    int v1;
    float v2;
    float v4;
    float v19;
    float v20;
    float t1;
    float t2;
    float t3;
    float t4;
    float v3;
    short a;
    short b;
    v2 = o->f74;
    v1 = (int)o->f70->f00;
    a = o->f70->f14;
    b = o->f70->f16;
    if (((v1 & 0x400)) != 0) {
        if (((v1 & 0x20000)) != 0) {
            v2 += 2.0f;
            if (v2 > 1000.0f) {
                v2 = 1000.0f;
            }
            o->f74 = v2;
        } else {
            if (((v1 & 0x10000)) != 0) {
                v2 -= 2.0f;
                if (15.0f > v2) {
                    v2 = 15.0f;
                }
                o->f74 = v2;
            }
        }
        o->f34 = (Arg0_34 *)((int)o->f34 + a * 3);
        o->f30 = (Arg0_30 *)((int)o->f30 + b * 3);
    }
    t4 = njCos_8c38c154((void *)(o->f30));
    v19 = (float)o->f74;
    v20 = (float)(v19 * t4);
    t1 = njSin_8c37eb0c((void *)(o->f34));
    o->f40 = v20 * t1 + o->f4c;
    t2 = njSin_8c37eb0c((void *)(o->f30));
    o->f44 = o->f50 - o->f74 * t2;
    t3 = njCos_8c38c154((void *)(o->f34));
    o->f48 = o->f54 + v20 * t3;
}
