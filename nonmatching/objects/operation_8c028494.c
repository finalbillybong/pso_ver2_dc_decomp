/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c028494
 * function: operation_8c028494
 * language: c
 * reference size: 676 bytes
 * compiled size: 684 bytes (+1.2%)
 * differing lines: 20 of 306 reference instruction lines
 * differing bytes: 167
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a7170 S_c8c1a7170;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x7];
    char f07;
    char unknown8[0x1b];
    char f23;
    char unknown24[0x1b];
    char f3f;
    char unknown40[0x1b];
    char f5b;
    char unknown5c[0x1b];
    char f77;
    char unknown78[0x1b];
    char f93;
    char unknown94[0x1b];
    char faf;
    char unknownb0[0x1b];
    char fcb;
    char unknowncc[0x2d5];
    char f3a1;
};
struct S_vv2 {
    char f00;
};
struct S_vv4 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    char unknown10[0x8];
    int f18;
    int f1c;
    int f20;
};
struct S_c8c1a7170 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
struct Frame {
    int f00;
    int f04;
    char unknown8[0x8];
};
extern int clamp14_8c247860(char);
extern S_c8c1a7170 *operation_8c1a7170(char);
extern int operation_8c1a7260(char, int);
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, Frame *);
void operation_8c028494(Object *o)
{
    S_vv4 *pm4;
    Frame frame;
    S_vv4 *pm12;
    int v43;
    signed char v1;
    int v39;
    S_c8c1a7170 *t2;
    S_vv2 *v2;
    int v49;
    int pm11;
    int v3;
    int t3;
    int pm5;
    int v35;
    int v51;
    S_vv4 *pm9;
    short pm8;
    int v50;
    int pm10;
    v2 = (S_vv2 *)o;
    v2 = (S_vv2 *)((char *)v2 + 1032);
    v1 = (char)o->f3a1;
    v3 = (int)0;
    while (v3 < 0x13) {
        int t1;
        t1 = clamp14_8c247860(v2->f00);
        v2->f00 = t1;
        v2 = (S_vv2 *)(1 + (char *)v2);
        v3 = (int)(v3 + 1);
    }
    v2 = (S_vv2 *)((char *)o + 0x34c);
    t2 = operation_8c1a7170(v1);
    if ((int)(int)((S_vv4 *)v2)->f00 < 0) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f00 = 1;
    }
    if ((int)((S_vv4 *)v2)->f00 > (int)t2->f00) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f00 = t2->f00;
    }
    if (!(((S_vv4 *)v2)->f02 >= 0)) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f02 = (short)1;
    }
    if (((S_vv4 *)v2)->f02 > (int)t2->f02) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f02 = (int)t2->f02;
    }
    if (!(0 <= (int)(((S_vv4 *)v2)->f04))) {
        o->f07 = o->f07 | 8;
        ((S_vv4 *)v2)->f04 = 1;
    }
    pm12 = (S_vv4 *)v2;
    if ((pm12)->f04 > t2->f04) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f04 = t2->f04;
    }
    if (!(((S_vv4 *)v2)->f06 >= 0)) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f06 = 1;
    }
    if (((S_vv4 *)v2)->f06 > (int)t2->f06) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f06 = t2->f06;
    }
    if (!(0 <= ((S_vv4 *)v2)->f08)) {
        o->f07 |= 8;
        pm4 = (S_vv4 *)v2;
        (pm4)->f08 = 1;
    }
    if (((S_vv4 *)v2)->f08 > t2->f08) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f08 = t2->f08;
    }
    if (!(((S_vv4 *)v2)->f0a >= 0)) {
        o->f07 = o->f07 | 8;
        ((S_vv4 *)v2)->f0a = 1;
    }
    if (((S_vv4 *)v2)->f0a > t2->f0a) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f0a = t2->f0a;
    }
    if (!(((S_vv4 *)v2)->f0c >= 0)) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f0c = 1;
    }
    if (((S_vv4 *)v2)->f0c > t2->f0c) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f0c = t2->f0c;
    }
    pm9 = (S_vv4 *)v2;
    if (!((pm9)->f0e >= 0)) {
        o->f07 |= 8;
        ((S_vv4 *)v2)->f0e = 1;
    }
    v35 = (int)((S_vv4 *)v2)->f18;
    if (!(0 <= v35)) {
        o->f07 = 2 | o->f07;
        ((S_vv4 *)v2)->f18 = 0;
    }
    if (0x63 < v35) {
        o->f07 |= 2;
        ((S_vv4 *)v2)->f18 = 0x63;
    }
    v39 = ((S_vv4 *)v2)->f1c;
    t3 = operation_8c1a7260(v1, 0x63);
    if (!(v39 >= 0)) {
        o->f07 |= 4;
        ((S_vv4 *)v2)->f1c = 0;
    } else {
        if (v39 > 0x98967f) {
            o->f07 |= 4;
            ((S_vv4 *)v2)->f1c = (int)(t3);
        } else {
            if (v39 > t3) {
                ((S_vv4 *)v2)->f1c = (int)(t3);
            }
        }
    }
    v43 = (int)((S_vv4 *)v2)->f20;
    if (!(0 <= v43)) {
        signed char pm6;
        pm6 = o->f07;
        o->f07 = pm6 | 0x20;
        ((S_vv4 *)v2)->f20 = 0;
    }
    if (0xf423f < v43) {
        o->f07 |= 0x20;
        ((S_vv4 *)v2)->f20 = 0xf423f;
    }
    pm5 = 0xff;
    pm8 = o->f07;
    pm10 = 0x10;
    v39 = (int)(((0 | pm5 & pm8 | 0xff00 & o->f23 << 8) | o->f3f << pm10 & 0xff0000 | o->f5b << 0x18 & -0x1000000) != 0);
    if (v39 != 0) {
        char *v48;
        int pm7;
        call_8c36d3ca((void *)(&(&frame)->f04));
        call_8c36d4c0((void *)(&(&frame)->f04), (Frame *)((&frame)));
        v48 = (char *)(&frame)->f00;
        v43 = (int)v48;
        pm11 = (int)v48;
        o->f77 = v43 & 0xff;
        o->f93 = (int)((unsigned int)(int)v48 >> 8) & 0xff;
        v3 = (int)((unsigned int)pm11 >> 0x10) & 0xff;
        pm7 = (int)v48;
        v35 = (int)((unsigned int)pm7 >> 0x18);
        o->faf = (char)(v3);
        o->fcb = v35 & 0xff;
    }
}
