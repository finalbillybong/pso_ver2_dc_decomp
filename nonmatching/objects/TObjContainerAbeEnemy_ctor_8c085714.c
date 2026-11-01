/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c085714
 * function: TObjContainerAbeEnemy_ctor_8c085714
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 8 of 66 reference instruction lines
 * differing bytes: 7
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
typedef struct Block_p0_78 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_78;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Block_p0_78 f78;
    char unknown84[0x286];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
};
extern int g_8c2ff804;
extern char g_8c2ff564[];
extern void TObjContainerBase_ctor_8c083eac(Object *, int, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *TObjContainerAbeEnemy_ctor_8c085714(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TObjContainerBase_ctor_8c083eac(o, a1, a2);
    o->dispatch = (void *)0x8c264600;
    o->tag = (int)(g_8c2ff804);
    o->size = 0x384;
    o->f30a = 0;
    o->f34 |= 0x60000000;
    copy_actor_records((void *)o, (void *)((void *)g_8c2ff564), 1);
    attach_and_insert_object((void *)o);
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    {
        float *p = &o->f78.f04;
        *p += *(float *)(g_8c2ff564 + 0x4);
    }
    return o;
}
