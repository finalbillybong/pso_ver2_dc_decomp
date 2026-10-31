/* SDK pool group 0x8c3479cc (Hitachi SHC): with interrupts masked, validates a
   handle and returns its state word; reports errors. */
typedef struct Object {
    int unknown0;
    int state;
} Object;

extern int check_handle_8c347458(int);
extern void set_values_8c346118(int, int);
int get_state_8c3479cc(int handle, int *state)
{
    int error;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (error) goto done;
    if (state == 0) {
        error = 0x7000203;
        goto done;
    }
    *state = ((Object *)handle)->state;
done:
    _builtin_set_imask(old);
    if (error) set_values_8c346118((int)get_state_8c3479cc, error);
    return error;
}
