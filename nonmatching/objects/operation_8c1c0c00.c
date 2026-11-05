/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c0c00
 * function: operation_8c1c0c00
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 4 of 158 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1beb7c S_c8c1beb7c;
typedef struct Frame Frame;
typedef struct S_g8c4e2ca8 S_g8c4e2ca8;
typedef struct S_g8c4e2ca8_0 S_g8c4e2ca8_0;
typedef struct S_g8c4e2ca8_0_8 S_g8c4e2ca8_0_8;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_x13712 S_x13712;
typedef struct S_x68208 S_x68208;
struct S_c8c1beb7c {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x68208 {
    float f00;
};
struct S_x13712 {
    float f00;
};
extern S_g8c4e2ca8 *g_8c4e2ca8;
extern int g_8c4e2cac;
extern char g_8c4e2c80[];
extern char g_8c4e2c94[];
extern S_c8c1beb7c *operation_8c1beb7c(int);
extern void set_stream_mode_8c3ab8f8(S_c8c1beb7c *, float);
extern void call_8c3ac038(void *, int);
extern void vector_sub_in_place_8c37f6f0(void *, Frame *);
extern float normalize_vector_checked(void *);
extern int operation_8c1d9ebc(int);
extern int operation_8c1d9ec8(int);
extern int game_malloc_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c1c0c00(void)
{
    Frame frame;
    S_c8c1beb7c *t1;
    int t4;
    int v2;
    float v4;
    float v8;
    float v7;
    float v10;
    float v9;
    int v11;
    int v13;
    int v1;
    int v12;
    int t2;
    int t3;
    int v3;
    float t5;
    v1 = (int)-1;
    v2 = (int)0;
    while (5 > v2) {
        v3 = (int)(v2 << 2);
        t1 = operation_8c1beb7c((int)(*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)((void *)0x8c289000)))));
        v7 = (float)(float)(t1->f04 + v1);
        if (0.0f > (float)(t1->f04 + v1)) {
            v4 = (float)((float)(t1->f04 + v1) + 4294967296.0f);
            v7 = (float)v4;
        }
        v8 = 0.0f;
        v9 = v8;
        set_stream_mode_8c3ab8f8(t1, v8);
        call_8c3ac038((void *)(&(&frame)->f0c), 0);
        v8 += 0.5f;
        while (v7 > v8) {
            set_stream_mode_8c3ab8f8(t1, v8);
            call_8c3ac038((void *)(&frame), 0);
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
            t5 = normalize_vector_checked((void *)(&(&frame)->f0c));
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f00;
            v9 = (float)(v9 + t5);
            v8 += 0.5f;
        }
        ((S_x68208 *)(v3 + g_8c4e2c80))->f00 = v9;
        ((S_x13712 *)(v3 + g_8c4e2c94))->f00 = v7 / v9;
        v2 = (int)(v2 + 1);
    }
    g_8c4e2cac = (int)(g_8c4e2ca8 = (S_g8c4e2ca8 *)0);
    v11 = (int)0;
    while (5 > v11) {
        *(int *)((char *)0x8c4e2cb0 + (v11 << 2)) = 0;
        v11 = (int)(v11 + 1);
    }
    t2 = operation_8c1d9ebc(2);
    g_8c4e2ca8 = (S_g8c4e2ca8 *)(int)(t2);
    if (t2 != 0) {
        t3 = operation_8c1d9ec8(2);
        g_8c4e2cac = (int)(t3);
        v12 = (int)0x42c;
        v13 = (int)0;
        while (5 > v13) {
            t4 = game_malloc_8c011ecc(0x14);
            if (t4 != 0) {
                call_8c0cd588(t4, (void *)(*(S_g8c4e2ca8_0_8 **)((char *)((char *)*(S_g8c4e2ca8_0 **)((char *)((char *)g_8c4e2ca8 + 0x0) + (v12)) + 0x8) + (*(int *)((char *)0x8c28903c + (v13 << 2)) << 4))), 1);
            }
            *(int *)((char *)0x8c4e2cb0 + (v13 << 2)) = (int)(t4);
            v13 = (int)(v13 + 1);
        }
        v1 = (int)v12;
        v2 = (int)v13;
    }
}
