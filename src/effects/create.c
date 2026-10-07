#include "src/include/calls.h"
extern void effect_init_at(void *, float *, void *, int, int, int, int, int);
#define effect_count_at ((int *)0x8c303c10)
#define effect_table_at ((unsigned char **)0x8c46f100)
#define effect_heap_at ((void **)0x8c4d97e0)
void *create_effect(float *position, int kind, int argument)
{
    if (kind < *effect_count_at) {
        void *effect = allocate_block_at(*effect_heap_at, 0x68);
        if (effect) effect_init_at(effect, position, *effect_table_at + kind * 0x98, 1, 0, 0, 0, argument);
        return effect;
    }
    return 0;
}
