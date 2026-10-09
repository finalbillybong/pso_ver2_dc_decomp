typedef struct View { char unknown0[8]; float scale; unsigned int flags; } View;
typedef struct Actor { char unknown0[1300]; unsigned int flags; float scale; } Actor;
typedef char check_view_scale[(unsigned long)&((View *)0)->scale==8?1:-1];
typedef char check_view_flags[(unsigned long)&((View *)0)->flags==12?1:-1];
typedef char check_actor_flags[(unsigned long)&((Actor *)0)->flags==1300?1:-1];
typedef char check_actor_scale[(unsigned long)&((Actor *)0)->scale==1304?1:-1];
extern int query_at(Actor *);
static inline int view_scaled(View *o) { return (o->flags&8)!=0; }
static inline int actor_scaled(Actor *o) { return (o->flags&1)!=0; }
float compute_actor_scale(View *o,Actor *actor,float scale) {
 if(query_at(actor)) scale*=0.5f;
 else if(view_scaled(o)!=0) scale*=0.75f;
 o->scale=scale;
 if(actor_scaled(actor)!=0) scale*=actor->scale;
 return scale;
}
