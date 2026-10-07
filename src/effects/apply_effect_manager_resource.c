#include "src/include/effect_manager.h"

extern void bind_at(Effect *, EffectResource *);
extern int manager_data[];
#define convert_at ((int (*)(int))0x8c0a02cc)
#define copy_at ((void (*)(EffectManager *, void *, EffectResource *))0x8c0a939c)
#define resources (*(EffectResource **)0x8c46f100)

/* Global indices and manager field names describe observed offsets only. */
void apply_effect_manager_resource(EffectManager *p) {
    switch (manager_data[0]) {
    case 0:
        p->resource = resources + manager_data[1];
        break;
    case 1:
        p->resource = resources + manager_data[1];
        bind_at(p->effect, p->resource);
        manager_data[0] = 0;
        break;
    case 2:
        break;
    }
    p->field74 = manager_data[1];
    p->field7c = convert_at(manager_data[7]);
    copy_at(p, manager_data + 2, p->resource);
    p->field78 = manager_data[6];
}
