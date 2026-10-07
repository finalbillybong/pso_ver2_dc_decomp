#include "src/include/random_state.h"

#define seed_at ((void (*)(RandomState *, unsigned int))0x8c037d8c)

RandomState *construct_random_state(RandomState *state) {
    seed_at(state, 0);
    return state;
}
