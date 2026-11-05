/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d8c40
 * function: TLockOnCursor_ctor_8c0d8c40
 * language: c
 * reference size: 476 bytes
 * compiled size: 476 bytes (+0.0%)
 * differing lines: 98 of 174 reference instruction lines
 * differing bytes: 284
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x12272 S_x12272;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    short f24;
    char unknown26[0x40a];
    unsigned short f430;
    short f432;
    short f434;
    short f436;
    float f438;
    int f43c;
    unsigned short f440;
    short f442;
    short f444;
    char unknown446[0x2];
    unsigned short f448;
    short f44a;
    short f44c;
    char unknown44e[0x2];
    unsigned short f450;
    short f452;
    short f454;
    char unknown456[0x2];
    int f458;
    unsigned short f45c;
    short f45e;
    float f460;
    float f464;
};
struct S_x12272 {
    int f00;
    int f04;
};
extern int g_8c307338;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void construct_seeded_random_state_8c0daf18(void *, unsigned int);
extern void operation_8c0d8e1c();
Object *TLockOnCursor_ctor_8c0d8c40(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2676f0;
    o->f20 = 0;
    {
        S_x12272 *self = (S_x12272 *)((char *)o + 0x28);
        S_x12272 **shome = &self;
        (void)shome;
        self->f00 = 0;
        self->f04 = 0;
        call_8c18e044((void *)((char *)self + 0x8), (void *)((void *)0x8c0d8e78), 0, 4, 4);
        self->f00 = 4;
        self->f04 = (int)((char *)self + 0x8);
    }
    call_8c18e044((void *)(((char *)o + 0x40)), operation_8c0d8e1c, 0, 0xfc, 4);
    o->f43c = 0;
    o->f440 = 0xffff;
    o->f442 = 0;
    o->f444 = 0;
    o->f448 = 0xffff;
    o->f44a = 0;
    o->f44c = 0;
    o->f440 = 0xffff;
    o->f442 = 0;
    o->f444 = 0;
    o->f448 = 0xffff;
    o->f44a = 0;
    o->f44c = 0;
    o->f430 = 0xffff;
    o->f432 = 0;
    o->f434 = 0;
    o->f436 = 0;
    o->f438 = 0.0f;
    o->f43c = 0;
    o->f450 = 0xffff;
    o->f452 = 0;
    o->f454 = 0;
    o->f458 = 0;
    o->f45e = o->f45c = 0xffff;
    o->f460 = 0.0f;
    o->f464 = 640000.0f;
    construct_seeded_random_state_8c0daf18((void *)(((char *)o + 0x468)), (unsigned int)o);
    o->tag = (int)(g_8c307338);
    o->size = 0x470;
    o->f24 = a2;
    o->f20 = 0;
    return o;
}
