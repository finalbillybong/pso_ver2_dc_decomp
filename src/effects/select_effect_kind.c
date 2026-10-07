#define mode_at ((int (*)(void))0x8c032b10)

unsigned int select_effect_kind(unsigned int kind) {
    int mode = mode_at();
    int normal = 0;
    if (mode != 16 && mode != 17) normal = 1;
    return normal ? kind : 0x30043;
}
