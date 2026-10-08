/* Provisional names; preserve float evaluation order, signed bit updates and untouched record gaps. */
#include "src/include/widget_draw.h"
extern signed char initialized;
extern int counter;
#define values ((int *)0x8c4dc3e0)
#define draw_at ((void (*)(int,WidgetDrawPosition *,void *,float,float))0x8c1959b0)
void operation_195b44(short *input,float alpha){
    WidgetDrawPosition position;
    float y;
    float opacity;
    int i;
    if(!initialized){
        counter=0;
        initialized=1;
    }
    counter++;
    opacity=alpha*0.100000001490116119384765625f;
    for(i=0;
    i<3;
    i++){
        int value,target;
        int high,bit;
        int mask,j;
        int offset=i<<2;
        value=*(int *)((char *)values+offset);
        target=*(short *)((char *)input+(i<<1));
        if((counter&7)==0){
            high=128;
            for(bit=0;
            bit<8;
            bit++,high>>=1){
                if((high&value)!=(high&target)){
                    value^=high;
                    *(int *)((char *)values+offset)=value;
                    break;
                }
            }
        }
        y=(float)i*23.0f+60.0f;
        mask=1;
        for(j=0;
        j<8;
        j++,mask<<=1){
            position.x=(float)j*-40.0f+575.0f;
            position.y=y;
            if(!(mask&value)){
                position.x-=-20.0f;
                position.y-=-11.19999980926513671875f;
            }
            draw_at(24,&position,(void *)0x8c31c0fc,-65530.0f,opacity);
        }
    }
}
