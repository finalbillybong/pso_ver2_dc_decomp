#include "src/include/types/SubcommandPacket.h"
extern int call_8c012a14(short);
extern void call_8c144d24(int, SubcommandPacket *);
void handle_6x13_de_rol_le_boss_actions_8c144cd4(SubcommandPacket *o)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = call_8c012a14(o->entity_id);
    if (t1 != 0) {
        call_8c144d24(t1, o);
    }
    /* TODO 8c144cd4..8c144cf0
     * 8c144cd4 mov.l r14,@-r15
     * 8c144cd6 sts.l PR,@-r15
     * 8c144cd8 mov r4,r14
     * 8c144cda mov.w @(0x2,r14),r0
     * 8c144cdc mov.l 0x8c144cf4,r1
     * 8c144cde jsr @r1
     * 8c144ce0 mov r0,r4
     * 8c144ce2 tst r0,r0
     * 8c144ce4 bt 0x8c144cee
     * 8c144ce6 mov r0,r4
     * 8c144ce8 mov.l 0x8c144cf8,r0
     * 8c144cea jsr @r0
     * 8c144cec mov r14,r5
     * 8c144cee lds.l @r15+,PR
     * 8c144cf0 rts
     */
}
