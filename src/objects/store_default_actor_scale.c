extern float compute_at(void *,void *,float);
void store_default_actor_scale(float *o,void *actor) { *o=compute_at(o,actor,1.0f); }
