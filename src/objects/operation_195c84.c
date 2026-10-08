/* Provisional names; preserve signed wrapping, state transitions, field widths and original call order. */
#include "src/include/widget_panel_owner.h"
extern signed char initialized;
extern int counter;
extern WidgetWeightedInput input;
#define values ((int *)0x8c4dc3f4)
#define query_at ((void (*)(void *,int *))0x8c09bc0c)
#define draw_at ((void (*)(int,WidgetDrawPosition *,void *,float,float))0x8c1959b0)
void operation_195c84(float alpha){
    int indices[3];
    float weights[3];
    WidgetDrawPosition position;
    float y;
    int i;
    if(!initialized){
        counter=0;
        initialized=1;
    }
    counter++;
    query_at(input.actor,indices);
    weights[0]=input.weights[0];
    weights[1]=input.weights[1];
    weights[2]=input.weights[2];
    alpha*=0.100000001490116119384765625f;
    for(i=0;
    i<7;
    i++){
        int value,target;
        int high,bit;
        int mask,j;
        int offset=i<<2;
        float weight=0.0f;
        value=(unsigned char)*(int *)((char *)values+offset);
        {
            int k;
            for(k=0;
            k<3;
            k++){
                int n=k<<2;
                if(*(int *)((char *)indices+n)==i){
                    weight=*(float *)((char *)weights+n);
                    break;
                }
            }
        }
        target=(int)(weight*255.0f);
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
        y=(float)i*23.0f+260.0f;
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
            draw_at(24,&position,(void *)0x8c31c104,-65530.0f,alpha);
        }
    }
}
