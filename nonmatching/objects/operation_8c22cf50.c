/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22cf50
 * function: operation_8c22cf50
 * language: c
 * reference size: 572 bytes
 * compiled size: 572 bytes (+0.0%)
 * differing lines: 28 of 235 reference instruction lines
 * differing bytes: 23
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
typedef struct S_L8c506350_34 S_L8c506350_34;
typedef struct S_L8c506350_38 S_L8c506350_38;
typedef struct S_L8c50638c_34 S_L8c50638c_34;
typedef struct S_L8c50638c_38 S_L8c50638c_38;
typedef struct S_L8c5063c8_38 S_L8c5063c8_38;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c506404 S_g8c506404;
typedef struct S_g8c506500 S_g8c506500;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Frame {
    Block8 f00;
    Block8 f08;
    int f10;
    char unknown14[0xc];
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4b4];
    int f4b4;
};
struct Object {
    char unknown0[0x26];
    char f26;
    char unknown27[0x11];
    Arg0_38 *f38;
};
extern int g_8c506404;
extern S_g8c467180 *g_8c467180;
extern int g_8c5064fc;
extern S_g8c506500 *g_8c506500;
extern char g_8c50634c;
extern char g_8c3384d4[];
extern char g_8c506350[];
extern char g_8c50638c[];
extern char g_8c5063c8[];
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
extern void call_8c119c78(void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, void *, int);
extern int call_8c12b1c4(void *, void *);
extern int strncmp(int, void *, int);
extern int game_malloc_buffer_8c011e9c(void *);
extern void operation_8c25decc(int, int);
void operation_8c22cf50(Object *o)
{
    Frame frame;
    int v8;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    if (g_8c506404 == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c3384a8;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3384b0;
        t1 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
        g_8c506404 = (int)(t1);
        operation_8c119764(t1, (int)(g_8c467180->f2c->f4b4), 0x81);
        call_8c119c78((void *)(S_g8c506404 *)g_8c506404);
        g_8c5064fc = 0;
        g_8c506500 = 0;
    }
    if (o == 0) {
        return;
    }
    memset_8c12b880((void *)(&(&frame)->f10), 0, 0x10);
    strncpy_8c12b154((void *)(&(&frame)->f10), (void *)(((char *)o + 0x27)), 0x10);
    call_8c12b1c4((void *)(&(&frame)->f10), (void *)((void *)g_8c3384d4));
    t2 = call_8c12b1c4((void *)0, (void *)((g_8c3384d4 + 0x2)));
    g_8c50634c = o->f26;
    t3 = strncmp(t2, (void *)((g_8c3384d4 + 0x3)), 4);
    if (t3 == 0) {
        strncpy_8c12b154((void *)((void *)g_8c506350), (void *)(((char *)o + 0x27)), 0x10);
        strncpy_8c12b154((void *)((g_8c506350 + 0x10)), (void *)(((char *)o + 0x4)), 0x22);
        *(int *)(g_8c506350 + 0x34) = (int)o->f38 + 8;
        t4 = game_malloc_buffer_8c011e9c((void *)(*(S_L8c506350_34 **)(g_8c506350 + 0x34)));
        *(int *)(g_8c506350 + 0x38) = (int)(t4);
        memset_8c12b880((void *)(*(S_L8c506350_38 **)(g_8c506350 + 0x38)), 0, (int)(*(S_L8c506350_34 **)(g_8c506350 + 0x34)));
        *(int *)0x8c506340 = 0;
        g_8c5064fc += (int)o->f38;
        return;
    }
    t5 = strncmp(t2, (void *)((g_8c3384d4 + 0x7)), 4);
    if (t5 == 0) {
        strncpy_8c12b154((void *)((void *)g_8c50638c), (void *)(((char *)o + 0x27)), 0x10);
        strncpy_8c12b154((void *)((g_8c50638c + 0x10)), (void *)(((char *)o + 0x4)), 0x22);
        *(int *)(g_8c50638c + 0x34) = (int)o->f38 + 8;
        t6 = game_malloc_buffer_8c011e9c((void *)(*(S_L8c50638c_34 **)(g_8c50638c + 0x34)));
        *(int *)(g_8c50638c + 0x38) = (int)(t6);
        memset_8c12b880((void *)(*(S_L8c50638c_38 **)(g_8c50638c + 0x38)), 0, (int)(*(S_L8c50638c_34 **)(g_8c50638c + 0x34)));
        *(int *)0x8c506344 = 0;
        v8 = (int)(g_8c5064fc + (int)o->f38);
        g_8c5064fc = (int)(v8);
        if (o->f26 != 0) {
            return;
        }
        operation_8c25decc((int)g_8c506500, v8);
        return;
    }
    t7 = strncmp(t2, (void *)((g_8c3384d4 + 0xb)), 4);
    if (t7 == 0) {
        strncpy_8c12b154((void *)((void *)g_8c5063c8), (void *)(((char *)o + 0x27)), 0x10);
        strncpy_8c12b154((void *)((g_8c5063c8 + 0x10)), (void *)(((char *)o + 0x4)), 0x22);
        *(int *)(g_8c5063c8 + 0x34) = (int)(o->f38);
        t8 = game_malloc_buffer_8c011e9c((void *)(o->f38));
        *(int *)(g_8c5063c8 + 0x38) = (int)(t8);
        memset_8c12b880((void *)(*(S_L8c5063c8_38 **)(g_8c5063c8 + 0x38)), 0, (int)(o->f38));
        *(int *)0x8c506348 = 0;
        v9 = (int)(g_8c5064fc + (int)o->f38);
        g_8c5064fc = (int)(v9);
        if (o->f26 == 1) {
            operation_8c25decc((int)g_8c506500, v9);
        }
    }
}
