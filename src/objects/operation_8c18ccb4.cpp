#include "src/include/classes/TWindowMainMenuCommand.h"
typedef struct TWindowMainMenuCommand_p6c TWindowMainMenuCommand_p6c;
extern "C" void operation_8c199f24(int, int);
extern "C" void TWindowMainMenuCommand_render_8c18ccb4(TWindowMainMenuCommand *o)
{
    int t1;
    t1 = o->v5();
    operation_8c199f24((int)(o->f6c), t1);
}
