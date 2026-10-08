/* Provisional name; preserve the observed pair of render-state calls. */
#define blend_at ((void (*)(int, int))0x8c380ab8)

void restore_child_blend(void) {
    blend_at(0, 8);
    blend_at(1, 6);
}
