/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c172c74
 * function: operation_8c172c74
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 10 of 64 reference instruction lines
 * differing bytes: 12
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
typedef struct Arg0_ac Arg0_ac;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x90];
    Arg0_ac *fac;
    char unknownb0[0x4];
    int fb4;
};
extern Object *g_8c4db520;
extern char g_8c318df4[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c369eb8(void *);
extern int file_last_size_8c104d50(int);
extern int game_malloc_buffer_8c011e9c(int);
extern int file_load_8c104d00(int, void *);
extern void call_8c16bf4c(void *, void *);
extern void operation_03cee8_8c173484(void);
Object *operation_8c172c74(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c270274;
    call_8c369eb8((void *)((void *)g_8c318df4));
    t1 = file_last_size_8c104d50(a2);
    o->fac = (Arg0_ac *)game_malloc_buffer_8c011e9c((int)(t1 + 0x400));
    t3 = file_load_8c104d00(a2, (void *)(o->fac));
    call_8c369eb8((void *)((g_8c318df4 + 0x6)));
    if (!(t3 >= 0)) {
        o->f04 |= 1;
    } else {
        g_8c4db520 = o;
        call_8c16bf4c((void *)(o->fac), (void *)(((char *)o + 0x28)));
        o->fb4 = 0;
    }
    operation_03cee8_8c173484();
    return o;
}
