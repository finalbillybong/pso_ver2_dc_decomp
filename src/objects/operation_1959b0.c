/* Provisional names; preserve float evaluation order, signed bit updates and untouched record gaps. */
#include "src/include/widget_draw.h"
extern float vertical_scale;
#define active_color (*(WidgetDrawColor *)0x8c5755ac)
#define saved_color (*(WidgetDrawColor *)0x8c46f564)
#define draw_at ((void (*)(WidgetDrawRecord *,int,int,float))0x8c37eb1c)
void operation_1959b0(int index,WidgetDrawPosition *position,WidgetDrawPosition *scale,float depth,float alpha){
    WidgetDrawRecord render;
    WidgetDrawColor color;
    float vertical=vertical_scale;
    render.position.x=position->x;
    render.position.y=vertical*position->y;
    render.scale.x=scale->x;
    render.scale.y=vertical*scale->y;
    render.resource=(void *)0x8c31b338;
    render.metrics=(void *)0x8c31b3f8;
    if(alpha>0.0f){
        if(alpha>=1.0f){
            draw_at(&render,index,32,depth);
        }
        else{
            saved_color=active_color;
            color.alpha=alpha;
            color.red=color.green=color.blue=1.0f;
            ((void (*)(WidgetDrawColor *))0x8c38c0f0)(&color);
            draw_at(&render,index,34,depth);
            active_color=saved_color;
        }
    }
}
