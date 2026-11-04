#include "src/include/types/SubcommandPacket.h"
extern int g_8c418248;
extern void call_8c184a20(int, short);
extern void call_8c184cf8(int);
void handle_6x36_8c0275b8(SubcommandPacket *o)
{
    int v1;
    int v4;
    if (g_8c418248 == 0xffff) {
        v4 = (int)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v4 = (int)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
            v4 = (int)v1;
        }
    }
    if (v4 != 0) {
        call_8c184a20((int)(v4 + 0x418), o->entity_id);
        call_8c184cf8((int)(v4 + 0x418));
    }
}
