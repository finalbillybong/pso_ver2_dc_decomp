#include "src/include/classes/TOContainerAncientEnemy.h"
extern void call_8c027090(TOContainerAncientEnemy *);
void TOContainerAncientEnemy_vslot87_8c1e49f0(TOContainerAncientEnemy *o)
{
    switch (o->f30a) {
    case 0:
        if (o->f380 != 0) {
            call_8c027090(o);
        }
    }
}
