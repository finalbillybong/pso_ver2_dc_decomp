/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c198920
 * function: TBoss1DragonColli_C_ctor_8c198920
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 26 of 120 reference instruction lines
 * differing bytes: 34
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss1DragonColli_C.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg3 Arg3;
typedef struct S_vv4 S_vv4;
typedef struct Block_vv4_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0x10];
} Block_vv4_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xba];
    Arg0_dc *fdc;
    int fe0;
    Vector3 fe4;
};
struct Arg3 {
    Vector3 f00;
};
struct S_vv4 {
    Block_vv4_0 f00;
};
extern Block44 g_8c31c9b0;
extern int g_8c31c9dc;
extern void operation_8c051eb8(void *);
extern int advance_counter_8c01d5fc(int);
extern int operator_new_8c18de4c(int);
extern void transform_actor_records(void *);
extern void insert_object_by_id(void *);
extern void operation_8c198aa4(void *);
Object *TBoss1DragonColli_C_ctor_8c198920(Object *o, int a1, int a2, Arg3 *a3, float f0)
{
    Object **home = &o;
    S_vv4 *v4;
    int v3;
    float d;
    float v6;
    int v1;
    int t1;
    int t2;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c272930;
    o->tag = (int)(g_8c31c9dc);
    o->size = 0xf0;
    *(Vector3 *)&o->fe4 = *(Vector3 *)&a3->f00;
    t1 = advance_counter_8c01d5fc(0);
    o->f20 = t1;
    o->fe0 = a2;
    t2 = operator_new_8c18de4c((int)(o->fe0 * 0x2c));
    o->fdc = (Arg0_dc *)t2;
    v6 = f0 * (float)((int)o->fe0 + -1);
    d = f0 * 2.0f;
    v3 = (int)0;
    v4 = (S_vv4 *)o->fdc;
    v1 = (int)0x20003;
    while (o->fe0 > v3) {
        *(Block44 *)&v4->f00 = *(Block44 *)&g_8c31c9b0;
        v4->f00.f00 = 0.0f;
        v4->f00.f04 = 0.0f;
        v4->f00.f08 = v6;
        v4->f00.f0c = f0;
        v4->f00.f18 = (int)(v1);
        v6 = (float)(v6 - d);
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 44);
    }
    transform_actor_records((void *)o);
    insert_object_by_id((void *)o);
    operation_8c198aa4((void *)o);
    return o;
}
