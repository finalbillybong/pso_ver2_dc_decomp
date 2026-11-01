/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c1a90
 * function: operation_8c0c1a90
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 6 of 79 reference instruction lines
 * differing bytes: 4
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
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_object_by_id(unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0c65dc(int, int, int, Frame *, int, short);
void operation_8c0c1a90(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v45;
    int v2;
    int t1;
    int t2;
    v1 = (int)(a1 << 1);
    t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)o + 0x3d4) + (v1))));
    if (t1 != 0) {
        (&frame)->f00 = 0;
        v45 = (int)(a1 & 1);
        if (v45 != 0) {
            v2 = (int)-0x2000;
        } else {
            v2 = (int)0x2000;
        }
        (&frame)->f04 = (int)o->f64 + v2;
        (&frame)->f08 = 0;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x13c);
        if (t2 != 0) {
            call_8c0c65dc(t2, (int)((int)o + v45 * 0xc + 0x3b8), (int)(*(unsigned short *)((char *)((char *)o + 0x3d4) + (v1))), (Frame *)((&frame)), (int)(a1 * 3), o->f20);
        }
    }
}
