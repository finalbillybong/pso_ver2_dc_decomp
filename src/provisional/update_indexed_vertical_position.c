/* Provisional fields; preserve subtract-and-add of current position. */
typedef struct View { char unknown0[84]; float extent; int state; char unknown92[32]; float position; char unknown128[4]; short index; char unknown134[14]; void *active; } View;
typedef char check_extent[(unsigned long)&((View *)0)->extent==84?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==88?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==124?1:-1];
typedef char check_index[(unsigned long)&((View *)0)->index==132?1:-1];
typedef char check_active[(unsigned long)&((View *)0)->active==148?1:-1];
typedef char check_prefix[sizeof(View)==152?1:-1];
void update_indexed_vertical_position(View *o) {
 if(o->active && !o->state)
  o->position+=((float)(o->index*20)+9.0f-(o->extent-15.0f-13.0f)*0.5f)-o->position;
}
