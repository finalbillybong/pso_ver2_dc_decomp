#define free_at ((void (*)(void *))0x8c18de08)

void free_effect_resources(void) {
    free_at(*(void **)0x8c46f100);
}
