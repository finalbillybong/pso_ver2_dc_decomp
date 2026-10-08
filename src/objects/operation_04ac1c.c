/* Provisional address-based name; preserve observed guards, ordering and field widths. */
#include "src/include/notice_dispatch.h"
#define send_at ((void (*)(Notice *))0x8c0368a8)
void operation_04ac1c(Source *source,unsigned short target,unsigned char mode,unsigned char value){
    Notice n;
    n.target_id=65535;
    n.mode=0;
    n.value=0;
    n.kind=0x9a;
    n.size=2;
    n.source_id=source->id;
    n.target_id=target;
    n.mode=mode;
    n.value=value;
    send_at(&n);
}
