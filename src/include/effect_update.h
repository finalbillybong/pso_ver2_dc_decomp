#ifndef PSO_EFFECT_UPDATE_H
#define PSO_EFFECT_UPDATE_H
/* Provisional views of observed fields, not complete gameplay type definitions. */
typedef struct EffectBase { void *field0; unsigned short flags; } EffectBase;
typedef struct Resource {
    unsigned char unknown_00[16];
    int mode;
    unsigned char unknown_14[44];
    float field_40, field_44;
} Resource;
typedef struct EffectSpawnView {
    unsigned char unknown_00[0x98];
    float field_98, field_9c;
} EffectSpawnView;
typedef void *(*Spawn)(void *, void *, void *);
typedef struct EffectSpawnEntry { void *unknown; Spawn callback; } EffectSpawnEntry;
#define EFFECT_UPDATE_OFFSET(t, f) ((unsigned long)&((t *)0)->f)
typedef char check_effect_base_flags[EFFECT_UPDATE_OFFSET(EffectBase, flags)==4?1:-1];
typedef char check_resource_mode[EFFECT_UPDATE_OFFSET(Resource, mode)==0x10?1:-1];
typedef char check_resource_40[EFFECT_UPDATE_OFFSET(Resource, field_40)==0x40?1:-1];
typedef char check_resource_44[EFFECT_UPDATE_OFFSET(Resource, field_44)==0x44?1:-1];
typedef char check_spawn_98[EFFECT_UPDATE_OFFSET(EffectSpawnView, field_98)==0x98?1:-1];
typedef char check_spawn_9c[EFFECT_UPDATE_OFFSET(EffectSpawnView, field_9c)==0x9c?1:-1];
typedef char check_spawn_entry_size[sizeof(EffectSpawnEntry)==8?1:-1];
typedef char check_spawn_callback[EFFECT_UPDATE_OFFSET(EffectSpawnEntry, callback)==4?1:-1];
#endif
