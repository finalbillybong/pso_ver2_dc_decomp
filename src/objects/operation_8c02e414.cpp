#include "src/include/classes/TObject.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x2];
    unsigned short f02;
};
typedef struct ObjectData {

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void TGameProtocol_dispatch_broadcast_subcommand_8c036c38(void *, int);
extern "C" void handle_cmd_6C_6D_8c02e414(TObject *o, Arg1 *a1)
{
    o->v4((g_8c2e7ce0 + 0x2a1));
    TGameProtocol_dispatch_broadcast_subcommand_8c036c38((void *)(((char *)a1 + 0x4)), (int)(a1->f02 + -4));
}
