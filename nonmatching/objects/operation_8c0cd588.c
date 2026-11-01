/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd588
 * function: operation_8c0cd588
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 46 reference instruction lines
 * differing bytes: 10
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
struct Object {
    int tag;
    int f04;
    int f08;
    int f0c;
};
extern int g_8c46fa80;
extern int g_8c46fa84;
extern int g_8c46fa88;
extern void count_node_array_tree(void *, void *, void *);
extern int operator_new_8c18de4c(int);
extern void fill_node_array_tree(void *, void *, void *);
Object *operation_8c0cd588(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    o->f04 = 0;
    o->tag = 0;
    g_8c46fa88 = 0;
    count_node_array_tree((void *)o, (void *)a1, (void *)a2);
    t1 = operator_new_8c18de4c((int)(o->f04 << 2 << 1));
    o->f08 = (int)(t1);
    t2 = operator_new_8c18de4c((int)(o->tag << 1 << 1));
    o->f0c = (int)(t2);
    g_8c46fa80 = (int)(o->f08);
    g_8c46fa84 = (int)(o->f0c);
    g_8c46fa88 = 0;
    fill_node_array_tree((void *)o, (void *)a1, (void *)a2);
    return o;
}
