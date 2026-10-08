#ifndef PSO_EFFECT_TEMPLATE_INIT_H
#define PSO_EFFECT_TEMPLATE_INIT_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; referenced template contents remain unresolved. */
typedef struct EffectTemplate64 {float value;float unknown4;float value8;char unknown12[52];} EffectTemplate64;
typedef struct Effect10TemplateView {char unknown0[120];EffectTemplate64 parameters;char unknown184[6];short index;} Effect10TemplateView;
typedef struct Effect4TemplateView {char unknown0[116];float value116;char unknown120[82];short index;char unknown204[8];EffectTemplate64 parameters;} Effect4TemplateView;
typedef struct Effect4ScaleRecord {char unknown0[16];short base,increment;} Effect4ScaleRecord;
typedef struct EffectPairInit {char unknown0[24];void *dispatch;char unknown28[4];int zero32;void *context;Vector3 first,second;unsigned short value64;short unknown66;} EffectPairInit;
typedef char check_EffectTemplate64_value[(unsigned long)&((EffectTemplate64 *)0)->value==0?1:-1];
typedef char check_EffectTemplate64_value8[(unsigned long)&((EffectTemplate64 *)0)->value8==8?1:-1];
typedef char check_EffectTemplate64_size[sizeof(EffectTemplate64)==64?1:-1];
typedef char check_Effect10TemplateView_parameters[(unsigned long)&((Effect10TemplateView *)0)->parameters==120?1:-1];
typedef char check_Effect10TemplateView_index[(unsigned long)&((Effect10TemplateView *)0)->index==190?1:-1];
typedef char check_Effect10TemplateView_size[sizeof(Effect10TemplateView)==192?1:-1];
typedef char check_Effect4TemplateView_value116[(unsigned long)&((Effect4TemplateView *)0)->value116==116?1:-1];
typedef char check_Effect4TemplateView_index[(unsigned long)&((Effect4TemplateView *)0)->index==202?1:-1];
typedef char check_Effect4TemplateView_parameters[(unsigned long)&((Effect4TemplateView *)0)->parameters==212?1:-1];
typedef char check_Effect4TemplateView_size[sizeof(Effect4TemplateView)==276?1:-1];
typedef char check_Effect4ScaleRecord_base[(unsigned long)&((Effect4ScaleRecord *)0)->base==16?1:-1];
typedef char check_Effect4ScaleRecord_increment[(unsigned long)&((Effect4ScaleRecord *)0)->increment==18?1:-1];
typedef char check_Effect4ScaleRecord_size[sizeof(Effect4ScaleRecord)==20?1:-1];
typedef char check_EffectPairInit_dispatch[(unsigned long)&((EffectPairInit *)0)->dispatch==24?1:-1];
typedef char check_EffectPairInit_zero32[(unsigned long)&((EffectPairInit *)0)->zero32==32?1:-1];
typedef char check_EffectPairInit_context[(unsigned long)&((EffectPairInit *)0)->context==36?1:-1];
typedef char check_EffectPairInit_first[(unsigned long)&((EffectPairInit *)0)->first==40?1:-1];
typedef char check_EffectPairInit_second[(unsigned long)&((EffectPairInit *)0)->second==52?1:-1];
typedef char check_EffectPairInit_value64[(unsigned long)&((EffectPairInit *)0)->value64==64?1:-1];
typedef char check_EffectPairInit_size[sizeof(EffectPairInit)==68?1:-1];
extern EffectTemplate64 *get_effect_template(int,int);
#endif
