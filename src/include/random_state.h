#ifndef PSO_RANDOM_STATE_H
#define PSO_RANDOM_STATE_H
/* Observed subtractive generator state. Slot zero is preserved, not initialized. */
typedef struct RandomState {
    int index;
    unsigned int values[56];
    unsigned int seed;
} RandomState;
typedef char check_random_index[(unsigned long)&((RandomState *)0)->index == 0 ? 1 : -1];
typedef char check_random_values[(unsigned long)&((RandomState *)0)->values == 4 ? 1 : -1];
typedef char check_random_seed[(unsigned long)&((RandomState *)0)->seed == 228 ? 1 : -1];
typedef char check_random_size[sizeof(RandomState) == 232 ? 1 : -1];
#endif
