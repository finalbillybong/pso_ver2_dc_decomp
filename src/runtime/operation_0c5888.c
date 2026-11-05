/* Provisional address-based name; preserve the observed call sequence. */
extern void operation_033878(void *);
#define wait_vsync_and_flip_8c380516 ((void (*)(void))0x8c380516)
#define operation_0c5d28 ((void (*)(void))0x8c0c5d28)
#define operation_104e8c ((void (*)(void))0x8c104e8c)
#define operation_0c62e0 ((void (*)(void))0x8c0c62e0)
#define operation_0c62d0 ((void (*)(void))0x8c0c62d0)

void game_mode_23_exit_8c0c5888(void) {
    wait_vsync_and_flip_8c380516();
    operation_033878((void *)0x8c44bec8);
    operation_0c5d28();
    operation_104e8c();
    wait_vsync_and_flip_8c380516();
    operation_0c62e0();
    wait_vsync_and_flip_8c380516();
    operation_0c62d0();
    wait_vsync_and_flip_8c380516();
}
