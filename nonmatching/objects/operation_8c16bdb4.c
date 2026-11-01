/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16bdb4
 * function: operation_8c16bdb4
 * language: c
 * reference size: 188 bytes
 * compiled size: 180 bytes (-4.3%)
 * differing lines: 18 of 83 reference instruction lines
 * differing bytes: 78
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
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct S_vv1 {
    int f00;
};
struct S_vv4 {
    Block28 f00;
};
struct S_vv3 {
    Block28 f00;
};
struct Frame {
    char unknown0[0x20];
    int f20;
};
struct Object {
    int tag;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c16b970(void *, int, int, int, int, int);
typedef struct Count {
    int c;
} Count;
void operation_8c16bdb4(Object *o, int a1, int a2, S_vv3 *a3, Count n)
{
    int v2;
    S_vv1 *v1;
    int v5;
    S_vv4 *v4;
    int t1;
    v1 = (S_vv1 *)((char *)o + 0x4);
    v4 = (S_vv4 *)((char *)o + 0xa8);
    v2 = (int)0;
    while (8 > v2) {
        v5 = (int)(v1->f00 == 0);
        if (v5 != 0) {
            v1->f00 = 1;
            *(Block28 *)&v4->f00 = *(Block28 *)&a3->f00;
            t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x5c);
            if (t1 != 0) {
                operation_8c16b970((void *)t1, (int)g_8c44bea0, (int)o, a2, a1, v2);
            }
            n.c -= 1;
            v1 = (S_vv1 *)((char *)v1 + 4);
            o->tag += 1;
            v4++;
            a3++;
            if (!(n.c > 0)) {
                return;
            }
        }
        v2 = (int)(v2 + 1);
    }
}
