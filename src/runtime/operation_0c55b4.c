/* Provisional address-based name; wider setup/update role remains under review. */
#define wait_vsync_and_flip_8c380516 ((void (*)(void))0x8c380516)
extern void  operation_033878(void *);
#define operation_0c62e0 ((void (*)(void))0x8c0c62e0)
#define operation_0c62d0 ((void (*)(void))0x8c0c62d0)

void game_mode_18_exit_8c0c55b4(void) {
    wait_vsync_and_flip_8c380516();
    operation_033878((void *)0x8c44bec8);
    operation_0c62e0();
    wait_vsync_and_flip_8c380516();
    operation_0c62d0();
    wait_vsync_and_flip_8c380516();
}
