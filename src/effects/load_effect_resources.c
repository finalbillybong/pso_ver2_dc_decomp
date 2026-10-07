#include "src/include/effect_manager.h"

extern void *allocate_at(unsigned int);
extern int divide_at(int, int);
extern void *resource_name;
extern EffectResource *resource_table;
#define load_at ((int (*)(void *, void *))0x8c104d00)

void load_effect_resources(void) {
    int length;
    EffectResource *p = allocate_at(512 * sizeof(EffectResource));
    resource_table = p;
    length = load_at(resource_name, p);
    *(int *)0x8c303c10 = 0;
    if (length >= 0)
        *(int *)0x8c303c10 = divide_at(length, sizeof(EffectResource));
}
