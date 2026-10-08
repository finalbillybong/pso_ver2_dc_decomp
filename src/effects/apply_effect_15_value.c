#include "src/include/effect_value_context.h"
extern EffectValueContext effect_value_context;
#define get_at ((float *(*)(int,int))0x8c0adc1c)
#define condition_at ((int (*)(void))0x8c02b2a4)
#define apply_at ((void (*)(int,float))0x8c0afdec)
void apply_effect_15_value(int index){float value=*get_at(15,index);value+=(float)(index*5);if(condition_at())value*=effect_value_context.multiplier;apply_at(15,value);}
