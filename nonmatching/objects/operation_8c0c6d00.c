/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c6d00
 * function: operation_8c0c6d00
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 2 of 138 reference instruction lines
 * differing bytes: 2
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
typedef struct Arg0_118 Arg0_118;
typedef struct Arg0_11c Arg0_11c;
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xde];
    Vector3 fe4;
    char unknownf0[0x24];
    float f114;
    Arg0_118 *f118;
    Arg0_11c *f11c;
    Vector3 f120;
    int f12c;
    int f130;
    volatile unsigned short f134;
};
extern int g_8c467874;
extern int g_8c467878;
extern float g_8c46f3f4;
extern void call_8c3bdf60(void *, void *);
extern void call_8c0a7608(void *, void *);
extern void resolve_vector_reference(void *, void *);
extern int operation_8c011214(int, int, int);
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0c6e98(int, void *, int);
void operation_8c0c6d00(Object *o)
{
    Frame frame;
    int t2;
    int t1;
    int v13;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->fe4;
    call_8c3bdf60((void *)(&o->fe4), (void *)(((char *)o + 0xf0)));
    if (o->f118 != 0) {
        call_8c0a7608((void *)(o->f118), (void *)(&o->fe4));
    }
    o->f114 += g_8c46f3f4;
    if (o->f12c != 0) {
        *(Vector3 *)&o->f120 = *(Vector3 *)&o->fe4;
        *(int *)((char *)o + 0x130) += 1;
        if (o->f130 > 4) {
            o->f130 = 0;
            resolve_vector_reference((void *)o, (void *)(&o->f120));
        }
        if (o->f11c != 0) {
            call_8c0a7608((void *)(o->f11c), (void *)(&o->f120));
        }
    }
    if (!(500.0f > o->f114)) {
        o->f04 |= 1;
        return;
    }
    t1 = operation_8c011214((int)(&frame), (int)(&o->fe4), -1);
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(o->f134));
    if (t2 != 0) {
        v13 = (int)0;
        while ((g_8c467874 + g_8c467878) > v13) {
            if (*(int *)((char *)0x8c467240 + (v13 << 2)) != 0) {
                operation_8c0c6e98((int)o, (void *)(*(S_g8c467240 **)((char *)0x8c467240 + (v13 << 2))), t2);
            }
            v13 = (int)(v13 + 1);
        }
    }
}
