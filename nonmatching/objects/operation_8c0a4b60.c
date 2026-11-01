/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a4b60
 * function: operation_8c0a4b60
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 18 of 139 reference instruction lines
 * differing bytes: 29
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
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
    float f70;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern char g_8c41cba0[];
extern S_c8c021ef8 *lookup_low_id(int);
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
void operation_8c0a4b60(Object *o)
{
    int v3;
    short v1;
    short v2;
    float v13;
    float v14;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    float t5;
    v1 = (short)*(short *)(g_8c41cba0 + 0x70);
    v2 = (short)*(short *)(g_8c41cba0 + 0x72);
    t1 = lookup_low_id(0);
    if (t1 != 0) {
        o->f4c = t1->f3c;
        o->f50 = t1->f40;
        o->f54 = t1->f44;
        v3 = (int)*(int *)(g_8c41cba0 + 0x5c);
        if (((v3 & 0x20000)) != 0) {
            o->f70 += 2.2f;
        } else {
            if (((v3 & 0x10000)) != 0) {
                o->f70 -= 2.2f;
            }
        }
        if (10.0f > o->f70) {
            o->f70 = 10.0f;
        }
        if (o->f70 > 300.0f) {
            o->f70 = 300.0f;
        }
        o->f34 = (Arg0_34 *)((int)o->f34 + (short)v1 * 3);
        o->f30 = (Arg0_30 *)((int)o->f30 + (short)v2 * 3);
        t5 = njCos_8c38c154((void *)(o->f30));
        v13 = (float)o->f70;
        v14 = (float)(v13 * t5);
        t2 = njSin_8c37eb0c((void *)(o->f34));
        o->f40 = v14 * t2 + o->f4c;
        o->f44 = o->f50 - o->f70 * njSin_8c37eb0c((void *)(o->f30));
        o->f48 = v14 * njCos_8c38c154((void *)(o->f34)) + o->f54;
    }
}
