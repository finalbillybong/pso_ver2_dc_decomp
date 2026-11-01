/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c160bb8
 * function: operation_8c160bb8
 * language: c++
 * reference size: 612 bytes
 * compiled size: 612 bytes (+0.0%)
 * differing lines: 12 of 265 reference instruction lines
 * differing bytes: 26
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
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct S_x14352 S_x14352;
typedef struct S_x30256 S_x30256;
typedef struct S_x69216 S_x69216;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    int f394;
    char unknown398[0x24];
    Arg0_3bc *f3bc;
    Vector3 f3c0;
    char unknown3cc[0x4];
    int f3d0;
    char unknown3d4[0xc];
    int f3e0;
    char unknown3e4[0xc];
    int f3f0;
    char unknown3f4[0x30];
    int f424;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
struct S_x14352 {
    Vector3 f00;
};
struct S_x30256 {
    Vector3 f00;
};
struct S_x69216 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" int angle_step(int, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c160bb8(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    int v3;
    int v6;
    int v7;
    int v8;
    int v9;
    int v12;
    int v14;
    int v13;
    int v16;
    int v17;
    int v20;
    int v21;
    int v25;
    int v24;
    int v27;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    v1 = (int)o->f3bc->f394;
    v2 = (int)(v1 == 0xe);
    if (v2 != 0) {
        v4 = (int)o->f390;
        v3 = (int)o->f394;
        if (v4 != v3) {
            o->f390 = (int)v3;
        }
        o->f394 = 0xf;
        v6 = (int)o->f394;
        if (!(v6 >= 0) || v6 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x14352 *)(v6 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f24));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f24)))();
        return;
    }
    v12 = (int)0;
    if (o->f3e0 == 0) {
        v8 = (int)1;
        v9 = (int)0;
        if (v1 != 7) {
            v7 = (int)1;
            if (v1 != 8) {
                v7 = (int)0;
            }
            v8 = (int)v7;
        }
        if (v8 != 0) {
            v9 = (int)1;
        }
        v12 = (int)v9;
    }
    if (v12 != 0) {
        v14 = (int)o->f390;
        v13 = (int)o->f394;
        if (v14 != v13) {
            o->f390 = (int)v13;
        }
        o->f394 = 0x10;
        v16 = (int)o->f394;
        if (!(v16 >= 0) || v16 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x30256 *)(v16 * 0x18 + g_8c316c90))->f00;
        t2 = call_8c18e6fc((void *)(&(&frame)->f18));
        if (t2 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
        return;
    }
    if (!(--*(int *)((char *)o + 0x3d0) >= 0)) {
        v17 = (int)(o->f3bc->f394 == 0xd);
        if (v17 == 0) {
            goto L_8c160cee;
        }
    }
    v20 = (int)o->f3bc->f394;
    v21 = 1;
    if (v20 != 7 && v20 != 8) {
        v21 = 0;
    }
    if (v21 != 0) {
        v12 = (int)v21;
L_8c160cee:;
        v25 = (int)o->f390;
        v24 = (int)o->f394;
        if (v25 != v24) {
            o->f390 = (int)v24;
        }
        o->f394 = 2;
        v27 = (int)o->f394;
        if (!(v27 >= 0)) {
            return;
        }
        if (v27 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x69216 *)(v27 * 0x18 + g_8c316c90))->f00;
        t3 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t3 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    t4 = njSin_8c37eb0c((int)(o->f3d0 << 0xc));
    t5 = angle_step((int)(o->f64), (int)((int)((float)o->f3f0 + t4 * 6144.0f)), 0x1111);
    o->f64 = (int)t5;
    if (((o->f3d0 & 0x3f)) == 0) {
        play_se_8c05fbf8(0x3002d, (void *)(((char *)o + 0x3c)), 0, 0);
    }
    if (((o->f424 & 7)) == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c0;
        (&frame)->f00.f04 += 5.0f;
        create_effect_777c((void *)(&frame), 0xf3);
    }
}
