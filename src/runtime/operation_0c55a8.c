/* Provisional address-based name; wider setup/update role remains under review. */
#define request_game_mode_8c01c1a4 ((void (*)(int))0x8c01c1a4)

void request_game_mode_wrapper_2_8c0c55a8(void *object) {
    request_game_mode_8c01c1a4(25);
}
