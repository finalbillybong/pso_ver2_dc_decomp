#include "src/include/random_refresh_impl.h"

unsigned int next_random_state(RandomState *state) {
    if (++state->index > 55) {
        refresh_random_state_inline(state);
        state->index = 1;
    }
    return *(unsigned int *)((char *)state->values + (state->index << 2));
}
