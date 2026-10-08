/* Preserve ordered vertex/alpha stores and per-call point-base reloads. */
#include "src/include/panel_geometry.h"
extern float vertical_scale;extern WidgetDrawPosition points[];
#define draw_at ((void (*)(WidgetDrawList *,int,int,float))0x8c38ef2c)
void operation_1960fc(void *o){WidgetDrawList list;WidgetDrawPosition vertices[4];int i;float top=vertical_scale*74.0f;float bottom=vertical_scale*416.0f;float step=vertical_scale*3.0f;
points[8].y=points[9].y=top;points[10].y=points[11].y=top+step;points[12].y=points[13].y=bottom;points[14].y=points[15].y=bottom+step;
list.colors=(unsigned int *)0x8c31c120;list.unknown08=0;list.count=4;
for(i=0;i<4;i++){list.positions=(WidgetDrawPosition *)((char *)points+(i<<5));draw_at(&list,4,32,-254.0f);}
list.positions=vertices;vertices[0].x=90.0f;vertices[0].y=0.0f;vertices[1].x=vertices[0].x+5.0f;vertices[1].y=vertices[0].y;vertices[2].x=vertices[1].x;vertices[2].y=560.0f;vertices[3].x=vertices[0].x;vertices[3].y=vertices[2].y;
for(i=0;i<8;i++){draw_at(&list,4,32,-254.0f);vertices[0].x+=65.0f;vertices[1].x+=65.0f;vertices[2].x+=65.0f;vertices[3].x+=65.0f;}}
