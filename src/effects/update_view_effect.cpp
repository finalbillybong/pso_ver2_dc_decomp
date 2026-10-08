#include "src/include/view_update.h"
extern "C" void update_view_effect(ViewUpdateObject *effect){effect->ticks++;((void (*)(ViewUpdateObject *))0x8c0a3244)(effect);effect->update();((void (*)(ViewUpdateObject *))0x8c0a30a0)(effect);((void (*)(ViewUpdateObject *))0x8c0a3de4)(effect);}
