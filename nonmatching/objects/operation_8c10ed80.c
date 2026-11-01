/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10ed80
 * function: operation_8c10ed80
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 44 of 152 reference instruction lines
 * differing bytes: 34
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
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_x13616 S_x13616;
typedef struct S_x52368 S_x52368;
struct Object {
    int tag;
    char unknown4[0x90];
    Arg0_94 *f94;
};
struct Frame {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_x13616 {
    float f00;
};
struct S_vv10 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xa4];
    int fdc;
    int fe0;
};
struct S_x52368 {
    float f00;
};
extern int g_8c467874;
extern int g_8c467878;
extern void operation_8c01d728(void *);
extern int active_unflagged_8c111784(void *);
extern float squared_distance_xz(void *, void *);
extern void call_8c10efe0(Object *, void *, int, int);
int operation_8c10ed80(Object *o, Arg1 *a1, float f0)
{
    Frame frame;
    int found;
    int i;
    int j;
    int k;
    S_vv10 *v10;
    int p;
    int m6;
    int m7;
    float d;
    found = 0;
    operation_8c01d728((void *)(o->f94));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f00;
    o->tag = 0;
    for (i = 0; 0xa > i; i++) {
        *(int *)((char *)((char *)o + 0x4) + (i * 0xc)) = 0xffff;
        ((S_x13616 *)((char *)(int *)((char *)o + 0xc) + i * 0xc))->f00 = 0.0f;
    }
    f0 *= f0;
    m6 = 0x20000000;
    m7 = 0x10000;
    for (j = g_8c467874; (g_8c467874 + g_8c467878) > j; j++) {
        v10 = (S_vv10 *)*(S_g8c467240 **)((char *)0x8c467240 + (j << 2));
        if (active_unflagged_8c111784((void *)v10) == 0 || ((v10->f34 & m6)) == 0) {
            continue;
        }
        for (k = 0; v10->fe0 > k; k++) {
            p = (int)v10->fdc;
            if (p == 0) {
                break;
            }
            if (((*(int *)((char *)((char *)p + 0x18) + (k * 0x2c)) & m7)) == 0) {
                continue;
            }
            d = squared_distance_xz((void *)(&frame), (void *)(p + k * 0x2c + 0x1c));
            if (!(f0 > d)) {
                continue;
            }
            *(int *)((char *)((char *)o + 0x4) + (o->tag * 0xc)) = v10->f20;
            found = 1;
            ((S_x52368 *)((char *)(int *)((char *)o + 0xc) + o->tag * 0xc))->f00 = d;
            *(int *)((char *)((char *)o + 0x8) + (o->tag * 0xc)) = k;
            if (o->tag >= 9) {
                break;
            }
            o->tag += 1;
        }
    }
    call_8c10efe0(o, (void *)(((char *)o + 0x4)), 0, (int)((int)o->tag + -1));
    return found;
}
