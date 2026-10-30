/* SDK pool group 0x8c34838c (Hitachi SHC): runs three setup steps on an
   argument, stopping at the first error; error 0x0d000001 when there is no
   current object, 0x07000103 for a null argument. */
extern void *g_current_8c3fac48;
extern int step_one_8c3488f8(void *);
extern int step_two_8c34853c(void *);
extern int step_three_8c3489bc(void *);
extern void report_error_8c346118(int (*)(void *), int);

int run_steps_8c34838c(void *argument)
{
    int error = 0;
    /* The labels reproduce SHC's per-block scratch-register rotation (likely
       from error-check macros in the original source). */
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (argument == 0) error = 0x7000103;
    else {
        goto start;
start:
        error = step_one_8c3488f8(argument);
        if (error == 0) {
            goto second;
second:
            error = step_two_8c34853c(argument);
            if (error == 0) {
                goto third;
third:
                error = step_three_8c3489bc(argument);
            }
        }
    }
done:
    if (error) report_error_8c346118(run_steps_8c34838c, error);
    return error;
}
