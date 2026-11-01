/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bedb8
 * function: TObjEneSaver_v40_8c0bedb8
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 24 of 145 reference instruction lines
 * differing bytes: 28
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_64 S_vv6_64;
typedef struct S_x66624 S_x66624;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0x10];
    short f3a4;
    char unknown3a6[0x2];
    S_vv6 *f3a8;
};
struct S_vv6 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    S_vv6_64 *f64;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x66624 {
    Vector3 f00;
};
extern int g_8c467874;
int TObjEneSaver_v40_8c0bedb8(Object *o)
{
    Frame frame;
    int v7;
    S_vv6 *v6;
    int v4;
    int v1;
    int v3;
    int v2;
    float t1;
    float t2;
    int t3;
    float t4;
    int t5;
    if (((o->f390 & 0x20)) != 0) {
        return 1;
    }
    if (((o->f390 & 4)) != 0 && o->f3a4 > 0) {
        v1 = (int)0x2aaa;
        v2 = (int)0x310;
        v4 = (int)0;
        v3 = (int)0x324;
        while (g_8c467874 > v4) {
            v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
            if (v6 != 0 && ((v6->f34 & 0x800)) == 0) {
                t1 = ((float ( *) ( Object *, int , Frame *))0x8c043e3c)(o, v4, (&frame));
                if (900.0f > t1) {
                    t2 = ((float ( *) ( float , float ))0x8c130334)((&frame)->f00.f00, (&frame)->f00.f08);
                    t3 = ((int ( *) ( void *, int ))0x8c0c52f4)(o->f64, (int)(t2 * 65536.0f / 6.28318405f));
                    if (v1 > t3) {
                        v7 = (int)(((*(int *)((char *)((char *)v6 + 0x0) + (v2)) & 0xe0)) != 0);
                        if (v7 != 0) {
                            float pm6;
                            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x66624 *)((int)o + v3))->f00;
                            ((void ( *) ( Frame *, int ))0x8c37f6f0)((&frame), (int)v6 + v3);
                            t4 = ((float ( *) ( float , float ))0x8c130334)((&frame)->f00.f00, (&frame)->f00.f08);
                            pm6 = 6.28318405f;
                            t5 = ((int ( *) ( void *, int ))0x8c0c52f4)(v6->f64, (int)(t4 * 65536.0f / pm6));
                            if (v1 > t5) {
                                o->f3a8 = v6;
                                o->f390 |= 0x20;
                                return 1;
                            }
                        }
                    }
                }
            }
            v4 = (int)(v4 + 1);
        }
    }
    return 0;
}
