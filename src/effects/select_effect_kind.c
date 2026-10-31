#define get_current_area_8c032b10 ((int (*)(void))0x8c032b10)

unsigned int select_effect_kind(unsigned int kind) {
    int mode = get_current_area_8c032b10();
    int normal = 0;
    if (mode != 16 && mode != 17) normal = 1;
    return normal ? kind : 0x30043;
}
