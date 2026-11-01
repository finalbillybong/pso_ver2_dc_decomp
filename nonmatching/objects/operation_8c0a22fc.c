/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a22fc
 * function: operation_8c0a22fc
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 16 of 60 reference instruction lines
 * differing bytes: 25
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
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x7];
    int f08;
};
struct S_vv2 {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
};
struct Object {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
};
extern S_L8c46efc8 g_8c46efc8;
void operation_8c0a22fc(Object *o)
{
    S_vv2 *v2;
    int pm1;
    float pm2;
    if (!(((8 & (&g_8c46efc8)->f08)) != 0) && 0 == ((4 & (&g_8c46efc8)->f08))) {
        return;
    }
    pm1 = (int)(int)(int)(&g_8c46efc8)->f00;
    v2 = (S_vv2 *)*(S_g8c3032d8 **)((pm1 << 2) + (char *)0x8c3032d8);
    if (!(0 == v2)) {
        v2->f40 = o->f1c;
        v2->f44 = o->f20;
        v2->f48 = o->f24;
        v2->f4c = o->f28;
        pm2 = o->f2c;
        v2->f50 = pm2;
        v2->f54 = o->f30;
        pm1 = o->f14;
        v2->f58 = (pm1);
    }
}
