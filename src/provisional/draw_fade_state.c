#include "src/include/fade_state.h"
#include "src/include/widget_draw.h"
typedef struct FadeDrawList {WidgetDrawPosition *positions;unsigned int *colors;void *unknown08;int count;} FadeDrawList;
typedef char check_FadeDrawList_positions[(unsigned long)&((FadeDrawList *)0)->positions == 0 ? 1 : -1];
typedef char check_FadeDrawList_colors[(unsigned long)&((FadeDrawList *)0)->colors == 4 ? 1 : -1];
typedef char check_FadeDrawList_unknown08[(unsigned long)&((FadeDrawList *)0)->unknown08 == 8 ? 1 : -1];
typedef char check_FadeDrawList_count[(unsigned long)&((FadeDrawList *)0)->count == 12 ? 1 : -1];
typedef char check_FadeDrawList_size[sizeof(FadeDrawList)==16?1:-1];
typedef char check_fade_alpha[(unsigned long)&((FadeState *)0)->unknown27==39?1:-1];
#define begin_at ((void (*)(void))0x8c0a2d30)
#define mode_at ((void (*)(int,int))0x8c380ab8)
#define draw_at ((void (*)(FadeDrawList *,int,int,float))0x8c38ef2c)
#define end_at ((void (*)(void))0x8c0a2d80)
void draw_fade_state(FadeState *state){
 FadeDrawList list;WidgetDrawPosition vertices[4];unsigned int colors[4];
 begin_at();mode_at(0,8);mode_at(1,6);
 list.positions=vertices;list.colors=colors;list.unknown08=0;list.count=4;
 state->unknown27=(int)state->amount;
 list.positions[0].x=0.0f;list.positions[0].y=0.0f;list.colors[0]=*(unsigned int *)&state->red;
 list.positions[1].x=640.0f;list.positions[1].y=0.0f;list.colors[1]=*(unsigned int *)&state->red;
 list.positions[2].x=640.0f;list.positions[2].y=480.0f;list.colors[2]=*(unsigned int *)&state->red;
 list.positions[3].x=0.0f;list.positions[3].y=480.0f;list.colors[3]=*(unsigned int *)&state->red;
 if((float)state->unknown27!=0.0f)draw_at(&list,4,98,-0.9f);
 end_at();
}
