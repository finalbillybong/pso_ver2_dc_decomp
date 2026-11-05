/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c172e84
 * function: operation_8c172e84
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 2 of 175 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
extern Object *g_8c4db524;
extern char g_8c318df4[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c369eb8(void *);
extern int file_last_size_8c104d50(int);
extern int game_malloc_buffer_8c011e9c(int);
extern int file_load_8c104d00(int, void *);
extern int operation_8c1054d0(int);
extern int operation_8c105420(int, int);
extern void call_8c16bf4c(void *, void *);
extern void operation_03cee8_8c173484(void);
Object *operation_8c172e84(Object *o, int a1, int a2, int a3, register int a4)
{
    Object **home = &o;
    int v7;
    int v12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c270274;
    o->fb4 = a3;
    o->fac = (Arg0_ac *)0;
    switch (o->fb4) {
    case 0:
        if (a4 == 0) {
            call_8c369eb8((void *)((void *)g_8c318df4));
            t1 = file_last_size_8c104d50(a2);
            t2 = game_malloc_buffer_8c011e9c((int)(t1 + 0x400));
            o->fac = (Arg0_ac *)t2;
            t9 = file_load_8c104d00(a2, (void *)(o->fac));
            call_8c369eb8((void *)((g_8c318df4 + 0x6)));
            v7 = (int)t9;
        }
        if (a4 == 1) {
            t3 = operation_8c1054d0(a2);
            t4 = game_malloc_buffer_8c011e9c((int)(t3 + 0x400));
            o->fac = (Arg0_ac *)t4;
            t10 = operation_8c105420(a2, (int)(o->fac));
            v7 = (int)t10;
        }
        if (!(v7 >= 0)) {
            o->f04 |= 1;
        } else {
            g_8c4db520 = o;
            call_8c16bf4c((void *)(o->fac), (void *)(((char *)o + 0x28)));
        }
        operation_03cee8_8c173484();
        break;
    case 1:
        if (a4 == 0) {
            t5 = file_last_size_8c104d50(a2);
            t6 = game_malloc_buffer_8c011e9c((int)(t5 + 0x400));
            o->fac = (Arg0_ac *)t6;
            t11 = file_load_8c104d00(a2, (void *)(o->fac));
            v12 = (int)t11;
        }
        if (a4 == 1) {
            t7 = operation_8c1054d0(a2);
            t8 = game_malloc_buffer_8c011e9c((int)(t7 + 0x400));
            o->fac = (Arg0_ac *)t8;
            t12 = operation_8c105420(a2, (int)(o->fac));
            v12 = (int)t12;
        }
        if (!(v12 >= 0)) {
            o->f04 |= 1;
            goto L_8c172fd2;
        }
        g_8c4db524 = o;
        call_8c16bf4c((void *)(o->fac), (void *)(((char *)o + 0x28)));
        break;
    default:
        o->f04 |= 1;
        break;
    }
L_8c172fd2:;
    return o;
}
