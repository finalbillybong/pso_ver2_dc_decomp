/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05ee1c
 * function: operation_8c05ee1c
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 88 of 126 reference instruction lines
 * differing bytes: 141
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
typedef struct S_vv7 S_vv7;
typedef struct S_x37184 S_x37184;
typedef struct S_x37184_s38 S_x37184_s38;
typedef struct S_x58752 S_x58752;
typedef struct S_x8400 S_x8400;
typedef struct S_x98544 S_x98544;
typedef struct S_x99024 S_x99024;
struct Object {
    char unknown0[0x24];
    int f24;
    Vector3 f28;
    int f34;
};
struct S_vv7 {
    Vector3 f00;
};
struct S_x37184 {
    char unknown0[0x54];
    float f54;
    float f58;
};
struct S_x37184_s38 {
    char unknown0[0x24];
    int f24;
    char f28;
    char unknown29[0x1];
    short f2a;
};
struct S_x58752 {
    float f00;
};
struct S_x8400 {
    float f00;
};
struct S_x99024 {
    float f00;
};
struct S_x98544 {
    float f00;
};
void operation_8c05ee1c(Object *o, int a1)
{
    int v8;
    int v6;
    int v4;
    int v34;
    S_vv7 *v7;
    int v5;
    int v3;
    int v1;
    int v2;
    float t1;
    float t2;
    int t3;
    v2 = (int)a1;
    if (!(o->f24 > 0x32)) {
        v2 = (int)a1;
        if (((int)o->f34 + a1) >= 0x32) {
            v1 = (int)(0x31 - (int)o->f34);
            v2 = (int)v1;
        }
        o->f24 += v2;
        v3 = (int)0x8d4;
        v4 = (int)0x8d8;
        v6 = (int)0;
        v5 = (int)0xb28;
        while (v2 > v6) {
            v34 = (int)o->f34;
            v7 = (S_vv7 *)((char *)(((char *)((int)o + v34 * 0x2c) + 0x38)) + 4);
            *(Vector3 *)&v7->f00 = *(Vector3 *)&o->f28;
            ((S_x37184 *)((int)o + v34 * 0x2c))->f54 = 0.5f;
            ((S_x37184 *)((int)o + v34 * 0x2c))->f58 = 0.5f;
            ((S_x37184_s38 *)((char *)(int)o + v34 * 0x2c + 0x38))->f24 = -0x1fdf70;
            ((S_x37184_s38 *)((char *)(int)o + v34 * 0x2c + 0x38))->f28 = 0;
            ((S_x37184_s38 *)((char *)(int)o + v34 * 0x2c + 0x38))->f2a = 0;
            t3 = ((int (*)(void *))0x8c12b944)((void *)0x8c12b944);
            v8 = (int)(int)((float)t3 / 32768.0f * 65536.0f);
            t1 = ((float (*)(int))0x8c37eb0c)(v8);
            ((S_x58752 *)((char *)(int *)((char *)o + 0x8d0) + o->f34 * 0xc))->f00 = t1;
            ((S_x8400 *)((int)o + v3 + o->f34 * 0xc))->f00 = 0.0f;
            t2 = ((float (*)(int))0x8c38c154)(v8);
            ((S_x99024 *)((int)o + v4 + o->f34 * 0xc))->f00 = t2;
            ((S_x98544 *)((int)o + v5 + (o->f34 << 2)))->f00 = 0.0f;
            o->f34 += 1;
            v6 = (int)(v6 + 1);
        }
    }
}
