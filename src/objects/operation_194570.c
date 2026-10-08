/* Provisional names; preserve signed fields and observed callback order. */
#include "src/include/widget_stat_values.h"
extern unsigned int selected_actor;
#define lookup_at ((WidgetStatActor *(*)(unsigned int))0x8c021ef8)
#define current_at ((int (*)(WidgetStatActor *,WidgetStatValues *))0x8c029a48)
#define maximum_at ((void (*)(WidgetStatActor *,WidgetStatValues *))0x8c029a98)
static inline void initialize(WidgetStatValues *s){
    s->value[5]=0;
    s->value[4]=0;
    s->value[3]=0;
    s->value[2]=0;
    s->value[1]=0;
    s->value[0]=0;
    s->value[10]=0;
    s->value[9]=0;
    s->value[8]=0;
    s->value[7]=0;
    s->value[6]=0;
}
void operation_194570(WidgetStatOwner *o){
    WidgetStatValues current,maximum;
    WidgetStatActor *actor;
    initialize(&current);
    initialize(&maximum);
    actor=lookup_at(selected_actor);
    if(actor){
        o->table->rows[3]->value=actor->field1aa+actor->field1ac;
        o->table->rows[9]->value=actor->field1b0;
        o->table->rows[21]->value=actor->field1b2;
        o->table->rows[27]->value=actor->field1ae;
        {
            WidgetStatSource *stats=actor->stats;
            if(stats){
                o->table->rows[15]->value=stats->value02;
                o->table->rows[33]->value=stats->value0c;
            }
        }
    }
    if(current_at(actor,&current)){
        maximum_at(actor,&maximum);
        {
            WidgetStatRow *row=o->table->rows[5];
            row->value=current.value[0];
            if(maximum.value[0]<=current.value[0])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
        {
            WidgetStatRow *row=o->table->rows[11];
            row->value=current.value[1];
            if(maximum.value[1]<=current.value[1])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
        {
            WidgetStatRow *row=o->table->rows[23];
            row->value=current.value[3];
            if(maximum.value[3]<=current.value[3])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
        {
            WidgetStatRow *row=o->table->rows[29];
            row->value=current.value[4];
            if(maximum.value[4]<=current.value[4])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
        {
            WidgetStatRow *row=o->table->rows[17];
            row->value=current.value[2];
            if(maximum.value[2]<=current.value[2])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
        {
            WidgetStatRow *row=o->table->rows[35];
            row->value=current.value[5];
            if(maximum.value[5]<=current.value[5])row->color=0xffffff00;
            else row->color=0xffffffff;
        }
    }
}
