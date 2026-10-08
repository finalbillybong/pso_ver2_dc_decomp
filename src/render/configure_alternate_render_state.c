#define set_vector_at ((void (*)(float,float,float))0x8c3a9cb4)
#define set_pair_at ((void (*)(float,float))0x8c3a9cec)
void configure_alternate_render_state(void) {
 set_vector_at(0.0f,0.0f,1.0f);
 set_pair_at(2.0f,0.5f);
}
