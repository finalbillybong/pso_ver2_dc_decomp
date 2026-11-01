/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c224cc4
 * function: operation_8c224cc4
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 4 of 117 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_8c_0 Arg0_8c_0;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_90_0 Arg0_90_0;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
    Arg0_88 *f88;
    Arg0_8c *f8c;
    Arg0_90 *f90;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    int f04;
};
struct Arg1 {
    char unknown0[0x14];
    float f14;
    char unknown18[0x24];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg0_88 {
    char f00;
};
struct Arg0_8c {
    Arg0_8c_0 *f00;
};
struct Arg0_90 {
    Arg0_90_0 *f00;
};
extern void call_8c1a661c(S_vv1 *, int, int, int, void *, void *, int);
extern void draw_view_nodes(void *, void *, void *);
void operation_8c224cc4(Object *o, Arg1 *a1)
{
    int n;
    int col;
    int row;
    S_vv1 *v1;
    int v2;
    float t;
    v1 = (S_vv1 *)o->f30->f00;
    v2 = (int)o->f30->f04;
    row = 0;
    n = 0;
    while (o->f86 > n) {
        t = (float)row * 40.0f;
        if ((a1->f14 + t + 32.0f + 8.0f) < a1->f3c || (a1->f14 + t - 8.0f) > a1->f44) {
            n += 4;
        } else {
            t += 9.0f;
            for (col = 0; col < 4; col++) {
                if (n >= o->f86) {
                    break;
                }
                v1->f08 = (float)col * 40.0f + 5.0f;
                v1->f0c = t;
                call_8c1a661c(v1, v2, n, (int)(o->f88->f00), (void *)(o->f8c->f00), (void *)(o->f90->f00), 0);
                draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)a1);
                n++;
            }
        }
        row++;
    }
}
