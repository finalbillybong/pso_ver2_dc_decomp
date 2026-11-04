#include "src/include/classes/TObjVoloptShutter.h"
extern void operation_8c15b190(void *);
extern void operation_8c15b130(void *);
void TObjVoloptShutter_update_8c15b048(TObjVoloptShutter *o)
{
    if (o->f24 != 0) {
        if (o->f24 != 1) {
            if (o->f24 != 2) {
                return;
            }
        } else {
            operation_8c15b190((void *)o);
            return;
        }
        operation_8c15b130((void *)o);
    }
}
