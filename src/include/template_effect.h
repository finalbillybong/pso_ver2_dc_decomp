#ifndef PSO_TEMPLATE_EFFECT_H
#define PSO_TEMPLATE_EFFECT_H
#include "src/include/vector3.h"
/* Provisional accessed layouts; unknown fields and original signedness retained. */
typedef struct EffectTemplate {float first;float rest[15];} EffectTemplate;
typedef struct TemplateEffect {char unknown00[4];unsigned short flags;char unknown06[18];void *dispatch;int unknown1c;void *owner;char unknown24[90];short variant;char unknown80[16];EffectTemplate template_data;unsigned short owner_id;} TemplateEffect;
typedef struct TemplateOwner {char unknown00[32];unsigned short id;} TemplateOwner;
typedef struct TemplateResource {char unknown00[220];float *values;} TemplateResource;
typedef struct TemplateEffectFull {int tag;unsigned short flags;char unknown06[18];void *dispatch;short unknown1c;unsigned short allocation_size;TemplateOwner *owner;Vector3 position;char unknown30[76];short selector,variant;int mode;Vector3 initial_position;EffectTemplate template_data;unsigned short owner_id;char unknownd2[50];TemplateResource *resource;} TemplateEffectFull;
typedef char check_EffectTemplate_first[(unsigned long)&((EffectTemplate *)0)->first == 0 ? 1 : -1];
typedef char check_EffectTemplate_rest[(unsigned long)&((EffectTemplate *)0)->rest == 4 ? 1 : -1];
typedef char check_EffectTemplate_size[sizeof(EffectTemplate)==64?1:-1];
typedef char check_TemplateEffect_flags[(unsigned long)&((TemplateEffect *)0)->flags == 4 ? 1 : -1];
typedef char check_TemplateEffect_dispatch[(unsigned long)&((TemplateEffect *)0)->dispatch == 24 ? 1 : -1];
typedef char check_TemplateEffect_owner[(unsigned long)&((TemplateEffect *)0)->owner == 32 ? 1 : -1];
typedef char check_TemplateEffect_variant[(unsigned long)&((TemplateEffect *)0)->variant == 126 ? 1 : -1];
typedef char check_TemplateEffect_template_data[(unsigned long)&((TemplateEffect *)0)->template_data == 144 ? 1 : -1];
typedef char check_TemplateEffect_owner_id[(unsigned long)&((TemplateEffect *)0)->owner_id == 208 ? 1 : -1];
typedef char check_TemplateEffect_size[sizeof(TemplateEffect)==212?1:-1];
typedef char check_TemplateOwner_id[(unsigned long)&((TemplateOwner *)0)->id == 32 ? 1 : -1];
typedef char check_TemplateOwner_size[sizeof(TemplateOwner)==34?1:-1];
typedef char check_TemplateResource_values[(unsigned long)&((TemplateResource *)0)->values == 220 ? 1 : -1];
typedef char check_TemplateResource_size[sizeof(TemplateResource)==224?1:-1];
typedef char check_TemplateEffectFull_tag[(unsigned long)&((TemplateEffectFull *)0)->tag == 0 ? 1 : -1];
typedef char check_TemplateEffectFull_flags[(unsigned long)&((TemplateEffectFull *)0)->flags == 4 ? 1 : -1];
typedef char check_TemplateEffectFull_dispatch[(unsigned long)&((TemplateEffectFull *)0)->dispatch == 24 ? 1 : -1];
typedef char check_TemplateEffectFull_allocation_size[(unsigned long)&((TemplateEffectFull *)0)->allocation_size == 30 ? 1 : -1];
typedef char check_TemplateEffectFull_owner[(unsigned long)&((TemplateEffectFull *)0)->owner == 32 ? 1 : -1];
typedef char check_TemplateEffectFull_position[(unsigned long)&((TemplateEffectFull *)0)->position == 36 ? 1 : -1];
typedef char check_TemplateEffectFull_selector[(unsigned long)&((TemplateEffectFull *)0)->selector == 124 ? 1 : -1];
typedef char check_TemplateEffectFull_variant[(unsigned long)&((TemplateEffectFull *)0)->variant == 126 ? 1 : -1];
typedef char check_TemplateEffectFull_mode[(unsigned long)&((TemplateEffectFull *)0)->mode == 128 ? 1 : -1];
typedef char check_TemplateEffectFull_initial_position[(unsigned long)&((TemplateEffectFull *)0)->initial_position == 132 ? 1 : -1];
typedef char check_TemplateEffectFull_template_data[(unsigned long)&((TemplateEffectFull *)0)->template_data == 144 ? 1 : -1];
typedef char check_TemplateEffectFull_owner_id[(unsigned long)&((TemplateEffectFull *)0)->owner_id == 208 ? 1 : -1];
typedef char check_TemplateEffectFull_resource[(unsigned long)&((TemplateEffectFull *)0)->resource == 260 ? 1 : -1];
typedef char check_TemplateEffectFull_size[sizeof(TemplateEffectFull)==264?1:-1];
#endif
