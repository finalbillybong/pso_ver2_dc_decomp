/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13fbf4
 * function: operation_8c13fbf4
 * language: c
 * reference size: 336 bytes
 * compiled size: 332 bytes (-1.2%)
 * differing lines: 92 of 147 reference instruction lines
 * differing bytes: 268
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
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    Arg0_34 *f34;
    char unknown38[0x24];
    int f5c;
    int f60;
    Arg0_64 *f64;
};
struct Arg0_34 {
    int f00;
};
extern int ADXF_GetStat_8c34da3c(void *);
extern void call_8c34d4e8(void *);
extern void game_free_8c011ec0(void *);
extern void set_record_8c37e9a8(int, void *, int, int, int);
extern void set_record_8c37e9b6(int, int, int, int);
extern int call_8c38278e(Arg0_34 *);
void operation_8c13fbf4(Object *o)
{
    int v6;
    int v4;
    int v5;
    int v1;
    int v7;
    int t1;
    int t2;
    v1 = (int)0;
    t1 = ADXF_GetStat_8c34da3c((void *)(o->f64));
    switch (t1) {
    case 1:
        if (++o->f24 >= 3) {
            return;
        }
        v1 = (int)1;
        break;
    case 2:
        if (!(++o->f28 >= 0x96)) {
            return;
        }
        v1 = (int)1;
        break;
    case 3:
        break;
    default:
        return;
    }
    if (v1 != 0) {
        call_8c34d4e8((void *)(o->f64));
        o->f64 = (Arg0_64 *)0;
        game_free_8c011ec0((void *)(*(Arg0_3c **)((char *)((char *)o + 0x3c) + (o->f60 << 2))));
        *(int *)((char *)((char *)o + 0x3c) + (o->f60 << 2)) = 0;
        o->f30 = 1;
        return;
    }
    call_8c34d4e8((void *)(o->f64));
    o->f64 = (Arg0_64 *)0;
    v4 = (int)((int)o->f60 + 1);
    o->f60 = (int)(v4);
    if (v4 != o->f5c) {
        o->f30 = 1;
        return;
    }
    v6 = (int)0;
    v5 = (int)0x40000000;
    while (o->f5c > v6) {
        v7 = (int)((int)o + v6 * 0x2c + 0x78);
        set_record_8c37e9a8(v7, (void *)(*(Arg0_3c **)((char *)((char *)o + 0x3c) + (v6 << 2))), 0, 0, 0);
        set_record_8c37e9b6((int)(o->f34->f00 + v6 * 0xc), v7, 0, v5);
        v6 = (int)(v6 + 1);
    }
    t2 = call_8c38278e((Arg0_34 *)(o->f34));
    if (t2 != -1) {
        o->f20 = 1;
        o->f04 |= 1;
    }
}
