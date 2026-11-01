/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15564c
 * function: operation_8c15564c
 * language: c
 * reference size: 312 bytes
 * compiled size: 308 bytes (-1.3%)
 * differing lines: 84 of 137 reference instruction lines
 * differing bytes: 232
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2f8];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x48];
    int f3a4;
};
struct S_vv9 {
    int f00;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    char unknown4[0x8];
};
extern int call_8c18e768(int, int);
extern void operation_8c0368a8(void *);
void operation_8c15564c(Object *o)
{
    Frame frame;
    int v3;
    int v1;
    int v2;
    int v4;
    int v7;
    int v6;
    int v10;
    int v11;
    S_vv9 *v9;
    int v8;
    int v12;
    int v13;
    int v16;
    int v17;
    int t1;
    o->f34 &= -0x200001;
    if (((o->f3a4 & 0x400000)) != 0) {
        v1 = (int)0x800000;
        v2 = (int)0;
        v3 = (int)0;
        while (4 > v3) {
            v6 = (int)v1;
            v7 = (int)v2;
            if (*(short *)((char *)((char *)o + 0x4c8) + (v3 << 1)) > 0) {
                v4 = (int)v2;
                if (((o->f3a4 & v1)) != 0) {
                    v4 = (int)(v2 + 1);
                }
                v6 = (int)(v1 << 1);
                v7 = (int)v4;
            }
            v2 = (int)v7;
            v3 = (int)(v3 + 1);
            v1 = (int)v6;
        }
        if (v2 > 0) {
            t1 = call_8c18e768((int)(o->f35a - o->f330 + v2 + -1), v2);
            if (t1 > 0) {
                v8 = (int)t1;
            } else {
                v8 = (int)0;
            }
            v9 = (S_vv9 *)&o->f3a4;
            v10 = (int)0;
            v11 = (int)0x800000;
            while (4 > v10) {
                if (((o->f3a4 & v11)) != 0) {
                    v9->f00 &= ~v11;
                    v12 = (int)(*(short *)((char *)((char *)o + 0x4c8) + (v10 << 1)) - v8);
                    if (v12 > 0) {
                        v13 = (int)v12;
                    } else {
                        v13 = (int)0;
                    }
                    *(short *)((char *)((char *)o + 0x4c8) + (v10 << 1)) = v13;
                }
                v10 = (int)(v10 + 1);
                v11 = (int)(v11 << 1);
            }
            (&frame)->f00 = 0x18;
            (&frame)->f01 = 3;
            (&frame)->f02 = o->f20;
            v16 = (int)0;
            while (4 > v16) {
                v17 = (int)(v16 << 1);
                *(short *)((char *)((char *)(&frame) + 0x4) + (v17)) = *(short *)((char *)((char *)o + 0x4c8) + (v17));
                v16 = (int)(v16 + 1);
            }
            operation_8c0368a8((void *)(&frame));
        }
    }
    o->f35a = o->f330;
}
