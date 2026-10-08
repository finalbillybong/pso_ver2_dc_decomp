/* Provisional names; preserve observed argument widths and operation ordering. */
#include "src/include/dispatch_state.h"
unsigned char operation_2391f4(BoundedBytes *object){
    unsigned char value=object->fields[0];
    if((unsigned char)value>=2)value=0;
    return value;
}
unsigned char operation_239208(BoundedBytes *object){
    unsigned char value=object->fields[1];
    if((unsigned char)value>=3)value=0;
    return value;
}
unsigned char operation_239218(BoundedBytes *object){
    unsigned char value=object->fields[2];
    if((unsigned char)value>=4)value=0;
    return value;
}
unsigned char operation_239228(BoundedBytes *object){
    unsigned char value=object->fields[3];
    if((unsigned char)value>=2)value=0;
    return value;
}
