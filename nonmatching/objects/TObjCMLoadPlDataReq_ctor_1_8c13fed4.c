/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13fed4
 * function: TObjCMLoadPlDataReq_ctor_1_8c13fed4
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 76 of 72 reference instruction lines
 * differing bytes: 65
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
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c3146d8;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c13ffec(Object *);
Object *TObjCMLoadPlDataReq_ctor_1_8c13fed4(Object *o, Arg1 *a1)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26dbec;
    o->tag = (int)(g_8c3146d8);
    o->size = 0x94;
    o->f3c = (int)(((char *)a1 + 0x7e4));
    o->f40 = (int)(((char *)a1 + 0xbc4));
    o->f44 = a1->f20;
    o->f48 = (int)(((char *)a1 + 0x38));
    o->f4c = (int)(((char *)a1 + 0x834));
    o->f50 = (int)(((char *)a1 + 0xbbc));
    o->f54 = (int)(((char *)a1 + 0xa90));
    o->f58 = (int)(((char *)a1 + 0x964));
    operation_8c13ffec(o);
    return o;
}
