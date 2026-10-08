/* Provisional names; preserve observed bounds, field widths and call order. */
#include "src/include/bounded_fields.h"
void operation_2392fc(Settings *o,int value){
    if(value<0 || value>162000)value=0;
    o->field1c=value;
}
void operation_239310(Settings *o,short value){
    if(value<0 || value>199)value=0;
    o->field14=value;
}
short operation_239328(Settings *o){
    short value=o->field14;
    if(value<0 || value>199)value=0;
    return value;
}
void operation_239340(Settings *o,signed char value){
    if(value< -1 || value>29)value=0;
    o->field11=value;
}
signed char operation_239358(Settings *o){
    signed char value=o->field11;
    if(value< -1 || value>29)value=0;
    return value;
}
void operation_239370(Settings *o,unsigned char value){
    if(value>99)value=0;
    o->field10=value;
}
unsigned char operation_239380(Settings *o){
    unsigned char value=o->field10;
    if(value>99)value=0;
    return value;
}
