/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c124ed0
 * function: TObjEneBalClawBody_update_8c124ed0
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 42 of 134 reference instruction lines
 * differing bytes: 47
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
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x28];
    float f3d0;
    char unknown3d4[0x4];
    float f3d8;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
extern void operation_8c11e098(void);
extern int operation_8c03d338(void);
extern void operation_8c127654(Object *);
extern void operation_8c12551c(Object *);
extern void call_8c125128(Object *);
extern void operation_8c125038(void *);
extern void operation_8c11df84(void *);
extern void call_8c11deec(Object *);
extern void operation_8c027090(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void TObjEneBalClawBody_update_8c124ed0(Object *o)
{
    int v1;
    int v2;
    int t1;
    operation_8c11e098();
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c127654(o);
        operation_8c12551c(o);
        return;
    }
    v1 = (int)o->f3a4;
    if (((v1 & 0x2000000)) != 0) {
        v2 = (int)(((v1 & 0x1000000)) != 0);
        if (v2 == 0) {
            if (((v1 & 1)) != 0) {
                goto L_8c124f3a;
            }
            if (o->f30a == 2) {
                goto L_8c124f3a;
            }
            o->f39c = o->f30a;
            o->f390 = 2;
            goto L_8c124f3a;
        }
    }
    call_8c125128(o);
L_8c124f3a:;
    if (o->f30a != o->f390) {
        if (o->f398 != -1) {
            o->f398 = -1;
            operation_8c125038((void *)o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    operation_8c125038((void *)o);
    operation_8c11df84((void *)o);
    call_8c11deec(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f324.f04 = o->f3d0 + o->f3d8 + o->f324.f04;
    o->fdc->f04 = o->f3d0 + o->f3d8;
    operation_8c027090((int)o);
    minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
}
