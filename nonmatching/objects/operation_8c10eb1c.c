/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10eb1c
 * function: operation_8c10eb1c
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 8 of 123 reference instruction lines
 * differing bytes: 8
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
typedef struct S_x83504 S_x83504;
struct Object {
    int tag;
    char unknown4[0x78];
    int f7c;
    int f80;
    int f84;
    short f88;
    short f8a;
    int f8c;
    int f90;
    int f94;
    char unknown98[0x4];
    float f9c;
    float fa0;
    float fa4;
    Arg0_a8 *fa8;
    float fac;
    float fb0;
    float fb4;
    float fb8;
    float fbc;
    int fc0;
    int fc4;
    char unknownc8[0x3c];
    int f104;
};
struct S_x83504 {
    float f00;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_object_by_id(unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051eb8(void *, void *);
extern void copy_actor_records(void *, void *, int);
Object *operation_8c10eb1c(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)a1);
    o->f94 = (int)(t1);
    o->f9c = 0.0f;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->f8c = 0;
    o->f90 = 0;
    o->f8a = a1;
    o->f88 = -1;
    o->f84 = 0;
    o->tag = 0;
    a1 = 0xffff;
    for (v1 = 0; 0xa > v1; v1++) {
        t1 = v1 * 0xc;
        *(int *)((char *)((char *)o + 0x4) + t1) = a1;
        ((S_x83504 *)((char *)(int *)((char *)o + 0xc) + t1))->f00 = 0.0f;
    }
    o->f104 = 0;
    o->fac = 0.0f;
    o->fb0 = 0.0f;
    o->fb4 = 5.0f;
    o->fb8 = 19.0f;
    o->fbc = 5.0f;
    o->fc0 = 0;
    o->fc4 = 0x2203;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe4);
    if (t2 != 0) {
        operation_8c051eb8((void *)t2, g_8c44be98);
    }
    o->fa8 = (Arg0_a8 *)t2;
    if (o->fa8 != 0) {
        copy_actor_records((void *)(o->fa8), (void *)(&o->fac), 1);
    }
    o->f80 = o->f7c = 0xffff;
    return o;
}
