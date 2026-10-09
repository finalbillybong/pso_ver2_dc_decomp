typedef struct State { float value; unsigned int flags; } State;
typedef char check_flags[(unsigned long)&((State *)0)->flags==4?1:-1];
extern float scale_at(void *,void *,float);
void initialize_scale_state(State *o) { o->value=1.0f; o->flags=0; }
float compute_default_scale(void *o,void *actor) { return scale_at(o,actor,1.0f); }
