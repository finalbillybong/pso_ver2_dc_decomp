/* SDK pool group 0x8c36d98c-0x8c36d9c8 (Hitachi SHC): polls the status until
   it reports 1, counting successful polls. */
typedef struct State {
    char unknown0[0x110];
    int ready_count;
} State;

extern int read_status_8c36d978(int *status);
extern State *g_state_8c3fbdf0;

int wait_ready_8c36d98c(void)
{
    int status;
    do {
        read_status_8c36d978(&status);
        if (status == 1) g_state_8c3fbdf0->ready_count++;
    } while (status != 1);
    return 0;
}
