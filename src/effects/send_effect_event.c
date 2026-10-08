#include "src/include/effect_event.h"
#define send_at ((void (*)(EffectEventPacket *))0x8c0368a8)
void send_effect_event(EffectEvent *event) {
 EffectEventPacket packet;
 packet.command=104;
 packet.size=7;
 packet.owner=event->owner;
 packet.value=event->value;
 packet.index=event->index;
 packet.position=event->position;
 packet.token=event->token;
 send_at(&packet);
}
