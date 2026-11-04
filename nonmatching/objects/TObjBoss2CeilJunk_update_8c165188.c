/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c165188
 * function: TObjBoss2CeilJunk_update_8c165188
 * language: c
 * reference size: 936 bytes
 * compiled size: 936 bytes (+0.0%)
 * differing lines: 42 of 354 reference instruction lines
 * differing bytes: 36
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjBoss2CeilJunk.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_vv10 S_vv10;
typedef struct S_x69232 S_x69232;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_vv10_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_vv10_3c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Block_p0_3c f3c;
    char unknown48[0x10];
    float f58;
    char unknown5c[0x4];
    int f60;
    Arg0_64 *f64;
    char unknown68[0x2c];
    float f94;
    float f98;
    float f9c;
    char unknowna0[0xc];
    int fac;
    int fb0;
    int fb4;
    float fb8;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_x69232 {
    float f00;
};
struct S_vv10 {
    char unknown0[0x3c];
    Block_vv10_3c f3c;
};
extern float g_8c2864e8;
extern int g_8c467874;
extern void operation_8c18582c(int, int);
extern int active_unflagged_8c05b258(void *);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float normalize_xz_checked(void *);
extern void operation_8c1447c4(int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c0a1ed0(int);
extern void call_8c3bdf60(void *, void *);
void TObjBoss2CeilJunk_update_8c165188(Object *o, int a1)
{
    Frame frame;
    int v1;
    float v2;
    S_vv10 *v10;
    int v3;
    int i;
    float v4;
    float v5;
    int v6;
    int v7;
    float v8;
    int k;
    float t3;
    float t4;
    float v46;
    switch (o->fac) {
    case 0:
        o->f98 += -0.3f;
        if (-10.0f > o->f98) {
            o->f98 = -10.0f;
        }
        o->f3c.f04 += o->f98;
        if (o->f3c.f04 > g_8c2864e8) {
            return;
        }
        o->fac = 1;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
        v1 = (int)a1;
        switch (o->fb0) {
        case 0:
        case 1:
        case 3:
            v1 = (int)0x170;
            break;
        case 2:
        case 4:
        case 5:
            (&frame)->f0c.f04 += 5.0f;
            v1 = (int)0x171;
        }
        operation_8c18582c((int)(&(&frame)->f0c), v1);
        return;
    case 1:
        o->f3c.f04 -= 3.0f;
        if (!(-50.0f > o->f3c.f04)) {
            return;
        }
        o->f04 |= 1;
        return;
    case 2:
        o->f98 += -0.3f;
        if (-10.0f > o->f98) {
            o->f98 = -10.0f;
        }
        o->f3c.f04 += o->f98;
        v2 = (float)o->f3c.f04;
        if (!(30.0f > (v2 - o->f58))) {
            return;
        }
        v3 = (int)0;
        v4 = (float)(v2 - o->f98);
        k = o->fb0 << 2;
        v5 = (float)(v2 - *(float *)((char *)0x8c2864b8 + k));
        v6 = (int)g_8c467874;
        v7 = (int)0xc10;
        v8 = (float)(*(float *)((char *)0x8c2864d0 + k) + 10.0f);
        for (i = 0; i < v6; i++) {
            v10 = (S_vv10 *)*(S_g8c467240 **)((char *)0x8c467240 + (i << 2));
            if (active_unflagged_8c05b258((void *)v10) != 0) {
                if (v4 > (((S_x69232 *)((int)v10 + v7))->f00 + v10->f3c.f04) && (((S_x69232 *)((int)v10 + v7))->f00 + v10->f3c.f04) > v5) {
                    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v10->f3c;
                    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&o->f3c));
                    if (v8 > normalize_xz_checked((void *)(&frame))) {
                        v3 = (int)1;
                        operation_8c1447c4((int)v10);
                    }
                }
            }
        }
        v46 = (float)o->f58;
        if (!(o->f3c.f04 > v46)) {
            o->f3c.f04 = v46;
            v3 = (int)1;
            operation_8c18582c((int)(&o->f3c), 0x160);
        }
        if (v3 == 0) {
            return;
        }
        o->f98 *= -0.5f;
        t3 = njSin_8c37eb0c((void *)(o->f64));
        o->f94 = t3 * 2.0f;
        t4 = njCos_8c38c154((void *)(o->f64));
        o->f9c = t4 * 2.0f;
        o->fac = 3;
        play_se_8c05fbf8(0x30001, (void *)(&o->f3c), 0, 0);
        operation_8c0a1ed0(0);
        return;
    case 3:
        o->f98 += -0.3f;
        if (-10.0f > o->f98) {
            o->f98 = -10.0f;
        }
        o->f60 += 0x1323;
        call_8c3bdf60((void *)(&o->f3c), (void *)(&o->f94));
        o->fb4 += 1;
        if (o->fb4 >= 0xa) {
            o->fb8 -= 0.04f;
            if (!(o->fb8 > 0.0f)) {
                o->fb8 = 0.0f;
                o->f04 |= 1;
            }
        }
        return;
    }
}
