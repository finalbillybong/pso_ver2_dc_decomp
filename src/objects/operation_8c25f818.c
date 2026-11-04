#include "src/include/classes/TAdHunLicence.h"
extern void operation_8c25f860(void);
extern void operation_8c25f874(void);
void operation_8c25f818(TAdHunLicence *o)
{
    char *v1;
    v1 = (char *)o->f24;
    o->f24 += 1;
    if ((float)(int)v1 > 4.5f) {
        if (o->f30 != 0) {
            if (o->f30 != 1) {
                return;
            }
        } else {
            operation_8c25f860();
            return;
        }
        operation_8c25f874();
    }
}
