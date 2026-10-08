/* Provisional names; preserve signed fields, callback order and exact ranges. */
#include "src/include/resource_widget_values.h"
#define lookup_at ((WidgetActor *(*)(unsigned int))0x8c021ef8)
#define remaining_at ((int (*)(WidgetActor *))0x8c029b8c)
extern "C" void operation_1943f0(WidgetValueOwner *o){
    WidgetActor *actor=lookup_at(*(unsigned int *)0x8c418248);
    if(actor){
        WidgetActorStats *stats=actor->stats;
        if(stats){
            WidgetValueRow *row=o->table->rows[2];
            row->value=actor->query()+1;
            o->table->rows[16]->value=stats->maximum;
            o->table->rows[8]->value=stats->current;
            row=o->table->rows[12];
            row->value=remaining_at(actor)-stats->current;
        }
    }
}
