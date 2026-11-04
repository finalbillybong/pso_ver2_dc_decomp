#include "src/include/types/SubcommandPacket.h"
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x350];
    int f350;
};
void handle_6x23_set_player_visible_8c02a8f0(SubcommandPacket *o)
{
    int v1;
    S_vv4 *v4;
    if ((unsigned short)o->entity_id == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if ((int)(unsigned short)o->entity_id >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->entity_id << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    if (v4 != 0) {
        v4->f350 &= -0x400001;
    }
}
