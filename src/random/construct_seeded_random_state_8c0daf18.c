#include "src/include/random_state.h"

#define seed_at ((void (*)(RandomState *, unsigned int))0x8c0daf30)

RandomState *construct_seeded_random_state_8c0daf18(RandomState *state, unsigned int seed) {
    seed_at(state, seed);
    return state;
}
