/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c160974
 * function: operation_8c160974
 * language: c++
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 22 of 176 reference instruction lines
 * differing bytes: 39
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct S_x51664 S_x51664;
typedef struct S_x88080 S_x88080;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x294];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x30];
    int f3d0;
    Arg0_3d4 *f3d4;
};
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x88080 {
    Vector3 f00;
};
struct S_x51664 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c15eca4(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c160974(Object *o)
{
    Frame frame;
    int v3;
    int v2;
    int v5;
    int v14;
    int v13;
    int v16;
    S_c8c053d84 *t1;
    int t2;
    float t3;
    int t4;
    int t5;
    t1 = lookup_object_by_id((unsigned short)(o->f3d4));
    if (t1 != 0 && ((t1->f34 & 0x2000800)) == 0) {
        goto L_8c1609f4;
    }
    v3 = (int)o->f390;
    v2 = (int)o->f394;
    if (v3 != v2) {
        o->f390 = (int)v2;
    }
    o->f394 = 2;
    v5 = (int)o->f394;
    if (!(v5 >= 0) || v5 >= 0x11) {
        return;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x88080 *)(v5 * 0x18 + g_8c316c90))->f00;
    t2 = call_8c18e6fc((void *)(&(&frame)->f0c));
    if (t2 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
L_8c1609f4:;
        if (--o->f3d0 == 0) {
            operation_8c15eca4((void *)o, (int)(o->f3d4));
            play_se_8c05fbf8(0x3002f, (void *)(&o->f3c), 0, 0);
        }
        if (5.0f > o->ff8) {
            t3 = errno_wrap_8c130334(t1->f3c - o->f3c, t1->f44 - o->f44);
            t5 = *(int *)((char *)0x8c286448 + (o->f39c << 2));
            t4 = angle_step((int)(o->f64), t5 + (int)(t3 * 65536.0f / 6.28318405f), 0x200);
            o->f64 = (int)t4;
        }
        if (((o->fe8 & 0x10)) != 0) {
            v14 = (int)o->f390;
            v13 = (int)o->f394;
            if (v14 != v13) {
                o->f390 = (int)v13;
            }
            o->f394 = 0xa;
            v16 = (int)o->f394;
            if (v16 >= 0 && !(v16 >= 0x11)) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x51664 *)(v16 * 0x18 + g_8c316c90))->f00;
                t5 = call_8c18e6fc((void *)(&frame));
                if (t5 != 0) {
                    (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
                }
            }
        }
    }
}
