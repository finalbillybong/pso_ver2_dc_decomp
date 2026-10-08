/* Provisional names; preserve float evaluation order, signed bit updates and untouched record gaps. */
#include "src/include/widget_draw.h"
extern void draw_quad_at(void *,int,int);
extern unsigned int panel_colors[];
void operation_195a84(float alpha){
    unsigned int colors[24];
    WidgetDrawList list;
    unsigned int color;
    int i;
    color=((unsigned int)(alpha*24.0f)<<24)|0x00ffffa0;
    for(i=0;
    i<24;
    i++)*(unsigned int *)((char *)colors+(i<<2))=color;
    list.positions=(void *)0x8c31bf8c;
    list.colors=colors;
    list.unknown08=0;
    list.count=24;
    ((void (*)(WidgetDrawList *,int,int))0x8c38e354)(&list,12,64);
    color=((unsigned int)(alpha*64.0f)<<24)|0x00404040;
    panel_colors[1]=color;
    panel_colors[0]=color;
    draw_quad_at((void *)0x8c31c0ec,4,96);
}
