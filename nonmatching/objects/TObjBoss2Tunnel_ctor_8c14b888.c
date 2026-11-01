/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14b888
 * function: TObjBoss2Tunnel_ctor_8c14b888
 * language: c
 * reference size: 444 bytes
 * compiled size: 444 bytes (+0.0%)
 * differing lines: 6 of 168 reference instruction lines
 * differing bytes: 10
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    int f28;
    int f2c;
    char unknown30[0x18];
    int f48;
    char unknown4c[0x4];
    float f50;
    float f54;
    float f58;
    int f5c;
    int f60;
    float f64;
    int f68;
    char unknown6c[0x2c];
    float f98;
    float f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    float fb0;
    int fb4;
    int fb8;
    int fbc;
    int fc0;
    char unknownc4[0x18];
    int fdc;
};
extern int g_8c315590;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4da600;
extern char g_8c286398[];
extern char g_8c2863b0[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void construct_running_profile(void *);
extern void call_8c14ba94(Object *);
extern void clear_running_profile(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjBoss2RaftSplash_ctor_8c1858c4(int, Object *, int, int, void *);
Object *TObjBoss2Tunnel_ctor_8c14b888(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int v4;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26e124;
    construct_running_profile((void *)(((char *)o + 0x6c)));
    o->tag = (int)(g_8c315590);
    o->size = 0xe0;
    o->f28 = 0;
    g_8c4da600 = 0;
    o->f20 = 0.0f;
    o->f24 = 0.0f;
    o->f2c = 0;
    call_8c14ba94(o);
    o->f60 = 0;
    o->f64 = 0.0f;
    o->f48 = 0;
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    o->f58 = 0.0f;
    o->f5c = 0;
    o->f68 = 0;
    clear_running_profile((void *)(((char *)o + 0x6c)));
    o->f98 = 1.0f;
    o->f9c = 0.0f;
    o->fb4 = 0x21;
    o->fb8 = 0;
    o->fbc = 0;
    o->fc0 = 0;
    o->fa0 = 0;
    o->fa8 = 0;
    o->fa4 = 0;
    o->fac = 0;
    o->fb0 = 0.0f;
    v1 = (int)0;
    while (2 > v1) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x44);
        if (t1 != 0) {
            int off = v1 * 0xc;
            Object *p = o;
            TObjBoss2RaftSplash_ctor_8c1858c4(t1, p, (int)(off + g_8c286398), (int)(off + g_8c2863b0), (void *)(&p->f24));
        }
        *(int *)((char *)((char *)o + 0xc4) + (v1 << 2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    v4 = (int)0;
    while (4 > v4) {
        *(int *)((char *)((char *)o + 0xcc) + (v4 << 2)) = 0;
        v4 = (int)(v4 + 1);
    }
    o->fdc = 0xa;
    return o;
}
