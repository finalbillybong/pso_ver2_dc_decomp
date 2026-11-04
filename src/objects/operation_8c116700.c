#include "src/include/classes/TFogEditor.h"
extern int call_8c1181ec(TFogEditor *, void *);
extern void set_fields_8c117e20(void *);
void operation_8c116700(TFogEditor *o)
{
    int t1;
    if (o->field540 == 6) {
        t1 = call_8c1181ec(o, ((char *)o + 0x5a4));
        if (t1 != 0) {
            set_fields_8c117e20((void *)o);
        }
    }
}
