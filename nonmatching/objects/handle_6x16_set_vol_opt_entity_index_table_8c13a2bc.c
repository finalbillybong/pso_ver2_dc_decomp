/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13a2bc
 * function: handle_6x16_set_vol_opt_entity_index_table_8c13a2bc
 * language: c
 * reference size: 136 bytes
 * compiled size: 132 bytes (-2.9%)
 * differing lines: 12 of 53 reference instruction lines
 * differing bytes: 94
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa];
    short f0a;
};
extern int g_8c4d9ba0;
extern char g_8c4d9ba4;
extern void call_8c3889a4(void *, void *, int);
extern int lookup_object_by_id(unsigned short);
extern int operation_8c13d638(int, int);
void handle_6x16_set_vol_opt_entity_index_table_8c13a2bc(Object *o)
{
    int v1;
    int v5;
    int v4;
    int v6;
    int t1;
    int t2;
    int t3;
    call_8c3889a4((void *)((void *)&g_8c4d9ba4), (void *)(((char *)o + 0x4)), 6);
    if (o->f0a != 0) {
        v1 = (int)o->f0a;
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (g_8c4d9ba4 << 1))));
        if (t1 != 0) {
            operation_8c13d638(t1, 1);
        }
        v4 = (int)(void *)&g_8c4d9ba4;
        while (v1 > v5) {
            t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (*(char *)((char *)((char *)v5 + 0x0) + (v4)) << 1))));
            v6 = (int)t2;
            if (t2 != 0) {
                t3 = operation_8c13d638(t2, 0);
                v6 = (int)t3;
            }
            v4 = (int)v6;
            v5 = (int)(v5 + 1);
        }
    }
    g_8c4d9ba0 = -1;
}
