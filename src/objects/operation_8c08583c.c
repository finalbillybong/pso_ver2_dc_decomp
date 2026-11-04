#include "src/include/classes/TObjContainerAbeEnemy.h"
extern void call_8c027090(TObjContainerAbeEnemy *);
void TObjContainerAbeEnemy_v87_8c08583c(TObjContainerAbeEnemy *o)
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
