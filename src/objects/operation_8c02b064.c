#include "src/include/types/SubcommandPacket.h"
extern int g_8c418248;
extern int g_8c4627c8;
extern void call_8c02b0c8(int);
void handle_6x7A_enable_stealth_suit_effect_8c02b064(SubcommandPacket *o)
{
    int v1;
    unsigned short v2;
    int v7;
    int v8;
    int v11;
    int v14;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->entity_id;
    v7 = (int)0;
    if (v1 == 0) {
        if ((unsigned short)v2 == g_8c418248) {
            v7 = (int)1;
        }
    }
    v8 = (int)(v7 == 0);
    if (v8 != 0) {
        if ((unsigned short)v2 == 0xffff) {
            v14 = (int)0;
        } else {
            if ((int)(unsigned short)v2 >= 0xc) {
                v11 = (int)0;
            } else {
                v11 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
            }
            v14 = (int)v11;
        }
        if (v14 != 0) {
            call_8c02b0c8(v14);
        }
    }
}
