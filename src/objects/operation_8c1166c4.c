#include "src/include/classes/TFogEditor.h"
extern int call_8c1181ec(TFogEditor *, void *);
extern void set_fields_8c117e20(void *);
void operation_8c1166c4(TFogEditor *o)
{
    int t1;
    if (o->field540 == 5) {
        t1 = call_8c1181ec(o, ((char *)o + 0x57c));
        if (t1 != 0) {
            set_fields_8c117e20((void *)o);
        }
    }
}
