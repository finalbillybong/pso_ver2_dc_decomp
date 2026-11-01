/* Provisional address-based name; preserve the observed call sequence. */
#define wait_vsync_and_flip_8c380516 ((void (*)(void))0x8c380516)
extern void operation_033878(void *);

void operation_0c56b0(void) {
    wait_vsync_and_flip_8c380516();
    operation_033878((void *)0x8c44bec8);
    wait_vsync_and_flip_8c380516();
}
