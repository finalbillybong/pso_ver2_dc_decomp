/* SDK pool group 0x8c347fb4 (Hitachi SHC): validates an object, rejects it in
   state 2 (error 0x06000001) and otherwise applies four settings. */
extern int check_object_8c347458(void *);
extern void get_state_8c3479cc(void *, int *);
extern void set_first_8c347f5c(void *, int);
extern void set_second_8c348044(void *, int);
extern void set_third_8c347f84(void *, int, int);
extern int check_and_set_8c34806c(void *, int);
extern void report_error_8c346118(int (*)(void *, int, int, int, int), int);

int configure_8c347fb4(void *object, int first, int second, int third, int fourth)
{
    int state;
    int error = check_object_8c347458(object);
    if (error) goto done;
    get_state_8c3479cc(object, &state);
    if (state == 2) {
        error = 0x6000001;
        goto done;
    }
    set_first_8c347f5c(object, first);
    set_second_8c348044(object, second);
    set_third_8c347f84(object, third, fourth);
    check_and_set_8c34806c(object, 0);
done:
    if (error) report_error_8c346118(configure_8c347fb4, error);
    return error;
}
