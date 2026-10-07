#include "src/include/random_state.h"

#define refresh_at ((void (*)(RandomState *))0x8c037e04)

void seed_random_state(RandomState *state, unsigned int seed) {
    unsigned int current = 1;
    int i;
    state->seed = seed;
    state->values[55] = seed;
    for (i = 1; i <= 54; i++) {
        int byte_offset = ((21 * i) % 55) << 2;
        *(unsigned int *)((char *)state->values + byte_offset) = current;
        seed -= current;
        current = seed;
        seed = *(unsigned int *)((char *)state->values + byte_offset);
    }
    refresh_at(state);
    refresh_at(state);
    refresh_at(state);
    refresh_at(state);
    state->index = 55;
}
