typedef struct Vector {float x,y,z;} Vector;
typedef struct Angles {int x,y,z;} Angles;
typedef struct Resource16 {char unknown0[8]; void *first,*second;} Resource16;
typedef struct Resource8 {char unknown0[4]; void *value;} Resource8;
typedef struct Manager {char unknown0[1068]; Resource16 *geometry; Resource8 *textures;} Manager;
typedef struct Slot {void *first,*second,*texture;} Slot;
typedef struct Object {void *resource; char unknown4[20]; void *dispatch; unsigned short unknown28,size; char unknown32[116]; Slot slots[2]; int parameter; Vector position; int heading,state; float scale;} Object;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Angles)==12 && sizeof(Resource16)==16 && sizeof(Resource8)==8 && sizeof(Manager)==1076 && sizeof(Slot)==12 && sizeof(Object)==200 && (unsigned long)&((Resource16 *)0)->first==8 && (unsigned long)&((Resource16 *)0)->second==12 && (unsigned long)&((Resource8 *)0)->value==4 && (unsigned long)&((Manager *)0)->geometry==1068 && (unsigned long)&((Manager *)0)->textures==1072 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->slots==148 && (unsigned long)&((Object *)0)->parameter==172 && (unsigned long)&((Object *)0)->position==176 && (unsigned long)&((Object *)0)->heading==188 && (unsigned long)&((Object *)0)->state==192 && (unsigned long)&((Object *)0)->scale==196 ? 1:-1];
extern Object *base(Object *,void *);
extern char dispatch[],configuration[];
extern void *resource;
extern Manager *manager;
extern unsigned int geometry_indices[],texture_indices[];
extern Angles default_angles;
extern int start(int),emit(int,Vector *,void *,int);
extern void set_positions(Vector *,Vector *,Angles *),configure(void *,int);
Object *initialize_paired_resource_effect(Object *o,void *context,Vector *position,int heading,int parameter) {
    Object **home=&o;
    Manager *m;
    int i;
    Angles angles;
    base(o,context);
    o->dispatch=dispatch;o->resource=resource;o->size=200;
    o->position=*position;o->heading=heading;o->parameter=parameter;
    m=manager;
    for(i=0;i<2;i++) {
        o->slots[i].first=*(void **)((char *)&m->geometry[0].first+(*(unsigned int *)((char *)geometry_indices+((unsigned int)i<<2))<<4));
        o->slots[i].second=*(void **)((char *)&m->geometry[0].second+(*(unsigned int *)((char *)geometry_indices+((unsigned int)i<<2))<<4));
        o->slots[i].texture=*(void **)((char *)&m->textures[0].value+(*(unsigned int *)((char *)texture_indices+((unsigned int)i<<2))<<3));
    }
    o->scale=-0.5f;
    start(2);
    angles=default_angles;angles.y=o->heading;
    set_positions(&o->position,&o->position,&angles);
    configure(configuration,0x4444);
    emit(0x30025,&o->position,0,1);
    o->state=0;
    return o;
}
