#include "src/include/types/SubcommandPacket.h"
extern void call_8c027910(int);
void handle_6x31_use_medical_center_8c0278d4(SubcommandPacket *o)
{
    int v3;
    int v6;
    if ((unsigned short)o->entity_id == 0xffff) {
        v6 = (int)0;
    } else {
        if ((int)(unsigned short)o->entity_id >= 0xc) {
            v3 = (int)0;
        } else {
            v3 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->entity_id << 2));
        }
        v6 = (int)v3;
    }
    if (v6 != 0) {
        call_8c027910(v6);
    }
}
