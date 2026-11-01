/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ad0c0
 * function: TTecBarta_update_8c0ad0c0
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 2 of 56 reference instruction lines
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
typedef struct S_L8c2852d0 S_L8c2852d0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xa8];
    int fcc;
    unsigned short fd0;
};
struct S_L8c2852d0 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c2852d0 g_8c2852d0;
extern int lookup_object_by_id(unsigned short);
extern void call_8c0a7608(void *, void *);
extern void call_8c0b9dcc(Object *);
extern void operation_8c0b9f74(Object *);
extern void operation_8c0ba12c(void *);
void TTecBarta_update_8c0ad0c0(Object *o)
{
    unsigned int v2;
    int v1;
    int t1;
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (int)(t1);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    v2 = (unsigned int)0;
    v1 = (int)0x14c;
    while ((unsigned int)*(int *)((char *)&g_8c2852d0.f04 + (o->fcc << 3)) > v2) {
        if (*(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2 << 2)) != 0) {
            call_8c0a7608((void *)(*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2 << 2))), (void *)(((char *)o + 0x24)));
        }
        v2 = (unsigned int)(v2 + 1);
    }
    call_8c0b9dcc(o);
    operation_8c0b9f74(o);
    operation_8c0ba12c((void *)o);
}
