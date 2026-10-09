typedef struct Actor { char unknown0[3012]; int busy; } Actor;
typedef void (*Callback)(Actor *);
typedef struct View { void *name; unsigned short flags; char unknown6[18]; void *dispatch; short unknown28; unsigned short size; unsigned short identifier; short ticks; Callback callback; } View;
typedef char check_busy[(unsigned long)&((Actor *)0)->busy==3012?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==34?1:-1];
typedef char check_callback[(unsigned long)&((View *)0)->callback==36?1:-1];
typedef char check_prefix[sizeof(View)==40?1:-1];
extern Actor *lookup_at(unsigned int);
void run_actor_callback_when_idle(View *o) { Actor *actor=lookup_at(o->identifier);
 if(!actor->busy) { if(o->callback) o->callback(actor);o->flags|=1; }
}
