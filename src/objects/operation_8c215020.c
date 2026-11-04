#include "src/include/classes/TObjLoadGmPlNjReq.h"
extern void initialize_base_8c0db1d0(void *, int);
TObjLoadGmPlNjReq *operation_8c215020(TObjLoadGmPlNjReq *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c335f68));
    o->vtable = (void *)0x8c278238;
    o->f68 = 1;
    o->f6c = 2;
    o->f70 = 2;
    o->f64 = 0x1000000;
    return o;
}
