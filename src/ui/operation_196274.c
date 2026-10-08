/* Preserve ordered vertex/alpha stores and per-call point-base reloads. */
#include "src/include/panel_geometry.h"
extern WidgetDrawPosition points[];extern unsigned char colors[];
#define draw_at ((void (*)(WidgetDrawList *,int,int,float))0x8c38ef2c)
void operation_196274(PanelGeometryOwner *o){WidgetDrawList list;int i;
colors[3]=colors[7]=colors[11]=colors[15]=(int)(o->amount*-95.0f+255.0f);
points[1].x=points[2].x=o->amount*-35.0f+190.0f;points[4].x=points[7].x=o->amount*35.0f+190.0f;
list.colors=(unsigned int *)colors;list.unknown08=0;list.count=4;
for(i=0;i<2;i++){list.positions=(WidgetDrawPosition *)((char *)points+(i<<5));draw_at(&list,4,96,-251.0f);}}
