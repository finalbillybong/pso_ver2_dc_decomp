/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139ad8
 * function: operation_8c139ad8
 * language: c
 * reference size: 408 bytes
 * compiled size: 412 bytes (+1.0%)
 * differing lines: 60 of 161 reference instruction lines
 * differing bytes: 238
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x35e];
    int f390;
    char unknown394[0x4];
    int f398;
};
extern short g_8c31311a;
extern short g_8c313128;
extern S_g8c4d97e0 *g_8c4d97e0;
extern short g_8c4d9b74;
extern int g_8c4d9b9c;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TBoss3VoloptP01_ctor_1_8c13bf58(int, Object *, int, int, int);
extern void TBoss3VoloptHiraisin_ctor_1_8c150384(void *, void *, short, short);
extern int rand(void);
extern void TBoss3VoloptMonitor_ctor_1_8c150e9c(int, Object *, int, int, int, int);
extern void create_actor_8c13bec4(void *, int, int);
void operation_8c139ad8(Object *o)
{
    int v3;
    int v11;
    int v2;
    int v1;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f398 != 0) {
        return;
    }
    v1 = (int)0x434;
    v2 = (int)0;
    while (6 > v2) {
        v3 = (int)(v2 << 1);
        *(short *)((char *)((char *)v3 + 0x0) + ((int)((void *)0x8c31311c))) = o->f20 + (v2 + 1);
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v1);
        if (t1 != 0) {
            TBoss3VoloptP01_ctor_1_8c13bf58(t1, o, v2, (int)(*(unsigned short *)((char *)((char *)v3 + 0x0) + ((int)((void *)0x8c31311c)))), (int)(o->f30 + (v2 + 1)));
        }
        v2 = (int)(v2 + 1);
    }
    g_8c31311a = o->f20 + 0x21;
    if (g_8c4d9b9c == 0) {
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3ac);
        if (t2 != 0) {
            TBoss3VoloptHiraisin_ctor_1_8c150384((void *)t2, (void *)o, g_8c31311a, (short)(o->f30 + 0x21));
        }
    }
    g_8c4d9b74 = o->f20 + 7;
    v9 = (int)0x3b0;
    v2 = (int)0;
    while (0x18 > v2) {
        t4 = rand();
        v11 = (int)(int)((float)t4 / 32768.0f * 5.0f * 30.0f + 90.0f);
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v9);
        if (t3 != 0) {
            TBoss3VoloptMonitor_ctor_1_8c150e9c(t3, o, (int)(g_8c4d9b74 + v2), (int)(o->f30 + (v2 + 7)), v2, v11);
        }
        v2 = (int)(v2 + 1);
    }
    g_8c313128 = o->f20 + 0x22;
    create_actor_8c13bec4((void *)o, (int)(o->f20 + 0x22), (int)(o->f30 + 0x22));
    o->f390 = 1;
}
