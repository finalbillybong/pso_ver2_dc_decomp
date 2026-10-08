/* Provisional address-based name; preserve the observed call and state sequence. */
#include "src/include/sample_storage.h"
#define sample_at ((void (*)(Sample12 *))0x8c36d3ca)
#define convert_at ((void (*)(Sample12 *,unsigned int *))0x8c36d4c0)
extern void yield_at(void);
void operation_0c6468(void){
    Sample12 sample;
    unsigned int value;
    register unsigned int delta=356;
    for(;
    ;
    ){
        sample_at(&sample);
        convert_at(&sample,&value);
        {
            unsigned int current=value;
            if(current!=*(unsigned int *)0x8c46f6c4 && current>=*(unsigned int *)0x8c46f6c8+delta)break;
            *(unsigned int *)0x8c46f6c4=current;
            yield_at();
        }
    }
}
