#include "src/include/classes/TBoss4Zanzo.h"
typedef char check_limit[(unsigned long)&((TBoss4Zanzo *)0)->limit==72?1:-1];
typedef char check_ticks[(unsigned long)&((TBoss4Zanzo *)0)->ticks==76?1:-1];
void TBoss4Zanzo_update_8c1b319c(TBoss4Zanzo *o) { if(++o->ticks>=o->limit) o->flags|=1; }
