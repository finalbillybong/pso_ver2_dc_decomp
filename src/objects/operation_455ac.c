#include "src/include/calls.h"

int operation_455ac(Object *o)
{
    int counter;
    if (o->flags & 1) {
        int *counter_slot = &o->field_2c8;
        counter = ++*counter_slot;
        if (!(counter % 45)) {
            short amount;
            if (!(o->flags & 0x02000000)) {
                void *effect = effect_create_at(o->effect_position, 37, 0x50);
                if (effect) effect_bind_at(effect, (short)o->id);
                effect_emit_at(11, o->position, 0, 0);
            }
            o->field_2c8 = 0;
            amount = o->value_330 * 0.0022222223f;
            if (amount < 1) amount = 1;
            adjust_330_at(o, amount);
            if (o->value_330 < 0) o->value_330 = 0;
            else if (o->value_330 > o->limit_198) o->value_330 = o->limit_198;
            if (o->value_330 <= 0) {
                set_330_at(o, 1);
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
