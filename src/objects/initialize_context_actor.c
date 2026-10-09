typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[816];float first,second;unsigned short identifier;char unknown858[2];int visible;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==848?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==852?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==856?1:-1];
typedef char check_visible[(unsigned long)&((View *)0)->visible==860?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_context_actor(View *o,void *parent) {base_at(o,parent);o->dispatch=(void *)0x8c26dc40;o->name=object_name;o->size=864;o->first=o->second=0.0f;o->identifier=65535;o->visible=1;return o;}
