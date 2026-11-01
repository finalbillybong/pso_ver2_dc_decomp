/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f670
 * function: sound_init_8c05f670
 * language: c
 * reference size: 440 bytes
 * compiled size: 448 bytes (+1.8%)
 * differing lines: 72 of 146 reference instruction lines
 * differing bytes: 346
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
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c41cb60 S_g8c41cb60;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
};
extern S_g8c41cb60 *g_8c41cb60;
extern char g_8c467a40;
extern char g_8c467a41;
extern char g_8c467a42;
extern int g_8c467a48;
extern int g_8c467a5c;
extern int g_8c467a70;
extern int g_8c4687f8;
extern int g_8c468800;
extern int g_8c468804;
extern int g_8c468808;
extern int g_8c46880c;
extern int g_8c468810;
extern short g_8c468814;
extern char g_8c468816;
extern char g_8c468817;
extern char g_8c46881c;
extern char g_8c46881d;
extern char g_8c46883c;
extern int call_8c36a7b2(void *);
extern void file_get_size_8c369f22(int, Frame *);
extern int call_8c369ffa(int, void *, void *);
extern void call_8c369ed0(int);
extern void sdSysInit_8c3473ac(int, int, int);
extern void call_8c34756c(void *);
extern void upload_8c347ebc(void *, void *, int, int, int);
extern void load_program_8c34678c(void *);
extern void close_block_8c347630(void *);
extern void set_split_8c346214(int, int, int);
extern void enable_midi_8c348404(void *);
extern int open_shot_8c345264(void *);
extern void bgm_init_adxt_8c100164(void);
extern void operation_8c0605a0(void);
int sound_init_8c05f670(void)
{
    Frame frame;
    int v4;
    int t1;
    int v2;
    int t2;
    g_8c46880c = 0;
    g_8c468814 = 0;
    g_8c468810 = 0;
    g_8c468808 = 0;
    g_8c468804 = 0;
    g_8c46881c = 0;
    g_8c468816 = 0;
    g_8c468817 = 0;
    g_8c46881d = 0;
    g_8c467a40 = 0;
    t1 = call_8c36a7b2((void *)((void *)0x8c2fc7c8));
    if (t1 != 0) {
        file_get_size_8c369f22(t1, (Frame *)((&frame)));
        v2 = call_8c369ffa(t1, (void *)((&frame)->f00), g_8c41cb60);
        call_8c369ed0(t1);
    } else {
        return 0;
    }
    sdSysInit_8c3473ac(0, 0, 0);
    call_8c34756c((void *)(&(&frame)->f04));
    upload_8c347ebc((void *)((&frame)->f04), g_8c41cb60, v2, -1, 0);
    load_program_8c34678c((void *)((&frame)->f04));
    close_block_8c347630((void *)((&frame)->f04));
    set_split_8c346214(1, 0x36, 8);
    enable_midi_8c348404((void *)((void *)0x8c467a20));
    v4 = (int)0;
    while (0x36 > v4) {
        t2 = open_shot_8c345264((void *)(&*(int *)((char *)0x8c467a78 + (v4 << 2))));
        if (t2 == 0) {
            *(int *)((char *)0x8c468138 + (v4 << 5)) = 1;
        } else {
            *(int *)((char *)0x8c468138 + (v4 << 5)) = 0;
        }
        v4 = (int)(v4 + 1);
    }
    bgm_init_adxt_8c100164();
    g_8c467a42 = 0;
    g_8c468800 = 0;
    g_8c46883c = 0;
    g_8c467a5c = g_8c467a70 = g_8c467a48 = 0;
    g_8c4687f8 = 1;
    g_8c467a41 = 0;
    operation_8c0605a0();
    return 1;
}
