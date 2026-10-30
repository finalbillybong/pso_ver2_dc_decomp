/* SDK pool group 0x8c346614 (Hitachi SHC): reads a word from the current
   object's device area; -1 and an error code (0x07000203 for a null output,
   0x0d000001 when not ready) otherwise. */
typedef struct Object {
    char unknown0[0x8c];
    int base;
} Object;

extern Object *g_current_8c3fac48;
extern int g_state_8c3fac4c;
extern void read_word_8c345e00(int, int *);
extern void report_error_8c346118(int (*)(int *), int);

int read_value_8c346614(int *out)
{
    Object *object;
    int error = 0;
    if (out == 0) error = 0x7000203;
    else {
        *out = -1;
        goto check;
check:
        object = g_current_8c3fac48;
        if (object == 0 || g_state_8c3fac4c != 1) {
            error = 0xd000001;
            *out = -1;
            goto done;
        }
        read_word_8c345e00(object->base + 0x18, out);
    }
done:
    if (error) report_error_8c346118(read_value_8c346614, error);
    return error;
}
