/* Provisional address-based name; preserve the observed call and state sequence. */
#include "src/include/sample_storage.h"
#define sample_at ((void (*)(Sample12 *))0x8c36d3ca)
#define convert_at ((void (*)(Sample12 *,unsigned int *))0x8c36d4c0)
void operation_0c63c4(void){
    Sample12 sample;
    unsigned int value;
    sample_at(&sample);
    convert_at(&sample,&value);
    *(unsigned int *)0x8c46f6c8=(value/440+1)*440;
}
