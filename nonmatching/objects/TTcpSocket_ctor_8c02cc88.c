/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02cc88
 * function: TTcpSocket_ctor_8c02cc88
 * language: c
 * reference size: 1148 bytes
 * compiled size: 1148 bytes (+0.0%)
 * differing lines: 134 of 396 reference instruction lines
 * differing bytes: 103
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_c {
    char f00;
    char f01;
    unsigned short f02;
    int f04;
} Block_frame_c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    unsigned short size;
    char unknown20[0xa44];
    char fa64;
    char fa65;
    char fa66;
    char fa67;
    char fa68;
    char fa69;
    char fa6a;
    char fa6b;
    Block8 fa6c;
    short fa74;
    char unknowna76[0x2];
    int fa78;
    int fa7c;
    int fa80;
    int fa84;
    int fa88;
    int fa8c;
    int fa90;
    int fa94;
    int fa98;
    int fa9c;
    int faa0;
    char unknownaa4[0x2500];
    char f2fa4;
    char unknown2fa5[0x173];
    int f3118;
    int f311c;
    char unknown3120[0x8000];
    int fb120;
    int fb124;
    int fb128;
    int fb12c;
    int fb130;
    char unknownb134[0x4];
    int fb138;
    int fb13c;
    int fb140;
    char unknownb144[0x4];
    int fb148;
    int fb14c;
    int fb150;
    int fb154;
    int fb158;
    int fb15c;
    int fb160;
    int fb164;
    int fb168;
    int fb16c;
    int fb170;
    char unknownb174[0x4];
    int fb178;
    int fb17c;
    char unknownb180[0x4];
    int fb184;
    int fb188;
    char unknownb18c[0x4];
    int fb190;
    char unknownb194[0xc];
    int fb1a0;
    int fb1a4;
    int fb1a8;
    int fb1ac;
    int fb1b0;
    int fb1b4;
    char unknownb1b8[0x8];
    int fb1c0;
    int fb1c4;
    int fb1c8;
    int fb1cc;
    int fb1d0;
    int fb1d4;
};
struct S_vv4 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct Frame {
    char f04;
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char unknowna[0x2];
    Block_frame_c f0c;
};
struct S_vv5 {
    int f00;
};
extern int g_8c2e2170;
extern int g_8c2e7620;
extern void initialize_game_8c010514(void *);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void id_copy_8c3791ba(void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern void operation_8c02d104();
extern void operation_8c02d108();
extern void operation_8c02d10c();
Object *TTcpSocket_ctor_8c02cc88(Object *o, int a1, int a2, int a3, int a4, int a5, int a6)
{
    Frame frame;
    Object **home = &o;
    int v3;
    int v1;
    S_vv4 *v4;
    int v2;
    (void)home;
    {
        Object *base = o;
        initialize_game_8c010514((void *)base);
        base->dispatch = (void *)0x8c260f40;
        base->tag = (int)(g_8c2e2170);
        base->size = 0xa64;
    }
    o->dispatch = (void *)0x8c26147c;
    operation_8c1acbc0((void *)(((char *)o + 0xeb4)));
    operation_8c1acbc0((void *)(((char *)o + 0xed8)));
    v1 = (int)0xaf4;
    v3 = (int)0;
    v2 = (int)-1;
    while (0x1e > v3) {
        v4 = (S_vv4 *)((char *)((int)o + v1 + v3 * 0x1c) + 4);
        v4->f00 = 0;
        v4->f01 = v2;
        v4->f04 = 0;
        v4->f03 = 0;
        v4->f02 = 0;
        operation_1c7dd4((void *)((int)v4 + 8));
        v3 = (int)(v3 + 1);
    }
    call_8c18e044((void *)(((char *)o + 0xf14)), operation_8c02d10c, 0, 0x1c, 0x40);
    call_8c18e044((void *)(((char *)o + 0x1614)), operation_8c02d10c, 0, 0x1c, 0x40);
    call_8c18e044((void *)(((char *)o + 0x1d14)), operation_8c02d108, 0, 0xc, 0x10);
    call_8c18e044((void *)(((char *)o + 0x1dd4)), operation_8c02d104, 0, 0x98, 0x1e);
    o->tag = (int)(g_8c2e7620);
    o->size = 0xb1d8;
    id_copy_8c3791ba((void *)(&(&frame)->f04));
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    o->fa64 = 0;
    o->fa65 = 0;
    o->fa66 = (&frame)->f04;
    o->fa67 = (&frame)->f05;
    o->fa68 = (&frame)->f06;
    o->fa69 = (&frame)->f07;
    o->fa6a = (&frame)->f08;
    o->fa6b = (&frame)->f09;
    (&frame)->f0c.f00 = 0;
    (&frame)->f0c.f01 = 0;
    (&frame)->f0c.f02 = 0xffff;
    (&frame)->f0c.f04 = 0xffff;
    *(Block8 *)&o->fa6c = *(Block8 *)&(&frame)->f0c;
    o->fa78 = 0;
    o->fa7c = 0;
    o->fa80 = 0;
    o->fa84 = 0;
    o->fa88 = 0;
    o->fa8c = 0;
    o->fa90 = 0;
    o->fa94 = 0;
    o->f2fa4 = 0;
    o->fa98 = 0;
    o->fa9c = 0;
    o->f3118 = 0;
    o->f311c = 0;
    o->fa74 = a2;
    o->faa0 = a3;
    memset_8c12b880((void *)(((char *)o + 0x3046)), 0, 0x30);
    memset_8c12b880((void *)(((char *)o + 0x3076)), 0, 0x30);
    memset_8c12b880((void *)(((char *)o + 0x30a6)), 0, 0x40);
    strncpy_8c12b154((void *)(((char *)o + 0x3046)), a4, 0x30);
    strncpy_8c12b154((void *)(((char *)o + 0x3076)), a5, 0x30);
    strncpy_8c12b154((void *)(((char *)o + 0x30a6)), a6, 0x30);
    o->fb120 = 0;
    o->fb124 = 0;
    o->fb128 = 0;
    o->fb12c = 0;
    o->fb130 = 0;
    o->fb138 = 0;
    o->fb13c = 0;
    o->fb140 = 0;
    o->fb148 = 0;
    o->fb14c = 0;
    o->fb150 = 0;
    o->fb154 = 0;
    o->fb158 = 0;
    o->fb1ac = 0;
    o->fb15c = 0;
    o->fb160 = 0;
    o->fb164 = 0;
    o->fb168 = 0;
    o->fb16c = 0;
    o->fb170 = 0;
    o->fb178 = 0;
    o->fb17c = 0;
    o->fb184 = 0;
    o->fb188 = 0;
    o->fb1a0 = 0;
    o->fb1a4 = 0;
    o->fb1a8 = 0;
    o->fb1ac = 0;
    o->fb1b0 = 0;
    o->fb1b4 = 0;
    o->fb1c0 = 0;
    o->fb190 = 0;
    o->fb1c8 = 0;
    o->fb1c4 = 0;
    o->fb1cc = 0;
    o->fb1d0 = 0;
    o->fb1d4 = 0;
    return o;
}
