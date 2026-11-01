/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3308
 * function: operation_8c0c3308
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 4 of 70 reference instruction lines
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
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2fc];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
};
extern int g_8c467874;
extern int g_8c467878;
extern float distance_xz(void *, void *);
extern int lookup_object_by_id(int);
void operation_8c0c3308(Object *o, float f0)
{
    int v1;
    int v8;
    int v10;
    int v6;
    int v7;
    int v5;
    float v35;
    float t1;
    v1 = (int)0xffff;
    v35 = f0 * f0;
    if (((o->f34 & 0x10)) != 0) {
        v5 = (int)(g_8c467874 + g_8c467878);
    } else {
        v5 = (int)g_8c467874;
    }
    v6 = (int)0x334;
    v7 = (int)0x324;
    for (v8 = 0; v8 < v5; v8++) {
        v10 = (int)*(int *)((char *)0x8c467240 + (v8 << 2));
        if (v10 != (int)(o) && v10 != 0 && *(int *)((char *)o + v6) != v10) {
            t1 = distance_xz((void *)(v10 + v7), (void *)((int)o + v7));
            if (v35 > t1) {
                v35 = t1;
                v1 = v8;
            }
        }
    }
    o->f354 = v1;
    o->f334 = lookup_object_by_id((unsigned short)(o->f354));
}
