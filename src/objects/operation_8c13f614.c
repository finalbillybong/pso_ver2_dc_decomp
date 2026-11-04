#include "src/include/classes/TObjLoadGmPlNjReq.h"
extern void operation_8c13f65c(void *);
extern void call_8c13f708(TObjLoadGmPlNjReq *);
void TObjLoadGmPlNjReq_update_8c13f614(TObjLoadGmPlNjReq *o)
{
    if (!(--o->f74 >= 0)) {
        o->f04 |= 1;
        return;
    }
    switch (o->f30) {
    case 0:
        operation_8c13f65c((void *)o);
        return;
    case 1:
        call_8c13f708(o);
    }
}
