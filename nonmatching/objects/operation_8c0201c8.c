/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0201c8
 * function: operation_8c0201c8
 * language: c
 * reference size: 144 bytes
 * compiled size: 148 bytes (+2.8%)
 * differing lines: 58 of 62 reference instruction lines
 * differing bytes: 122
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
typedef struct Arg1 Arg1;
typedef struct S_x32496 S_x32496;
typedef struct S_x52208 S_x52208;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x432];
    short f454;
};
struct S_x52208 {
    Vector3 f00;
};
struct S_x32496 {
    Vector3 f00;
};
void operation_8c0201c8(Object *o, Arg1 *a1)
{
    int v1;
    int v4;
    int v6;
    int v10;
    o->f454 = o->f20;
    v4 = (int)0;
    goto L_8c020208;
    v1 = (int)0;
L_8c0201f4:;
    *(char *)((char *)((char *)o + 0x404) + ((short)v1)) = *(char *)((char *)((char *)a1 + 0xb4) + (v1)) + *(char *)((char *)((char *)a1 + 0x142) + (v1 * 0x1c));
    v4 = (int)(v1 + 1);
L_8c020208:;
    v1 = (int)v4;
    if (0x13 > v4) {
        goto L_8c0201f4;
    }
    v10 = (int)0;
    goto L_8c020236;
    v6 = (int)0;
L_8c02021a:;
    *(Vector3 *)&((S_x52208 *)((char *)(int *)((char *)o + 0x2c0) + v6 * 0xc))->f00 = *(Vector3 *)&((S_x32496 *)((int)a1 + 0x28 + v6 * 0xc))->f00;
    v10 = (int)(v6 + 1);
L_8c020236:;
    v6 = (int)v10;
    if (5 > v10) {
        goto L_8c02021a;
    }
}
