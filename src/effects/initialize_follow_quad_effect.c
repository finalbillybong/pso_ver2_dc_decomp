typedef struct Vector {float x,y,z;} Vector;typedef struct Quad {float a,b,c,d;} Quad;
typedef struct Texture {unsigned int unknown0,count;} Texture;
typedef struct GeometryTable {char unknown0[40];void *first,*second;} GeometryTable;
typedef struct TextureTable {char unknown0[20];Texture *texture;} TextureTable;
typedef struct Manager {char unknown0[1068];GeometryTable *geometry;TextureTable *textures;} Manager;
typedef struct Followed {char unknown0[60];Vector position;} Followed;
typedef struct Object {void *resource;char unknown4[20];void *dispatch;unsigned short unknown28,size;char unknown32[8];void *mesh;char unknown44[12];void *material;char unknown60[48];Vector scale;char unknown120[28];Texture *texture;float end,step,time;Quad quad;int state,mode;Vector position;int kind;float rate;int phase;} Object;
typedef char check_layout[sizeof(Object)==212 && sizeof(Vector)==12 && sizeof(Quad)==16 && (unsigned long)&((Texture *)0)->count==4 && (unsigned long)&((GeometryTable *)0)->first==40 && (unsigned long)&((GeometryTable *)0)->second==44 && (unsigned long)&((TextureTable *)0)->texture==20 && (unsigned long)&((Manager *)0)->geometry==1068 && (unsigned long)&((Manager *)0)->textures==1072 && (unsigned long)&((Followed *)0)->position==60 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->mesh==40 && (unsigned long)&((Object *)0)->material==56 && (unsigned long)&((Object *)0)->scale==108 && (unsigned long)&((Object *)0)->texture==148 && (unsigned long)&((Object *)0)->end==152 && (unsigned long)&((Object *)0)->step==156 && (unsigned long)&((Object *)0)->time==160 && (unsigned long)&((Object *)0)->quad==164 && (unsigned long)&((Object *)0)->state==180 && (unsigned long)&((Object *)0)->mode==184 && (unsigned long)&((Object *)0)->position==188 && (unsigned long)&((Object *)0)->kind==200 && (unsigned long)&((Object *)0)->rate==204 && (unsigned long)&((Object *)0)->phase==208 ? 1:-1];
extern Object *base(Object *,void *);extern Manager *manager;extern char dispatch[];extern void *resource;extern Quad quads[];extern Followed *lookup(unsigned short);extern int emit(int,void *,void *,int);
Object *initialize_follow_quad_effect(Object *o,void *context,unsigned int index,unsigned short id) {
 Object **home=&o;Followed *target;
 base(o,context);o->dispatch=dispatch;o->resource=resource;o->size=212;
 o->material=manager->geometry->first;o->texture=manager->textures->texture;o->time=0.0f;
 o->end=(float)o->texture->count-1.0f;o->step=0.1f;
 o->mesh=manager->geometry->second;o->scale.x=0.0f;o->scale.y=0.0f;o->scale.z=0.0f;
 o->quad=*(Quad *)((char *)quads+(index<<4));
 target=lookup(id);if(target) o->position=target->position;
 o->position.y+=2.0f;o->state=0;o->mode=0;o->kind=55;o->rate=0.1f;o->phase=2;
 emit(0x2002e,0,0,0);return o;
}
