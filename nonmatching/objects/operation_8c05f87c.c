/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f87c
 * function: operation_8c05f87c
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 4 of 133 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
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
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
};
extern char g_8c467a42;
extern int g_8c4687f8;
extern int g_8c4687fc;
extern int g_8c468800;
extern char g_8c46883c;
extern int g_8c468868;
extern void call_8c05fbdc(void);
extern void operation_8c0605a0(void);
extern int file_last_size_8c104d50(int);
extern int call_8c18e768(int, int);
extern int game_malloc_buffer_8c011e9c(int);
extern void operation_8c104d5c(int, int);
extern void call_8c34756c(void *);
extern int upload_8c347ebc(void *, int, int, int, int);
extern void set_value_8c348094(int);
extern int load_bank_8c348dfc(void *);
extern int close_block_8c347630(void *);
extern void game_free_8c011ec0(int);
extern void call_8c348f24(int, void *);
extern void emission_setup_6020c(void);
extern void strncpy_8c12b154(void *, int, int);
int operation_8c05f87c(int a0)
{
    Frame frame;
    int t1;
    int t6;
    int t4;
    int v1;
    int t7;
    int pm8;
    call_8c05fbdc();
    operation_8c0605a0();
    g_8c4687f8 = 0;
    g_8c4687fc = 0;
    g_8c467a42 = 0;
    g_8c468800 = 0;
    t1 = file_last_size_8c104d50(a0);
    if (t1 > 0) {
        int t2;
        t7 = call_8c18e768((int)(t1 + 0x7ff), 0x800);
        t1 = t7 << 0xb;
        v1 = (t1);
        t2 = game_malloc_buffer_8c011e9c(v1);
        if (!(0 == t2)) {
            int t5;
            operation_8c104d5c(a0, t2);
            call_8c34756c((void *)(&(&frame)->f04));
            pm8 = upload_8c347ebc((void *)((&frame)->f04), t2, v1, -1, 0);
            g_8c468868 = (int)(pm8);
            set_value_8c348094(0);
            t4 = load_bank_8c348dfc((void *)((&frame)->f04));
            g_8c468868 = (int)(t4);
            t5 = close_block_8c347630((void *)((&frame)->f04));
            g_8c468868 = (t5);
            game_free_8c011ec0(t2);
            goto L_8c05f964;
        }
        t6 = game_malloc_buffer_8c011e9c(0x800);
        call_8c34756c((void *)(&frame));
        upload_8c347ebc((void *)((&frame)->f00), t6, 0x800, -1, 0);
        set_value_8c348094(0);
        call_8c348f24(a0, (void *)((&frame)->f00));
        close_block_8c347630((void *)((&frame)->f00));
        game_free_8c011ec0(t6);
    } else {
        g_8c46883c = 0;
        return 0;
    }
L_8c05f964:
    ;
    g_8c4687f8 = 1;
    emission_setup_6020c();
    strncpy_8c12b154(((void *)&g_8c46883c), a0, 0x20);
    return 1;
}
