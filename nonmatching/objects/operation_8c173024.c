/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c173024
 * function: operation_8c173024
 * language: c
 * reference size: 600 bytes
 * compiled size: 592 bytes (-1.3%)
 * differing lines: 104 of 239 reference instruction lines
 * differing bytes: 479
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_ac S_c8c122700_ac;
typedef struct S_g8c44be80 S_g8c44be80;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *f18;
    char unknown1c[0x90];
    S_c8c122700_ac *fac;
    char unknownb0[0x4];
    int fb4;
};
extern S_g8c44be80 *g_8c44be80;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *g_8c4db520;
extern int g_8c4dc844;
extern int g_8c505968;
extern int g_8c505970;
extern int g_8c506060;
extern int g_8c506064;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void call_8c172c74(S_c8c122700 *, void *, void *);
extern void TObject_ctor_8c0330e4(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void memcpy_8c12b77c(void *, int, int);
extern void call_8c16bf4c(void *, void *);
extern void operation_03cee8_8c173484(void);
void operation_8c173024(void)
{
    char *v16;
    int v6;
    char *v27;
    S_c8c122700 *t2;
    int v17;
    char *v5;
    S_c8c122700 *t4;
    int v28;
    S_c8c122700 *t6;
    char *v4;
    char *v15;
    int t3;
    char *v26;
    int t5;
    S_c8c122700 *t1;
    int t7;
    switch (g_8c4dc844) {
    case 1:
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t1 == 0) {
L_8c173076:;
            for (;;) {
            }
        }
        if (t1 != 0) {
            call_8c172c74(t1, g_8c44be80, (void *)((void *)0x8c4dc804));
        }
        return;
    case 2:
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t2 == 0) {
L_8c1730a0:;
            for (;;) {
            }
        }
        if (t2 != 0) {
            S_c8c122700 *self = (S_c8c122700 *)t2;
            S_c8c122700 **home = &self;
            (void)home;
            v5 = (char *)g_8c505970;
            v4 = (char *)g_8c505968;
            TObject_ctor_8c0330e4((void *)t2, g_8c44be80);
            self->f18 = (void *)0x8c270274;
            v6 = (int)(v5 + 0x400);
            t3 = game_malloc_buffer_8c011e9c(v6);
            self->fac = (S_c8c122700_ac *)t3;
            memcpy_8c12b77c((void *)(self->fac), (int)(v4), v6);
            if (!(v6 >= 0)) {
                self->f04 |= 1;
            } else {
                g_8c4db520 = self;
                call_8c16bf4c((void *)(self->fac), (void *)(((char *)self + 0x28)));
                self->fb4 = 0;
            }
            operation_03cee8_8c173484();
        }
        return;
    case 3:
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t4 == 0) {
L_8c173122:;
            for (;;) {
            }
        }
        if (t4 != 0) {
            S_c8c122700 *self = (S_c8c122700 *)t4;
            S_c8c122700 **home = &self;
            (void)home;
            v16 = (char *)g_8c506064;
            v15 = (char *)g_8c506060;
            TObject_ctor_8c0330e4((void *)t4, g_8c44be80);
            self->f18 = (void *)0x8c270274;
            v17 = (int)(v16 + 0x400);
            t5 = game_malloc_buffer_8c011e9c(v17);
            self->fac = (S_c8c122700_ac *)t5;
            memcpy_8c12b77c((void *)(self->fac), (int)(v15), v17);
            if (!(v17 >= 0)) {
                self->f04 |= 1;
            } else {
                g_8c4db520 = self;
                call_8c16bf4c((void *)(self->fac), (void *)(((char *)self + 0x28)));
                self->fb4 = 0;
            }
            operation_03cee8_8c173484();
        }
        return;
    case 4:
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t6 == 0) {
L_8c1731a4:;
            for (;;) {
            }
        }
        if (t6 != 0) {
            S_c8c122700 *self = (S_c8c122700 *)t6;
            S_c8c122700 **home = &self;
            (void)home;
            v27 = (char *)g_8c505970;
            v26 = (char *)g_8c505968;
            TObject_ctor_8c0330e4((void *)t6, g_8c44be80);
            self->f18 = (void *)0x8c270274;
            v28 = (int)(v27 + 0x400);
            t7 = game_malloc_buffer_8c011e9c(v28);
            self->fac = (S_c8c122700_ac *)t7;
            memcpy_8c12b77c((void *)(self->fac), (int)(v26), v28);
            if (!(v28 >= 0)) {
                self->f04 |= 1;
            } else {
                g_8c4db520 = self;
                call_8c16bf4c((void *)(self->fac), (void *)(((char *)self + 0x28)));
                self->fb4 = 0;
            }
            operation_03cee8_8c173484();
        }
        return;
    default:
L_8c173214:;
        for (;;) {
        }
    case 0:
        return;
    }
}
