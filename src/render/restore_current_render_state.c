#define first_at ((void (*)(void *))0x8c0149e0)
#define second_at ((void (*)(void *))0x8c0149c8)
void restore_current_render_state(void) {
 first_at(*(void **)0x8c4182cc);
 second_at(*(void **)0x8c4182cc);
}
