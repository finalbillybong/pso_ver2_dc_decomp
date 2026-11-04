/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c167a90
 * function: TPhotonLine_ctor_8c167a90
 * language: c
 * reference size: 316 bytes
 * compiled size: 320 bytes (+1.3%)
 * differing lines: 136 of 123 reference instruction lines
 * differing bytes: 266
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TPhotonLine.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_s350 Arg0_s350;
typedef struct Arg1 Arg1;
typedef struct Arg1_sc Arg1_sc;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x2f0];
    Vector3 f350;
    char unknown35c[0x4];
    float f360;
    char unknown364[0x8];
    int f36c;
    char unknown370[0x14];
    short f384;
};
struct Arg1 {
    Vector3 f00;
    Vector3 f0c;
    float f18;
    float f1c;
};
struct Arg1_sc {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s350 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c3175b4;
extern void call_8c043418(Object *, int);
extern int lookup_object_by_id(unsigned short);
extern void copy_actor_records(void *, void *, int);
extern void transform_actor_records(void *);
extern void attach_and_insert_object(void *);
Object *TPhotonLine_ctor_8c167a90(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    char *v1;
    int v3;
    unsigned int v2;
    int t1;
    (void)home;
    call_8c043418(o, a2);
    o->dispatch = (void *)0x8c26ff9c;
    o->tag = (int)(g_8c3175b4);
    o->size = 0x394;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f54 = *(Vector3 *)&a1->f00;
    o->f350 = a1->f0c;
    o->f350.x *= a1->f18;
    o->f350.y *= a1->f18;
    o->f350.z *= a1->f18;
    o->f360 = a1->f1c;
    t1 = lookup_object_by_id((unsigned short)a3);
    o->f36c = (int)(t1);
    copy_actor_records((void *)o, (void *)((void *)0x8c317588), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    v2 = (unsigned int)0;
    while ((unsigned int)0xa > v2) {
        *(unsigned short *)((char *)((char *)o + 0x370) + (v2 << 1)) = 0xffff;
        v2 = (unsigned int)(v2 + 1);
    }
    o->f384 = 0;
    return o;
}
