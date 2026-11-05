/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05fbf8
 * function: play_se_8c05fbf8
 * language: c
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 6 of 162 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2;
 *   offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B: RAM, trace and sampled
 *   call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int g_8c2fc704;
extern int g_8c4687f8;
extern char gc_8c468138[];
extern int choose_emit_slot(void);
extern int prepare_emit_slot(int, int);
extern void name_request_8c345478(void *);
extern void set_window_8c345864(void *, int, int);
extern void call_8c3456fc(void *, char, int);
extern int call_8c3452e0(void *, int, int, int);
int play_se_8c05fbf8(int a0, int a1, int a2, int a3)
{
    int slot;
    int i;
    int off;
    int h;
    int m;
    g_8c2fc704 = -1;
    if (g_8c4687f8 == 0) {
        return -1;
    }
    if (a0 == 0xf0000) {
        return -1;
    }
    slot = choose_emit_slot();
    if (slot < 0) {
        return -1;
    }
    m = 0x400;
    for (i = 0; i < 0x36; i++) {
        if ((*(unsigned int *)((i << 5) + gc_8c468138) & m) != 0 && *(int *)((char *)(gc_8c468138 + 4) + (i << 5)) == a0 && !(0x94 > *(int *)((char *)(gc_8c468138 + 0xc) + (i << 5)))) {
            return -1;
        }
    }
    off = slot << 5;
    *(unsigned int *)(gc_8c468138 + off) &= 1;
    if ((a3 & 1) != 0) {
        *(unsigned int *)(gc_8c468138 + off) |= 0x2000;
    }
    *(int *)((char *)(gc_8c468138 + 0x8) + off) = a1;
    *(int *)((char *)(gc_8c468138 + 0xc) + off) = 0x96;
    *(int *)((char *)(gc_8c468138 + 0x14) + off) = a2;
    *(int *)((char *)(gc_8c468138 + 0x4) + off) = a0;
    *(int *)((char *)(gc_8c468138 + 0x10) + off) = 0;
    if (prepare_emit_slot(slot, 0) == 1) {
        h = slot << 2;
        name_request_8c345478(*(void **)((char *)0x8c467a78 + h));
        set_window_8c345864(*(void **)((char *)0x8c467a78 + h), *(int *)((char *)(gc_8c468138 + 0x18) + off), 0);
        call_8c3456fc(*(void **)((char *)0x8c467a78 + h), *(char *)((char *)(gc_8c468138 + 0x1c) + off), 0);
        if (call_8c3452e0(*(void **)((char *)0x8c467a78 + h), (short)(a0 >> 16), (unsigned short)a0, 0) == 0) {
            *(unsigned int *)(gc_8c468138 + off) |= 0x600;
            g_8c2fc704 = slot;
            return slot;
        }
    }
    return -1;
}
