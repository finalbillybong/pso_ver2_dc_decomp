typedef struct Vector {float x,y,z;} Vector;
typedef struct Angles {int x,y,z;} Angles;
typedef struct Resource16 {char unknown0[8]; void *first,*second;} Resource16;
typedef struct Resource8 {char unknown0[4]; void *value;} Resource8;
typedef struct Manager {char unknown0[1068]; Resource16 *geometry; Resource8 *textures;} Manager;
typedef struct Object {void *resource; char unknown4[20];void *dispatch;unsigned short unknown28,size;char unknown32[116];int state,flags[5];void *first[6],*second[6],*texture[6];float scale1,scale2,progress;} Object;
typedef char check_layout[sizeof(Resource16)==16 && sizeof(Resource8)==8 && sizeof(Object)==256 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->state==148 && (unsigned long)&((Object *)0)->flags==152 && (unsigned long)&((Object *)0)->first==172 && (unsigned long)&((Object *)0)->second==196 && (unsigned long)&((Object *)0)->texture==220 && (unsigned long)&((Object *)0)->scale1==244 && (unsigned long)&((Object *)0)->scale2==248 && (unsigned long)&((Object *)0)->progress==252 && (unsigned long)&((Manager *)0)->geometry==1068 && (unsigned long)&((Manager *)0)->textures==1072 ? 1:-1];
extern Object *base(Object *,void *);extern char dispatch[],configuration[];extern void *resource;extern Manager *manager;extern unsigned int geometry_indices[],texture_indices[];extern Vector position;extern Angles angles;
extern int start(int),emit(int,Vector *,void *,int);extern void set_positions(Vector *,Vector *,Angles *),configure(void *,int);
Object *initialize_resource_array_effect(Object *o,void *context) {
 Object **home=&o;Manager *m;int i,j;
 base(o,context);o->dispatch=dispatch;o->resource=resource;o->size=256;m=manager;
 for(i=0;i<6;i++) {
  unsigned int offset=(unsigned int)i<<2;
  unsigned int index=*(unsigned int *)((char *)geometry_indices+offset);
  *(void **)((char *)o->first+offset)=*(void **)((char *)&m->geometry[0].first+(index<<4));
  *(void **)((char *)o->second+offset)=*(void **)((char *)&m->geometry[0].second+(index<<4));
  *(void **)((char *)o->texture+offset)=*(void **)((char *)&m->textures[0].value+(*(unsigned int *)((char *)texture_indices+offset)<<3));
 }
 o->scale1=-0.5f;o->scale2=-0.5f;
 for(j=0;j<5;j++) *(int *)((char *)o->flags+((unsigned int)j<<2))=0;
 start(2);set_positions(&position,&position,&angles);configure(configuration,0x416c);o->progress=0.0f;emit(0x30021,&position,0,1);o->state=0;return o;
}
