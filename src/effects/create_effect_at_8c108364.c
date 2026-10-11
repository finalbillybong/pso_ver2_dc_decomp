extern int query_vector_position(void *, float *);
extern void *create_effect_7cc0(float *, int, int, int);

void create_effect_at_8c108364(void *source, int owner)
{
    float position[3];
    query_vector_position(source, position);
    create_effect_7cc0(position, 0xe4, 0, owner);
}
