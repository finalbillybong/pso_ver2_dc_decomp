extern float compute_at(void *,void *,float);
void store_actor_scale(float *o,void *actor,float scale) { *o=compute_at(o,actor,scale); }
