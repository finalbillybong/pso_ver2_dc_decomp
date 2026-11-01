/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01c380
 * function: operation_8c01c380
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 6 of 61 reference instruction lines
 * differing bytes: 8
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
extern int g_8c41cb18;
extern int g_8c41cb38;
extern void wait_vsync_and_flip_8c380516(void);
extern void call_8c38106a(void);
extern void voice_update_8c37d58c(void);
extern void video_flush_8c38c5a2(void);
extern void call_8c37fcb4(int, int, int);
extern void call_8c37e4a8(float, float);
extern void call_8c3801d6(int, int, int, int, int);
extern void video_init_8c38c4fc(int, int, int);
void operation_8c01c380(void)
{
    int pm2;
    int pm3;
    unsigned short pm1;
    int pm4;
    int pm5;
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    call_8c38106a();
    voice_update_8c37d58c();
    video_flush_8c38c5a2();
    pm3 = 2;
    call_8c37fcb4(0x38, 0, pm3);
    g_8c41cb18 = 0x38;
    call_8c37e4a8(1.0f, 0.85f);
    pm2 = (unsigned short)0x7000;
    pm3 = (int)pm2;
    pm5 = (int)pm3;
    pm2 = pm5;
    pm4 = pm2;
    call_8c3801d6(-4, 0, 0x2c000, 0, pm4);
    video_init_8c38c4fc(0, 0, 0);
    pm1 = 0;
    g_8c41cb38 = pm1;
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
    wait_vsync_and_flip_8c380516();
}
