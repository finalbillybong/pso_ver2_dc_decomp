/* SDK pool group 0x8c3453c8 (Hitachi SHC): sends command 0x1e, then tries to
   start each of 64 voices in state 1 until one succeeds. */
typedef struct Voice {
    char unknown0[0x6c];
    int state;
} Voice;

typedef struct Bank {
    char unknown0[0x460];
    Voice voices[64];
} Bank;

typedef struct Context {
    Bank *bank;
} Context;

extern Context *g_current_8c3fac48;
extern int g_command_8c5217f8;
extern unsigned char g_command_byte_8c5217fc[];
extern int send_command_8c3472e4(int *);
extern int start_voice_8c3454dc(Voice *);
extern void report_error_8c346118(int (*)(void), int);

int start_voices_8c3453c8(void)
{
    int error;
    int i;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else {
        g_command_8c5217f8 = 0x1e;
        g_command_byte_8c5217fc[0] = 0xff;
        error = send_command_8c3472e4(&g_command_8c5217f8);
        if (error == 0) {
            for (i = 0; i < 64; i++) {
                if (g_current_8c3fac48->bank->voices[i].state == 1) {
                    error = start_voice_8c3454dc(&g_current_8c3fac48->bank->voices[i]);
                    if (error == 0) goto done;
                }
            }
        }
    }
    if (error) report_error_8c346118(start_voices_8c3453c8, error);
done:
    return error;
}
