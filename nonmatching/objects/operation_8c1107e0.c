/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1107e0
 * function: operation_8c1107e0
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 4 of 83 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c021ef8_0 S_c8c021ef8_0;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int lookup_low_id(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c10be58(int, int, int, void *, void *);
Object *operation_8c1107e0(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int v5;
    int v6;
    int v1;
    int v2;
    int v3;
    int v4;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c269b38;
    v1 = (int)0x308;
    v2 = (int)0x5f8;
    v3 = (int)0xffff;
    o->f20 = 0;
    v5 = (int)0;
    v4 = (int)0x5fc;
    while (4 > v5) {
        t1 = lookup_low_id(v5);
        if (t1 != 0) {
            v6 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
            if (v6 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v2)) & 0xffff) != (unsigned short)v3) {
                t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xec);
                if (t2 != 0) {
                    call_8c10be58(t2, (int)(*(unsigned short *)((char *)((char *)t1 + 0x0) + (v2))), v5, (void *)(*(S_c8c021ef8_0 **)((char *)((char *)t1 + 0x0) + (v4))), g_8c44be84);
                }
                o->f20 += 1;
            }
        }
        v5 = (int)(v5 + 1);
    }
    return o;
}
