#include "src/include/offset_effect.h"
void activate_offset_effect(OffsetEffect *effect){effect->active=1;}
void activate_offset_effect_immediately(OffsetEffect *effect){effect->active=1;effect->immediate=1;}
int offset_effect_threshold_reached(OffsetEffect *effect){return !(effect->second_offset < -10.0f);}
