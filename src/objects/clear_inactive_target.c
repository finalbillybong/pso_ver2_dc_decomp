#include "src/include/effect_access_views.h"
void clear_inactive_target(TargetOwnerView *owner) {
 if(owner->target && (owner->target->flags & 0x800)) {
  owner->target=0;
  owner->index=0xffff;
 }
}
