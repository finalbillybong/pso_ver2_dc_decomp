extern int table_8c3fc340[];
extern int table_8c3fc348[];
extern void set_mode_8c37b0b8(int);
extern int start_mode_a_8c37a57a(void);
extern int start_mode_b_8c37a4a8(void);
extern int func_8c37a6b0(void);
extern int func_8c37a604(void);
extern int mode_8c5765dc;
extern float scale_8c5765d8;

void select_mode_a_8c3903c0(float x, int i)
{
    set_mode_8c37b0b8(table_8c3fc340[i]);
    if (i) {
        mode_8c5765dc = start_mode_a_8c37a57a();
    } else {
        mode_8c5765dc = start_mode_b_8c37a4a8();
    }
    scale_8c5765d8 = (-1.0f > x) ? -1.0f / x : 1.0f;
}

void select_mode_b_8c39040c(float x, int i)
{
    set_mode_8c37b0b8(table_8c3fc348[i]);
    if (i) {
        mode_8c5765dc = func_8c37a6b0();
    } else {
        mode_8c5765dc = func_8c37a604();
    }
    scale_8c5765d8 = (-1.0f > x) ? -1.0f / x : 1.0f;
}
