/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c230028
 * function: operation_8c230028
 * language: c
 * reference size: 464 bytes
 * compiled size: 460 bytes (-0.9%)
 * differing lines: 8 of 147 reference instruction lines
 * differing bytes: 134
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_g8c338670 S_g8c338670;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_64 S_g8c467180_64;
typedef struct S_g8c467180_64_4 S_g8c467180_64_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x3e8];
    int f414;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x64];
    S_g8c467180_64 *f64;
};
struct S_g8c467180_64 {
    char unknown0[0x4];
    S_g8c467180_64_4 *f04;
};
extern Block8 g_8c338680;
extern Block8 g_8c338688;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbb0c;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c01c250(int);
extern int vmu_find_file_8c01018c(int);
extern void operation_8c0e9aac(int);
extern void request_game_mode_8c01c1a4(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdBack_ctor_8c198294(void *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern int operation_8c19b054(void);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void sprintf_8c12b048(void *, void *, ...);
extern void operation_8c119764(int, int, int);
Object *operation_8c230028(Object *o)
{
    Object **home = &o;
    int t2;
    int t3;
    int t8;
    int t7;
    int t6;
    int t4;
    int t5;
    int t1;
    Frame frame;
    int pm10;
    int pm11;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c278f1c;
    o->f28 = 0;
    o->f20 = 0;
    o->f24 = 0;
    (void)home;
    pm10 = 2;
    operation_8c01c250(pm10);
    t1 = vmu_find_file_8c01018c((int)((void *)0x8c3198c1));
    switch (t1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        operation_8c0e9aac(1);
        request_game_mode_8c01c1a4(6);
        return o;
        default:
        t2 = vmu_find_file_8c01018c((int)((void *)0x8c319912));
        switch (t2) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            operation_8c0e9aac(1);
            request_game_mode_8c01c1a4(6);
            return o;
            default:
            t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (!(t3 == 0)) {
                TAdBack_ctor_8c198294((void *)t3, (int)o);
            }
            o->f414 = (int)(g_8c4dbb0c);
            *(Block8 *)&(&frame)->f0c = *(&g_8c338680);
            *(&(&frame)->f04) = *(Block8 *)&g_8c338688;
            t4 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
            o->f28 = (t4);
            t5 = operation_8c19b054();
            t7 = call_8c18e768((int)((char)t5), 2);
            t6 = operation_8c19b054();
            t8 = call_8c18e8a0((int)((char)t6), 2);
            pm11 = 0x220;
            sprintf_8c12b048((void *)((pm11 + (char *)o)), (void *)(g_8c467180->f64->f04), *(S_g8c338670 **)((char *)0x8c338670 + (t7 << 2)), t8 + 1);
            operation_8c119764((int)(o->f28), (int)(((char *)o + 0x220)), 1);
            return o;
        }
        return (Object *)(t2);
    }
}
