#include "src/include/effect_access_views.h"
void bind_effect_coordinates(EffectCoordinateView *effect,Coordinates *position,int offset) {
 position->x+=offset;
 effect->first=position->y;
 effect->second=position->z;
}
