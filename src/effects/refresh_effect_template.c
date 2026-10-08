#include "src/include/template_effect.h"
extern EffectTemplate *lookup_at(int,int);
#define convert_at ((float (*)(int,float))0x8c0afdec)
void refresh_effect_template(TemplateEffect *effect) {
 effect->template_data=*lookup_at(11,effect->variant);
 effect->template_data.first=effect->variant;
 effect->template_data.first=convert_at(11,effect->template_data.first);
}
