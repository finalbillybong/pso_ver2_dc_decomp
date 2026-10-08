#ifndef PSO_RENDER_VIEW_PARAMETERS_H
#define PSO_RENDER_VIEW_PARAMETERS_H
/* Provisional accessed layouts; referenced values remain unresolved. */
typedef struct RenderViewState {float value0,value4,value8,value12,value16,value20,value24,value28,value32,value36,value40;} RenderViewState;
typedef struct RenderViewParameters {char unknown0[20];float first,second;} RenderViewParameters;
typedef char check_RenderViewState_value0[(unsigned long)&((RenderViewState *)0)->value0==0?1:-1];
typedef char check_RenderViewState_value4[(unsigned long)&((RenderViewState *)0)->value4==4?1:-1];
typedef char check_RenderViewState_value8[(unsigned long)&((RenderViewState *)0)->value8==8?1:-1];
typedef char check_RenderViewState_value12[(unsigned long)&((RenderViewState *)0)->value12==12?1:-1];
typedef char check_RenderViewState_value16[(unsigned long)&((RenderViewState *)0)->value16==16?1:-1];
typedef char check_RenderViewState_value20[(unsigned long)&((RenderViewState *)0)->value20==20?1:-1];
typedef char check_RenderViewState_value24[(unsigned long)&((RenderViewState *)0)->value24==24?1:-1];
typedef char check_RenderViewState_value28[(unsigned long)&((RenderViewState *)0)->value28==28?1:-1];
typedef char check_RenderViewState_value32[(unsigned long)&((RenderViewState *)0)->value32==32?1:-1];
typedef char check_RenderViewState_value36[(unsigned long)&((RenderViewState *)0)->value36==36?1:-1];
typedef char check_RenderViewState_value40[(unsigned long)&((RenderViewState *)0)->value40==40?1:-1];
typedef char check_RenderViewState_size[sizeof(RenderViewState)==44?1:-1];
typedef char check_RenderViewParameters_first[(unsigned long)&((RenderViewParameters *)0)->first==20?1:-1];
typedef char check_RenderViewParameters_second[(unsigned long)&((RenderViewParameters *)0)->second==24?1:-1];
typedef char check_RenderViewParameters_size[sizeof(RenderViewParameters)==28?1:-1];
#endif
