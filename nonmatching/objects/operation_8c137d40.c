/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137d40
 * function: operation_8c137d40
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 14 of 94 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct S_x27344 S_x27344;
struct Object {
    char unknown0[0x1e];
    char size;
    char f1f;
};
struct Arg2 {
    unsigned short f00;
};
struct Arg3 {
    char f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_c8c0541b4 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x27344 {
    Vector3 f00;
};
extern S_c8c0541b4 *operation_8c0541b4(int, int);
int operation_8c137d40(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    int v1;
    int v2;
    S_c8c0541b4 *t1;
    if (a1 != 0) {
        goto L_8c137dcc;
        v1 = (int)/* ? r3 */ 0;
L_8c137d5c:;
        v2 = (int)0;
        t1 = operation_8c0541b4((int)(*(unsigned short *)((char *)((char *)o + 0x0) + ((char)v1 << 1))), (int)(*(char *)((char *)((char *)o + 0x14) + ((char)v1))));
        if (t1 != 0) {
            a2->f00 = *(volatile unsigned short *)((char *)((char *)o + 0x0) + (o->f1f << 1)) & 0xffff;
            a3->f00 = *(char *)((char *)((char *)o + 0x14) + (o->f1f));
            *(Vector3 *)&a1->f00 = *(Vector3 *)&((S_x27344 *)(*(char *)((char *)((char *)o + 0x14) + (o->f1f)) * 0x2c + (t1->fdc + 0x1c)))->f00;
            v2 = (int)1;
        }
        o->f1f += 1;
        if (v2 != 0) {
            return 1;
        }
L_8c137dcc:;
        if (o->f1f < o->size) {
            v1 = (int)o->f1f;
            if (0xa > o->f1f) {
                goto L_8c137d5c;
            }
        }
    }
    a2->f00 = 0xffff;
    a3->f00 = 0;
    return 0;
}
