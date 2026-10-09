typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[66]; int limit,ticks; } View;
typedef char check_limit[(unsigned long)&((View *)0)->limit==72?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==76?1:-1];
void update_record_effect_timer(View *o) { if(++o->ticks>=o->limit) o->flags|=1; }
