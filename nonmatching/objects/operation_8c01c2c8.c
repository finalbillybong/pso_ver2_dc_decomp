/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01c2c8
 * function: operation_8c01c2c8
 * language: c
 * reference size: 184 bytes
 * compiled size: 180 bytes (-2.2%)
 * differing lines: 8 of 61 reference instruction lines
 * differing bytes: 97
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
extern void wait_vsync_and_flip_8c380516(void);
extern void call_8c38106a(void);
extern void voice_update_8c37d58c(void);
extern void video_flush_8c38c5a2(void);
extern void call_8c37fcb4(int, int, int);
extern void call_8c37e4a8(float, float);
extern void call_8c3801d6(int, int, int, int, int);
extern void video_init_8c38c4fc(int, int, int);
extern int g_8c41cb18;
extern int g_8c41cb38;
void operation_8c01c2c8(void)
{
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    call_8c38106a();
    voice_update_8c37d58c();
    video_flush_8c38c5a2();
    call_8c37fcb4(0x2007a, 0, 2);
    g_8c41cb18 = 0x2007a;
    call_8c37e4a8(1.0f, 0.9061f);
    call_8c3801d6(-4, 0, 0x2c000, 0, 0x7000);
    video_init_8c38c4fc(0, 0, 0);
    g_8c41cb38 = 1;
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
}
