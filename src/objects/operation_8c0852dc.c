#include "src/include/classes/TObjContainerBase.h"
extern void call_8c027090(TObjContainerBase *);
void TObjContainerBase_v87_8c0852dc(TObjContainerBase *o)
{
    switch (o->f30a) {
    case 1:
        break;
    case 0:
        if (o->f380 != 0) {
            call_8c027090(o);
        }
    }
}
