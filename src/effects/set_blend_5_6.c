/* Provisional name; preserve the observed pair of render-state calls. */
#define blend_at ((void (*)(int, int))0x8c380ab8)

void set_blend_5_6(void) {
    blend_at(0, 5);
    blend_at(1, 6);
}
