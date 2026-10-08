/* Provisional names; retain default sentinels, field widths and call order. */
#include "src/include/widget_notice_record.h"
void operation_1c7dd4(WidgetPayload *o){
    int i;
    o->field00=0;
    o->field01=0;
    o->field02=0;
    o->field03=0;
    o->field04=0;
    o->field05=0;
    o->field10=0;
    for(i=0;
    i!=3;
    i++){
        {
            unsigned char *first=(unsigned char *)o+6;
            first[i<<1]=0;
        }
        {
            unsigned char *second=(unsigned char *)o+7;
            second[i<<1]=0;
        }
    }
    o->field0c=-1;
}
