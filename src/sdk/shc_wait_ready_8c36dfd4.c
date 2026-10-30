/* SDK pool group 0x8c36dfd4 (Hitachi SHC): polls a status until ready and
   counts the wait in the driver object. */
typedef struct Driver {
    char unknown0[0x10c];
    int waits;
} Driver;

extern int read_status_8c36dfc0(int *);
extern Driver *g_driver_8c3fbdf0;

int wait_ready_8c36dfd4(void)
{
    int status;
    do {
        do {
            read_status_8c36dfc0(&status);
        } while (status != 1);
        g_driver_8c3fbdf0->waits++;
    } while (status != 1);
    return 0;
}
