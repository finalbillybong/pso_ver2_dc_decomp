/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b3df8
 * function: TTecLuker_ctor_8c0b3df8
 * language: c
 * reference size: 552 bytes
 * compiled size: 552 bytes (+0.0%)
 * differing lines: 16 of 212 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_64 Arg0_20_64;
typedef struct Arg3 Arg3;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0xac];
    unsigned short fd0;
    char unknownd2[0x36];
    S_c8c011ecc *f108;
    short f10c;
    char unknown10e[0x2];
    int f110;
    int f114;
    Vector3 f118;
    int f124;
    int f128;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_20_64 *f64;
    char unknown68[0x758];
    Vector3 f7c0;
};
struct Arg3 {
    Vector3 f00;
};
struct S_c8c011ecc {
    int f00;
    char unknown4[0x20];
    void *f24;
};
struct Frame {
    Block_frame_8 f08;
};
extern int g_8c305228;
extern Vector3 g_8c30522c;
extern int g_8c418248;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern int get_current_area_8c032b10(void);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void spawn_child_view_8c16bd38(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c0b4020();
extern void operation_8c0b4068();
Object *TTecLuker_ctor_8c0b3df8(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    Frame frame;
    int n;
    int t1;
    S_c8c011ecc *t2;
    int pm3;
    S_c8c011ecc *pm4;
    n = a4;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a3, n);
    o->dispatch = (void *)0x8c266024;
    o->tag = (int)(g_8c305228);
    (void)home;
    o->size = 0x12c;
    o->f124 = 0;
    o->f128 = 0;
    o->f110 = 0;
    o->f114 = 0;
    t1 = get_current_area_8c032b10();
    o->f10c = t1;
    o->f108 = (S_c8c011ecc *)0;
    if (o->f20 != 0) {
        o->fd0 = (int)(int)(int)o->f20->f20;
    }
    if (!((o->fd0 & 0xffff) == g_8c418248)) {
        *(Vector3 *)&o->f118 = *(&o->f20->f7c0);
    } else {
        if (n == 0xa) {
            *(&o->f118) = *(Vector3 *)&a3->f00;
        }
        if (0xa != n) {
            t2 = game_malloc_8c011ecc(0xa8);
            if (0 != t2) {
                S_c8c011ecc *self = (S_c8c011ecc *)t2;
                S_c8c011ecc **home = &self;
                t2->f24 = (void *)0x8c266054;
                (void)home;
                call_8c18e044((void *)((0x4 + (char *)self)), operation_8c0b4068, 0, 4, 8);
                self->f00 = 0;
                self->f24 = (void *)0x8c266048;
                call_8c18e044((void *)(((char *)self + 0x28)), operation_8c0b4020, 0, 0x10, 8);
            }
            o->f108 = t2;
            if (!(0 == o->f108)) {
                *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&g_8c30522c;
                njPushMatrix_8c38ade4(((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(o->f20->f64));
                pm3 = 0;
                call_8c3be280(pm3, (void *)(&(&frame)->f08), (void *)(&(&frame)->f08));
                njPopMatrix_8c38accc(1);
                (&frame)->f08.f00 += o->f20->f3c;
                (&frame)->f08.f04 += o->f20->f40 + 20.0f;
                (&frame)->f08.f08 += o->f20->f44;
                pm4 = o->f108;
                spawn_child_view_8c16bd38((void *)(pm4), (int)(&(&frame)->f08), (int)(o->f20));
            }
        }
    }
    play_se_8c05fbf8(0x20018, (void *)(((char *)o + 0x24)), 0, 0);
    return o;
}
