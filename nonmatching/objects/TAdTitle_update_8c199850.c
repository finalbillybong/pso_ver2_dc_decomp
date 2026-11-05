/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199850
 * function: TAdTitle_update_8c199850
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 6 of 208 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct Object Object;
typedef struct S_vv12_0 S_vv12_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    float f2c;
    float f30;
    float f34;
    float f38;
    char unknown3c[0x10];
    float f4c;
    float f50;
    float f54;
    float f58;
    char unknown5c[0x10];
    float f6c;
    float f70;
    float f74;
    float f78;
    char unknown7c[0x10];
    float f8c;
    float f90;
    float f94;
    float f98;
    unsigned char f9c;
    char unknown9d[0x3];
    int fa0;
    float fa4;
    float fa8;
};
struct S_g8c467180 {
    char unknown0[0x48];
    int f48;
};
extern S_g8c467180 *g_8c467180;
extern unsigned char g_8c4dc444;
extern int operation_8c04b8dc(void *);
void TAdTitle_update_8c199850(Object *o)
{
    unsigned char v1;
    int v3;
    int v2;
    char *v12;
    float c;
    int t1;
    v1 = (unsigned char)g_8c4dc444;
    switch (v1) {
    case 0:
        o->fa0 += 0xc;
        v3 = (int)o->fa0;
        v2 = (int)0xff;
        if (!(v3 > v2)) {
            goto L_8c1999a0;
        }
        o->fa0 = (int)(v2);
        break;
    case 1:
        o->f94 += 0.25f;
        o->f98 -= 0.25f;
        c = o->f8c;
        o->f2c = (o->f2c - c) * o->f94 + c;
        c = o->f90;
        o->f30 = (o->f30 - c) * o->f98 + c;
        c = o->f8c;
        o->f34 = (o->f34 - c) * o->f94 + c;
        c = o->f90;
        o->f38 = (o->f38 - c) * o->f98 + c;
        c = o->f8c;
        o->f4c = (o->f4c - c) * o->f94 + c;
        c = o->f90;
        o->f50 = (o->f50 - c) * o->f98 + c;
        c = o->f8c;
        o->f54 = (o->f54 - c) * o->f94 + c;
        c = o->f90;
        o->f58 = (o->f58 - c) * o->f98 + c;
        c = o->f8c;
        o->f6c = (o->f4c - c) * o->f94 + c;
        c = o->f90;
        o->f70 = (o->f50 - c) * o->f98 + c;
        c = o->f8c;
        o->f74 = (o->f74 - c) * o->f94 + c;
        c = o->f90;
        o->f78 = (o->f78 - c) * o->f98 + c;
        o->fa0 -= 0x3f;
        if (!(o->fa0 >= 0)) {
            o->fa0 = 0;
            o->f04 |= 1;
        }
    }
L_8c1999a0:;
    v12 = (char *)g_8c467180->f48;
    t1 = operation_8c04b8dc((void *)(*(S_vv12_0 **)((char *)((char *)v12 + 0x0) + (o->f9c << 2))));
    o->fa4 = 620.0f - (float)(unsigned int)t1;
    o->fa8 = 86.0f;
}
