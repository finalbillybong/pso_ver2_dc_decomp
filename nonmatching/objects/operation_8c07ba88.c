/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07ba88
 * function: operation_8c07ba88
 * language: c
 * reference size: 268 bytes
 * compiled size: 260 bytes (-3.0%)
 * differing lines: 128 of 117 reference instruction lines
 * differing bytes: 225
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
struct Frame {
    char unknown0[0x40];
};
struct Object {
    char unknown0[0x398];
    int f398;
    int f39c;
};
struct S_vv10 {
    char unknown0[0x38c];
    int f38c;
    char unknown390[0x14];
    int f3a4;
};
extern int operation_8c012a14(int);
int operation_8c07ba88(Object *o)
{
    Frame frame;
    int v3;
    int v4;
    int v1;
    int v2;
    int v9;
    int v8;
    int v11;
    S_vv10 *v10;
    int t1;
    v1 = (int)0x3a0;
    v2 = (int)0;
    v4 = (int)0;
    while (*(int *)((char *)((char *)o + 0x0) + (v3)) > v4) {
        t1 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v4 << 1))));
        *(int *)((char *)((char *)(&frame) + 0x0) + (v4 << 2)) = (int)(t1);
        if (*(int *)((char *)((char *)(&frame) + 0x0) + (v4 << 2)) != 0) {
            v2 = (int)(v2 + 1);
        }
        v4 = (int)(v4 + 1);
    }
    if (v2 == 0) {
        return 0;
    }
    do {
        *(int *)((char *)o + 0x39c) += 1;
        if (o->f39c >= o->f398) {
            o->f39c = 0;
        }
    } while (*(int *)((char *)((char *)(&frame) + 0x0) + (o->f39c << 2)) == 0);
    v9 = (int)0;
    v3 = (int)0x398;
    v8 = (int)0x4000000;
    while (o->f398 > v9) {
        v10 = (S_vv10 *)*(S_frame_0 **)((char *)((char *)(&frame) + 0x0) + (v9 << 2));
        if (v10 != 0) {
            v11 = (int)o->f39c;
            if (v11 == v9) {
                *(int *)((char *)v10 + 0x3a4) |= v8;
                v10->f38c = 0x23;
            } else {
                *(int *)((char *)v10 + 0x3a4) &= -0x4000001;
                v10->f38c = 0x22;
            }
        }
        v9 = (int)(v9 + 1);
    }
    return 1;
}
