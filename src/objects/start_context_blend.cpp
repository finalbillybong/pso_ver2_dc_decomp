struct View {float value;char unknown4[16];virtual void unused0();virtual void unused1();virtual void reset();int state;};
typedef char check_state[(unsigned long)&((View *)0)->state==24?1:-1];
extern "C" void start_context_blend(View *o) {o->state=1;o->reset();}
