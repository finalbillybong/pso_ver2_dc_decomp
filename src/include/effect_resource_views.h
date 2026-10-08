#ifndef PSO_EFFECT_RESOURCE_VIEWS_H
#define PSO_EFFECT_RESOURCE_VIEWS_H
/* Provisional accessed prefixes and three-word resource records. */
typedef struct EffectBaseView {char unknown00[24];void *dispatch;int unknown1c;int state;} EffectBaseView;
typedef struct ResourceRecord {unsigned int first,second,third;} ResourceRecord;
typedef struct ResourcePair {ResourceRecord **first,**second;int first_index,second_index;} ResourcePair;
typedef char check_EffectBaseView_dispatch[(unsigned long)&((EffectBaseView *)0)->dispatch == 24 ? 1 : -1];
typedef char check_EffectBaseView_state[(unsigned long)&((EffectBaseView *)0)->state == 32 ? 1 : -1];
typedef char check_EffectBaseView_size[sizeof(EffectBaseView)==36?1:-1];
typedef char check_ResourceRecord_first[(unsigned long)&((ResourceRecord *)0)->first == 0 ? 1 : -1];
typedef char check_ResourceRecord_second[(unsigned long)&((ResourceRecord *)0)->second == 4 ? 1 : -1];
typedef char check_ResourceRecord_third[(unsigned long)&((ResourceRecord *)0)->third == 8 ? 1 : -1];
typedef char check_ResourceRecord_size[sizeof(ResourceRecord)==12?1:-1];
typedef char check_ResourcePair_first[(unsigned long)&((ResourcePair *)0)->first == 0 ? 1 : -1];
typedef char check_ResourcePair_second[(unsigned long)&((ResourcePair *)0)->second == 4 ? 1 : -1];
typedef char check_ResourcePair_first_index[(unsigned long)&((ResourcePair *)0)->first_index == 8 ? 1 : -1];
typedef char check_ResourcePair_second_index[(unsigned long)&((ResourcePair *)0)->second_index == 12 ? 1 : -1];
typedef char check_ResourcePair_size[sizeof(ResourcePair)==16?1:-1];
#endif
