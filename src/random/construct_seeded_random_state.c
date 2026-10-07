#include "src/include/random_state.h"

#define seed_at ((void (*)(RandomState *, unsigned int))0x8c037d8c)

RandomState *construct_seeded_random_state(RandomState *state, unsigned int seed) {
    seed_at(state, seed);
    return state;
}
