/* Selects one of two display modes and records the result (Hitachi SHC). */
extern void prepare_8c37a3ec(void);
extern void set_mode_8c37b0b8(int);
extern int start_mode_a_8c37a57a(void);
extern int start_mode_b_8c37a4a8(void);
extern int g_mode_result_8c5761d0;

void select_mode_8c38f6e8(int mode)
{
    prepare_8c37a3ec();
    if (mode == 1) {
        set_mode_8c37b0b8(0x2100002);
        g_mode_result_8c5761d0 = start_mode_a_8c37a57a();
    } else {
        set_mode_8c37b0b8(0x80002);
        g_mode_result_8c5761d0 = start_mode_b_8c37a4a8();
    }
}
