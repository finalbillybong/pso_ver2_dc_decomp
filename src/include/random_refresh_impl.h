#ifndef PSO_RANDOM_REFRESH_IMPL_H
#define PSO_RANDOM_REFRESH_IMPL_H
#include "src/include/random_state.h"

typedef char check_random_address_width[sizeof(unsigned long) == 4 ? 1 : -1];

static inline void refresh_random_state_inline(RandomState *state) {
    int i, j;
    for (i = 1; i <= 24; i++) {
        char *destination = (char *)state->values;
        unsigned int value = *(unsigned int *)(destination + (i << 2));
        char *source = (char *)state + 128;
        *(unsigned int *)(destination + (i << 2)) =
            value - *(unsigned int *)(source + (i << 2));
    }
    for (j = 25; j <= 55; j++) {
        char *destination = (char *)state->values;
        unsigned int value = *(unsigned int *)(destination + (j << 2));
        int source_offset = -92;
        /* Keep the adjusted base as an integer. Only the final in-state
           address is converted to a pointer: offsets 8 through 128. */
        unsigned long source = (unsigned long)state + source_offset;
        *(unsigned int *)(destination + (j << 2)) =
            value - *(unsigned int *)(source + (j << 2));
    }
}
#endif
