#include "src/include/effect_manager.h"

extern void *operator_new_8c18de4c(unsigned int);
extern int divide_at(int, int);
extern void *resource_name;
extern EffectResource *resource_table;
#define file_load_8c104d00 ((int (*)(void *, void *))0x8c104d00)

void load_particle_entries_8c0a9548(void) {
    int length;
    EffectResource *p = operator_new_8c18de4c(512 * sizeof(EffectResource));
    resource_table = p;
    length = file_load_8c104d00(resource_name, p);
    *(int *)0x8c303c10 = 0;
    if (length >= 0)
        *(int *)0x8c303c10 = divide_at(length, sizeof(EffectResource));
}
