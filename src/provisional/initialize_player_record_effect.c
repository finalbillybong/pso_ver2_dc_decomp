typedef struct Resource16 {char unknown0[8];void *first,*second;} Resource16;
typedef struct Resource8 {char unknown0[4];void *value;} Resource8;
typedef struct Manager {char unknown0[1068];Resource16 *geometry;Resource8 *textures;} Manager;
typedef struct Settings {char unknown0[12];int value;float scale;} Settings;
typedef struct Entry {int enabled;short id;char name[16];char unknown22[2];Settings *settings;int value;float scale;void *texture;} Entry;
typedef struct Actor {char unknown0[892];int kind;char unknown896[1124];char name[16];char unknown2036[33];signed char variant;} Actor;
typedef struct Object {void *resource;char unknown4[20];void *dispatch;unsigned short unknown28,size;char unknown32[116];void *first,*second,*texture;int mode;Entry entries[4];int count,state;float scale;void *child;} Object;
extern Object *base(Object *,void *);extern char dispatch[],label[],child_configuration[];extern void *resource,*arena;extern Manager *manager;extern Settings settings[];extern int setting_offsets[],texture_offsets[],texture_indices[],special;
extern Actor *lookup(unsigned int);extern char *copy_name(char *,const char *,unsigned int);extern void stop(void),reset_colors(void);extern int set_label(const char *);extern void *attach(Object *),*allocate(void *,int),*construct_child(void *,void *,int,int);extern int first_value(void),second_value(void);
static inline int enabled(void) {return special!=0;}
Object *initialize_player_record_effect(Object *o,void *context) {
 Object **home=&o;Manager *m;int i,j;
 base(o,context);o->dispatch=dispatch;o->resource=resource;o->size=340;
 m=manager;o->first=m->geometry[16].first;o->second=m->geometry[16].second;o->texture=m->textures[56].value;o->count=0;
 for(i=0;i<4;i++) {o->entries[i].enabled=0;o->entries[i].name[0]=0;}
 for(j=0;j<4;j++) {
  Actor *actor=lookup(j);
  if(actor && actor->kind==14) {
   Entry *entry=&o->entries[o->count];signed char variant;
   entry->enabled=1;entry->id=j;copy_name(entry->name,actor->name,16);
   variant=actor->variant;
   entry->settings=&settings[*(int *)((char *)setting_offsets+((unsigned int)o->count<<2))+(variant<<2)];
   entry->value=entry->settings->value;entry->scale=entry->settings->scale;
   entry->texture=*(void **)((char *)&manager->textures[0].value+((unsigned int)*(int *)((char *)texture_indices+((unsigned int)(*(int *)((char *)texture_offsets+((unsigned int)o->count<<2))+(variant<<1))<<2))<<3));
   o->count++;
  }
 }
 o->scale=-0.3f;stop();set_label(label+13);reset_colors();attach(o);o->child=0;
 if(enabled()) {void *child=allocate(arena,104);if(child) {int first=first_value();int second=second_value();construct_child(child,child_configuration,first,second);}o->child=child;}
 o->state=0;o->mode=0;return o;
}
typedef char check_Resource16[sizeof(Resource16)==16 && (unsigned long)&((Resource16 *)0)->first==8 && (unsigned long)&((Resource16 *)0)->second==12 ? 1:-1];
typedef char check_Resource8[sizeof(Resource8)==8 && (unsigned long)&((Resource8 *)0)->value==4 ? 1:-1];
typedef char check_Manager[sizeof(Manager)==1076 && (unsigned long)&((Manager *)0)->geometry==1068 && (unsigned long)&((Manager *)0)->textures==1072 ? 1:-1];
typedef char check_Settings[sizeof(Settings)==20 && (unsigned long)&((Settings *)0)->value==12 && (unsigned long)&((Settings *)0)->scale==16 ? 1:-1];
typedef char check_Entry[sizeof(Entry)==40 && (unsigned long)&((Entry *)0)->enabled==0 && (unsigned long)&((Entry *)0)->id==4 && (unsigned long)&((Entry *)0)->name==6 && (unsigned long)&((Entry *)0)->settings==24 && (unsigned long)&((Entry *)0)->value==28 && (unsigned long)&((Entry *)0)->scale==32 && (unsigned long)&((Entry *)0)->texture==36 ? 1:-1];
typedef char check_Actor[sizeof(Actor)==2072 && (unsigned long)&((Actor *)0)->kind==892 && (unsigned long)&((Actor *)0)->name==2020 && (unsigned long)&((Actor *)0)->variant==2069 ? 1:-1];
typedef char check_Object[sizeof(Object)==340 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->first==148 && (unsigned long)&((Object *)0)->second==152 && (unsigned long)&((Object *)0)->texture==156 && (unsigned long)&((Object *)0)->mode==160 && (unsigned long)&((Object *)0)->entries==164 && (unsigned long)&((Object *)0)->count==324 && (unsigned long)&((Object *)0)->state==328 && (unsigned long)&((Object *)0)->scale==332 && (unsigned long)&((Object *)0)->child==336 ? 1:-1];
