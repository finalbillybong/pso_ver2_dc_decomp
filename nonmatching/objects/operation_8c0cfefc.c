/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cfefc
 * function: operation_8c0cfefc
 * language: c
 * reference size: 136 bytes
 * compiled size: 132 bytes (-2.9%)
 * differing lines: 6 of 55 reference instruction lines
 * differing bytes: 88
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
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
struct Object {
    char unknown0[0x33c];
    Arg0_33c *f33c;
    char unknown340[0x44];
    int f384;
    char unknown388[0x26];
    short f3ae;
};
struct S_g8c46fab8 {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
};
extern char g_8c306a6c[];
void operation_8c0cfefc(Object *o)
{
    int v1;
    float *pm2;
    int pm1;
    float *pm3;
    char *pm4;
    pm1 = o->f384;
    *(float *)(0x28 + g_8c306a6c) = (*(S_g8c46fab8 **)((pm1 << 2) + (char *)0x8c46fab8))->f00;
    pm3 = (float *)(0x78 + g_8c306a6c);
    pm4 = (o->f384 << 2) + (char *)0x8c46fab8;
    *pm3 = (*(S_g8c46fab8 **)(pm4))->f0c;
    pm2 = (float *)(g_8c306a6c + 0xc8);
    pm1 = o->f384;
    *pm2 = (*(S_g8c46fab8 **)((char *)0x8c46fab8 + (pm1 << 2)))->f10;
    if (((int)(int)o->f3ae != 0)) {
        v1 = (unsigned short)5;
    } else {
        v1 = 1;
    }
    pm1 = v1 << 2;
    o->f33c->f08 = *(float *)((char *)&(*(S_g8c46fab8 **)((char *)0x8c46fab8 + (o->f384 << 2)))->f00 + (pm1));
}
