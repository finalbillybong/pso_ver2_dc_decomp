#include "src/include/classes/TAdHunLicence.h"
typedef struct TAdHunLicence_p28 TAdHunLicence_p28;
typedef struct TAdHunLicence_p2c TAdHunLicence_p2c;
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
void TAdHunLicence_update_step_8c25f7dc(TAdHunLicence *o)
{
    int t1;
    if (o->f28 != 0) {
        request_resource_release(o->f28);
        o->f28 = (TAdHunLicence_p28 *)0;
    }
    if (o->f2c != 0) {
        t1 = operation_8c1571f4(o->f2c);
        o->f30 = t1;
        request_resource_release(o->f2c);
        o->f2c = (TAdHunLicence_p2c *)0;
    }
}
