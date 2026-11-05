#include "src/include/classes/TAdHunLicence.h"
extern void select_mode16_wrapper_8c25f860(void);
extern void select_mode10_wrapper_8c25f874(void);
void TAdHunLicence_update_step_2_8c25f818(TAdHunLicence *o)
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
            select_mode16_wrapper_8c25f860();
            return;
        }
        select_mode10_wrapper_8c25f874();
    }
}
