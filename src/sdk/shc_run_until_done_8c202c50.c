/* Library pool group 0x8c202c50-0x8c202ce0 (Hitachi SHC): runs the update
   steps until the state reaches 5; aborts with -1 when polling fails, a retry
   flag is set or the request is in state 4. */
typedef struct Task {
    unsigned char state;
    char unknown1[7];
    short retry;
    short unknown_a;
    unsigned char *request;
} Task;

extern int poll_8c1feece(void);
extern void abort_task_8c20133c(Task *task);
extern void step_8c1fbec6(void);
extern void step_8c1fbece(void);
extern void step_8c2041cc(void);
extern void step_8c1fbeb6(void);

int run_until_done_8c202c50(Task *task)
{
    unsigned char *request = task->request;
    task->retry = 0;
    while (task->state != 5) {
        if (poll_8c1feece() || task->retry || *request == 4) {
            abort_task_8c20133c(task);
            task->retry = 0;
            return -1;
        }
        step_8c1fbec6();
        step_8c1fbece();
        step_8c2041cc();
        step_8c1fbeb6();
    }
    task->retry = 0;
    /* No return statement here: the reference returns whatever r0 holds (0 from the store). */
}
