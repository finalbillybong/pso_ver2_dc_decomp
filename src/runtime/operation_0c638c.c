/* Provisional address-based name; wider setup/update role remains under review. */
#define refresh_at ((void (*)(void))0x8c01da7c)

void operation_0c638c(void) {
    refresh_at();
    {
        int i;
        for (i = 3; i >= 0; i--) {
            char *base = (char *)0x8c41cba0;
            base += 16;
            if (*(int *)(base + (i << 2)) == 1) {
                *(int *)0x8c418254 = i;
                break;
            }
        }
    }
}
