/* SDK pool group 0x8c348404 (Hitachi SHC): enables a feature tagged 'MIDI' on
   the current object; reports error 0x0d000001 when there is none. */
extern void *g_current_8c3fac48;
extern int enable_feature_8c3489f8(int, int);
extern void report_error_8c346118(int (*)(int), int);

int enable_midi_8c348404(int enable)
{
    int error = 0;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (enable) error = enable_feature_8c3489f8(enable, 0x4944494d);
    if (error) report_error_8c346118(enable_midi_8c348404, error);
    return error;
}
