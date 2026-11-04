#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c0c7b80(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c2668cc;
        operation_8c052124((void *)o);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3f8)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
