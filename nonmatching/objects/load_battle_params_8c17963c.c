/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17963c
 * function: load_battle_params_8c17963c
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 24 of 80 reference instruction lines
 * differing bytes: 65
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db940;
extern int g_8c4db954;
extern int get_game_mode_wrapper_3_8c05bae8(void);
extern int operator_new_8c18de4c(int);
extern void file_load_8c104d00(int, int);
extern void call_8c3889a4(char *, int, int);
extern void operator_delete_8c18de08(int);
void load_battle_params_8c17963c(void)
{
    int v5;
    int t2;
    char *v4;
    int v2;
    int v3;
    v2 = 0x8c286728;
    if (get_game_mode_wrapper_3_8c05bae8() != 0) {
        v2 = 0x8c28673d;
    }
    t2 = operator_new_8c18de4c(0xf600);
    if (t2 != 0) {
        file_load_8c104d00(v2, t2);
        v3 = g_8c4db954;
        v4 = (char *)g_8c4db940;
        call_8c3889a4(v4, t2 + v3 * 0xd80, 0xd80);
        v5 = v3 * 0x1200;
        call_8c3889a4(v4 + 0xd80, t2 + 0x3600 + v5, 0x1200);
        call_8c3889a4(v4 + 0x1f80, v3 * 0xc00 + (t2 + 0x7e00), 0xc00);
        call_8c3889a4(v4 + 0x2b80, t2 + 0xae00 + v5, 0x1200);
        operator_delete_8c18de08(t2);
    }
}
