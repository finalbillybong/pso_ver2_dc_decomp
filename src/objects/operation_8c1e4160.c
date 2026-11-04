#include "src/include/classes/TOContainerAncientItemCommon.h"
extern void call_8c027090(TOContainerAncientItemCommon *);
void operation_8c1e4160(TOContainerAncientItemCommon *o)
{
    switch (o->f30a) {
    case 0:
        if (o->f380 != 0) {
            call_8c027090(o);
        }
    }
}
