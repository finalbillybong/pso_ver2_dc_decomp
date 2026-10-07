#define free_at ((void (*)(void *))0x8c011ed8)

void *release_effect_node(void *object, short release) {
    if (object && release > 0) free_at(object);
    return object;
}
