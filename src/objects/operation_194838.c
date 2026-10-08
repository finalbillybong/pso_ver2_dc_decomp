/* Provisional names; preserve signed fields and observed callback order. */
#include "src/include/widget_stat_values.h"
#define lookup_at ((WidgetStatActor *(*)(unsigned int))0x8c021ef8)
void operation_194838(WidgetStatOwner *o){
    WidgetStatActor *actor=lookup_at(*(unsigned int *)0x8c418248);
    if(actor){
        o->table->rows[3]->value=actor->field1ca;
        o->table->rows[9]->value=actor->field1ce;
        o->table->rows[15]->value=actor->field1cc;
        o->table->rows[21]->value=actor->field1d0;
        o->table->rows[27]->value=actor->field1d2;
    }
}
