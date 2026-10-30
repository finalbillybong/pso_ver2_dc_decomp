/* SDK pool group 0x8c348158-0x8c3481e8 (Hitachi SHC): checks a handle and,
   unless it is in state 2, applies four settings. */
extern int check_handle_8c347458(int);
extern void get_state_8c3479cc(int, int *);
extern void set_a_8c348100(int, int);
extern void set_b_8c3481e8(int, int);
extern void set_c_8c348128(int, int, int);
extern void set_d_8c34806c(int, int);
extern void report_error_8c346118(int, int);

int configure_8c348158(int handle, int a, int b, int c, int d)
{
    int error;
    int state;
    error = check_handle_8c347458(handle);
    if (error) goto done;
    get_state_8c3479cc(handle, &state);
    if (state == 2) {
        error = 0x6000001;
        goto done;
    }
    set_a_8c348100(handle, a);
    set_b_8c3481e8(handle, b);
    set_c_8c348128(handle, c, d);
    set_d_8c34806c(handle, 0);
done:
    if (error) report_error_8c346118((int)configure_8c348158, error);
    return error;
}
