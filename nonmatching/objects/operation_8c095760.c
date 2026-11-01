/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c095760
 * function: operation_8c095760
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 32 of 112 reference instruction lines
 * differing bytes: 215
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3dc Arg0_3dc;
typedef struct Arg0_484 Arg0_484;
typedef struct Arg0_4e8 Arg0_4e8;
struct Object {
    char unknown0[0x3dc];
    Arg0_3dc *f3dc;
    char unknown3e0[0x4];
    int f3e4;
    char unknown3e8[0x9c];
    Arg0_484 *f484;
    char unknown488[0x5c];
    unsigned short f4e4;
    char unknown4e6[0x2];
    Arg0_4e8 *f4e8;
    int f4ec;
    char unknown4f0[0x20];
    int f510;
};
struct Arg0_484 {
    char unknown0[0x2c];
    int f2c;
};
struct Arg0_3dc {
    char unknown0[0x3e4];
    int f3e4;
};
extern float call_8c130390(float);
extern int lookup_object_by_id(int);
extern int call_8c18e768(void *, int);
void operation_8c095760(Object *o, int a1)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char *v29;
    float t1;
    int t2;
    int t3;
    v1 = (int)o->f4ec;
    v3 = (int)((char *)o + 0x4f0);
    for (v2 = 0; v1 > v2; v2++) {
        v4 = (int)(v2 << 2);
        if (*(int *)((char *)v3 + v4) == a1) {
            v6 = (int)((char *)o + 0x4f0);
            o->f4ec -= 1;
            v29 = (char *)o->f4ec;
            v5 = *(int *)((char *)v6 + ((int)(v29) << 2));
            *(int *)((char *)v6 + ((int)(v29) << 2)) = a1;
            *(int *)((char *)v6 + v4) = v5;
            break;
        }
    }
L_8c0957a2:;
    if (o->f510 == 3) {
        t1 = call_8c130390((float)(int)o->f4e8 / (float)o->f484->f2c);
        if (((int)o->f4e8 - (int)t1) >= o->f4ec) {
            t2 = lookup_object_by_id((unsigned short)(o->f4e4));
            o->f3dc = (Arg0_3dc *)t2;
            o->f3dc->f3e4 |= 8;
        }
    }
    if (((o->f3e4 & 0x100000)) == 0) {
        t3 = call_8c18e768((void *)(o->f4e8), 2);
        if (t3 >= o->f4ec) {
            o->f3e4 |= 0x10;
        }
    }
    if (2 >= o->f4ec) {
        o->f3e4 |= 0x40;
    }
}
