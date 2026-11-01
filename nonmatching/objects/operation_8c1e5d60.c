/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e5d60
 * function: operation_8c1e5d60
 * language: c
 * reference size: 364 bytes
 * compiled size: 368 bytes (+1.1%)
 * differing lines: 32 of 155 reference instruction lines
 * differing bytes: 239
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_18 Arg0_18;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    int f10;
    char unknown14[0x4];
    Arg0_18 *dispatch;
    int f1c;
    int f20;
};
struct Frame {
    float f00;
    float f04;
};
extern char g_8c32bb88[];
extern void operation_8c19a370(int, int, int, float, float);
extern void call_8c19a3a0(Frame *, void *, float, int);
extern void operation_8c1e5f80(int, void *, int, int, int);
void operation_8c1e5d60(Object *o, Arg1 *a1)
{
    Frame frame;
    int v5;
    int v6;
    int v7;
    int v9;
    if (!(a1->f30 >= 0)) {
        return;
    }
    if (((o->tag & 4)) == 0 && ((o->tag & 8)) == 0) {
        return;
    }
    (&frame)->f00 = a1->f10 + o->f08;
    (&frame)->f04 = a1->f14 + o->f0c;
    operation_8c19a370((int)a1, 1, 0, -1.0f / (a1->f34 + 0.0897f), 100000.0f);
    call_8c19a3a0((Frame *)((&frame)), (void *)(o->dispatch), 100000.0f, -1);
    (&frame)->f00 += 86.0f;
    call_8c19a3a0((Frame *)((&frame)), (void *)((void *)g_8c32bb88), 100000.0f, -1);
    (&frame)->f00 += 64.0f;
    if (((o->tag & 4)) != 0) {
        operation_8c1e5f80((int)o, (void *)(&frame), (int)(o->f1c), (int)(o->f10), (int)(o->tag & 0x20));
    }
    if (((o->tag & 8)) != 0) {
        call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32bb88 + 0x2)), 100000.0f, -1);
        (&frame)->f00 += 70.0f;
        v5 = (int)o->tag;
        if (((v5 & 0x10)) == 0) {
            v9 = (int)-0x979798;
        } else {
            if (o->f1c == o->f20) {
                v7 = (int)-1;
            } else {
                if (o->f1c > o->f20) {
                    v6 = (int)-0x881701;
                } else {
                    v6 = (int)-0x2273bf;
                }
                v7 = (int)v6;
            }
            v9 = (int)v7;
        }
        operation_8c1e5f80((int)o, (void *)(&frame), (int)(o->f20), v9, (int)(v5 & 0x20));
    }
}
