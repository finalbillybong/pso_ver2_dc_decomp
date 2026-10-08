struct EffectKindView {char unknown00[214];unsigned short value;int is_one(){return (unsigned short)value==1;}};
extern "C" int effect_kind_is_one(EffectKindView *effect){if(!effect)return 0;return effect->is_one() ? 1 : 0;}
typedef char check_kind_offset[(unsigned long)&((EffectKindView*)0)->value==214?1:-1];
typedef char check_kind_size[sizeof(EffectKindView)==216?1:-1];
