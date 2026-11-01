/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c107cd0
 * function: TDeadSpot_update_8c107cd0
 * language: c
 * reference size: 180 bytes
 * compiled size: 184 bytes (+2.2%)
 * differing lines: 106 of 83 reference instruction lines
 * differing bytes: 149
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
typedef struct S_x12208 S_x12208;
typedef struct S_x33296 S_x33296;
typedef struct S_x52176 S_x52176;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    char unknown2c[0x98];
    float fc4;
    float fc8;
};
struct S_vv9 {
    float f00;
    float f04;
    float f08;
};
struct S_x52176 {
    float f00;
};
struct S_vv5 {
    float f00;
};
struct S_x33296 {
    float f00;
};
struct S_x12208 {
    float f00;
};
void TDeadSpot_update_8c107cd0(Object *o)
{
    float v1;
    int v8;
    int v10;
    int v7;
    S_vv5 *v5;
    float v2;
    int v6;
    float v3;
    S_vv9 *v9;
    float v4;
    v5 = (S_vv5 *)&o->fc8;
    v1 = (float)v5->f00;
    if (!(v1 > o->fc4)) {
        v5->f00 = v1 + 0.2f;
        if (v5->f00 > 0.0f) {
            v2 = (float)o->f20;
            v3 = (float)o->f24;
            v4 = (float)o->f28;
            v6 = (int)((char *)o + 0x2c);
            v7 = (int)((char *)o + 0x30);
            v8 = (int)((char *)o + 0x34);
            v9 = (S_vv9 *)((char *)o + 0x5c);
            v10 = (int)0;
            while (4 > v10) {
                v9->f00 = ((S_x52176 *)(v6 + v10 * 0xc))->f00 * v5->f00 + v2;
                v9->f04 = ((S_x33296 *)(v7 + v10 * 0xc))->f00 * v5->f00 + v3;
                v9->f08 = ((S_x12208 *)(v8 + v10 * 0xc))->f00 * v5->f00 + v4;
                v9 = (S_vv9 *)((char *)v9 + 24);
                v10 = (int)(v10 + 1);
            }
        }
    }
}
