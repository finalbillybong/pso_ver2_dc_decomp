#ifndef PSO_RENDER_STATE_BLOCKS_H
#define PSO_RENDER_STATE_BLOCKS_H
/* Provisional accessed records; referenced contents remain outside source coverage. */
typedef struct RenderStateBlock {float values[11];} RenderStateBlock;
typedef struct RenderParameterBlock {float values[4];} RenderParameterBlock;
typedef char check_RenderStateBlock_values[(unsigned long)&((RenderStateBlock *)0)->values==0?1:-1];
typedef char check_RenderStateBlock_size[sizeof(RenderStateBlock)==44?1:-1];
typedef char check_RenderParameterBlock_values[(unsigned long)&((RenderParameterBlock *)0)->values==0?1:-1];
typedef char check_RenderParameterBlock_size[sizeof(RenderParameterBlock)==16?1:-1];
#endif
