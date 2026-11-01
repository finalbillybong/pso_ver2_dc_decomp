/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08e944
 * function: operation_8c08e944
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 36 of 154 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c469dc4 S_g8c469dc4;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv7 S_vv7;
typedef struct S_x96528 S_x96528;
struct Object {
    char unknown0[0x44];
    Arg0_44 *f44;
    Arg0_48 *f48;
    char unknown4c[0x80];
    Vector3 fcc;
    Vector3 fd8;
    char unknowne4[0x14];
    short ff8;
    short ffa;
    char unknownfc[0x4];
    int f100;
    Arg0_104 *f104;
    int f108;
    int f10c;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c469dc4 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    char unknown6c[0x318];
    int f384;
    int f388;
};
struct S_x96528 {
    float f00;
};
extern S_g8c469dc4 *g_8c469dc4;
extern char g_8c300638[];
extern int operation_8c08fde8(void *, void *);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void operation_8c08e944(Object *o)
{
    S_vv7 *v7;
    int v14;
    int v15;
    int t1;
    int k;
    if (g_8c469dc4 == 0) {
        t1 = operation_8c08fde8((void *)o, (void *)(((char *)o + 0xbc)));
        g_8c469dc4 = (S_g8c469dc4 *)(int)(t1);
    }
    if (o->f108 != o->f10c && g_8c469dc4 != 0) {
        v7 = (S_vv7 *)g_8c469dc4;
        v7->f04 |= 1;
        g_8c469dc4 = (S_g8c469dc4 *)0;
    }
    if (g_8c469dc4 != 0) {
        *(Vector3 *)&g_8c469dc4->f3c = *(Vector3 *)&o->fcc;
        *(Vector3 *)&g_8c469dc4->f60 = *(Vector3 *)&o->fd8;
        v14 = (int)((char *)o + 0xe4);
        v15 = (int)0;
        while (5 > v15) {
            k = v15 << 2;
            ((S_x96528 *)((char *)(int *)((char *)g_8c469dc4 + 0x370) + k))->f00 = *(float *)((char *)((char *)v14 + 0x0) + k);
            v15 = (int)(v15 + 1);
        }
        g_8c469dc4->f384 = o->ff8;
        g_8c469dc4->f388 = o->ffa;
    }
    njPrintColor_8c38c5b6(-0xf0f10);
    if (o->f100 != 0) {
        debug_print_at_8c38cf80(0x1000f, (void *)((g_8c300638 + 0x165)));
    } else {
        debug_print_at_8c38cf80(0x1000f, (void *)((g_8c300638 + 0x165)));
    }
    debug_print_at_8c38cf80(0x10010, (void *)((g_8c300638 + 0x175)), (int)o->f108 + 1, o->f104);
    debug_print_at_8c38cf80(0x10011, (void *)((g_8c300638 + 0x18a)), o->f48, o->f44);
}
