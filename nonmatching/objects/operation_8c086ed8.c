/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c086ed8
 * function: operation_8c086ed8
 * language: c
 * reference size: 532 bytes
 * compiled size: 532 bytes (+0.0%)
 * differing lines: 8 of 223 reference instruction lines
 * differing bytes: 16
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    int f0c;
    float f10;
    char unknown14[0x4];
    float f18;
    float f1c;
    float f20;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern unsigned char g_8c41ccec;
extern int g_8c469d00;
extern float g_8c469d04;
extern volatile float g_8c469d08;
extern int g_8c469d0c;
extern int g_8c469d10;
extern float g_8c469d14;
extern int operation_8c01e148(int);
extern int find_selected_8c01e110(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void call_8c3bdf60(void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0a237c(void *, void *);
void operation_8c086ed8(Object *o)
{
    Frame frame;
    float v4;
    float v5;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    if (g_8c469d00 == 0 || g_8c469d00 != 1) {
        return;
    }
    t1 = operation_8c01e148(0x28);
    if (t1 != 0) {
        g_8c469d04 = 50.0f;
        g_8c469d0c = 0;
        g_8c469d10 = 0;
        g_8c469d08 = 0.0f;
        g_8c469d14 = 15.0f;
    }
    t2 = find_selected_8c01e110(0x50);
    if (t2 != 0) {
        g_8c469d0c -= 0xc0;
    } else {
        t3 = find_selected_8c01e110(0x4f);
        if (t3 != 0) {
            g_8c469d0c += 0xc0;
        } else {
            t4 = find_selected_8c01e110(0x52);
            if (t4 != 0) {
                g_8c469d08 += 0.5f;
            } else {
                t5 = find_selected_8c01e110(0x51);
                if (t5 != 0) {
                    g_8c469d08 -= 0.5f;
                } else {
                    t6 = find_selected_8c01e110(0x4b);
                    if (t6 != 0) {
                        v4 = (float)(g_8c469d04 - 0.5f);
                        g_8c469d04 = v4;
                        if (v4 > 10.0f) {
                            v5 = (float)v4;
                        } else {
                            v5 = (float)10.0f;
                        }
                        g_8c469d04 = v5;
                    } else {
                        t7 = find_selected_8c01e110(0x4e);
                        if (t7 != 0) {
                            g_8c469d04 += 0.5f;
                        } else {
                            t8 = find_selected_8c01e110(0x49);
                            if (t8 != 0) {
                                g_8c469d14 += 0.5f;
                            } else {
                                t9 = find_selected_8c01e110(0x4c);
                                if (t9 != 0) {
                                    g_8c469d14 -= 0.5f;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    (&frame)->f1c = 0.0f;
    (&frame)->f18 = 0.0f;
    (&frame)->f20 = g_8c469d04;
    njRotateY_8c37df90(0, (int)(o->f20->f64 + g_8c469d0c));
    call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
    call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(&o->f20->f3c));
    (&frame)->f10 += g_8c469d08;
    njPopMatrixEx_8c38ad10();
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20->f3c;
    (&frame)->f00.f04 += g_8c469d14;
    operation_8c0a237c((void *)(&(&frame)->f0c), (void *)(&frame));
    if (((g_8c41ccec & 4)) != 0) {
        t10 = operation_8c01e148(0x1f);
        if (t10 != 0) {
            o->f04 |= 1;
        }
    }
}
