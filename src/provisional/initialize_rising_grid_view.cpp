struct Base {void *name;char unknown4[20];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void configure(void *);virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual int visible(float,float);};
struct View:Base {char unknown28[2];unsigned short size;char unknown32[8];void *transform;char unknown44[12];void *resource;float x,y,z;char unknown72[28];unsigned int color;char unknown104[32];int owner;char unknown140[84];int count,state;float strength;char unknown236[8];void *draw_data;float range,radius;int owner_copy;float target,speed;};
typedef char check_base[sizeof(Base)==28&&sizeof(View)==268?1:-1];
typedef char check_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_transform[(unsigned long)&((View *)0)->transform==40?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==56?1:-1];
typedef char check_x[(unsigned long)&((View *)0)->x==60?1:-1];
typedef char check_y[(unsigned long)&((View *)0)->y==64?1:-1];
typedef char check_z[(unsigned long)&((View *)0)->z==68?1:-1];
typedef char check_color[(unsigned long)&((View *)0)->color==100?1:-1];
typedef char check_owner[(unsigned long)&((View *)0)->owner==136?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==224?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==228?1:-1];
typedef char check_strength[(unsigned long)&((View *)0)->strength==232?1:-1];
typedef char check_draw_data[(unsigned long)&((View *)0)->draw_data==244?1:-1];
typedef char check_range[(unsigned long)&((View *)0)->range==248?1:-1];
typedef char check_radius[(unsigned long)&((View *)0)->radius==252?1:-1];
typedef char check_owner_copy[(unsigned long)&((View *)0)->owner_copy==256?1:-1];
typedef char check_target[(unsigned long)&((View *)0)->target==260?1:-1];
typedef char check_speed[(unsigned long)&((View *)0)->speed==264?1:-1];
extern "C" {void base_at(View *,void *);extern void *object_name;}
extern "C" View *initialize_rising_grid_view(View *o,void *parent,void *parameter) {View **home=&o;base_at(o,parent);*(void **)((char *)o+24)=(void *)0x8c26a014;o->name=object_name;o->size=268;o->configure(parameter);o->state=0;o->target=o->y;o->y-=30.0f;o->speed=0.15f;o->owner_copy=o->owner;o->range=300.0f;o->radius=40.0f;return o;}
