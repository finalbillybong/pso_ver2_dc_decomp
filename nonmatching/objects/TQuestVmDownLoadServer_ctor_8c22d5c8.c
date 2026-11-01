/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22d5c8
 * function: TQuestVmDownLoadServer_ctor_8c22d5c8
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 2 of 68 reference instruction lines
 * differing bytes: 4
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
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4];
    int f24;
    int f28;
    int f2c;
    int f30;
    char unknown34[0x20];
    int f54;
    int f58;
    char unknown5c[0x28];
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
};
extern int g_8c3384b8;
extern int g_8c5064f8;
extern Object *g_8c506504;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
void TQuestVmDownLoadServer_ctor_8c22d5c8(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278ea4;
    o->tag = (int)(g_8c3384b8);
    o->size = 0x9c;
    o->f94 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f54 = -1;
    o->f58 = 0;
    memset_8c12b880((void *)(((char *)o + 0x68)), 0, 0xd);
    memset_8c12b880((void *)(((char *)o + 0x75)), 0, 0xd);
    o->f84 = 0;
    o->f88 = 0;
    o->f8c = 0;
    o->f90 = 0;
    g_8c506504 = o;
    g_8c5064f8 = 0;
}
