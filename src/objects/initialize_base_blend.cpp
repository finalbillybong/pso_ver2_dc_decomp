struct View {float value,first,second,third,rate;virtual void unused0();virtual void unused1();virtual void reset();};
typedef char check_rate[(unsigned long)&((View *)0)->rate==16?1:-1];
typedef char check_size[sizeof(View)==24?1:-1];
extern "C" View *initialize_base_blend(View *o) {*(void **)((char *)o+20)=(void *)0x8c269e24;o->rate=0.04f;o->reset();return o;}
