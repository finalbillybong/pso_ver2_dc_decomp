#include "src/include/classes/TOKeyCave01.h"
extern int target_in_radius_8c113490(void *);
extern int call_8c1134ec(TOKeyCave01 *);
int TOKeyCave01_v16_8c135520(TOKeyCave01 *o)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)0;
    switch (o->f108) {
    case 0:
        if (o->f10c != 1) {
            t1 = target_in_radius_8c113490((void *)o);
            if (t1 == 0) {
                break;
            }
        }
        v1 = (int)1;
        break;
    case 1:
        t2 = call_8c1134ec(o);
        v1 = (int)t2;
    }
    return (int)(v1);
}
