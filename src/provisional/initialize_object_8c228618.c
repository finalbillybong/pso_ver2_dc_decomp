#include "src/include/vector3.h"
/* Provisional prefixes, field widths and table strides from raw accesses. */
typedef struct Entry228618 { void *first,*second,*third; } Entry228618;
typedef struct Model228618 { char unknown0[8]; void *first,*second; } Model228618;
typedef struct Motion228618 { int unknown0; void *value; } Motion228618;
typedef struct Root228618 { char unknown0[1068]; char *models,*motions; } Root228618;
typedef struct Object228618 {
 unsigned int tag; char unknown4[20]; void *dispatch; short unknown28; unsigned short size30;
 char unknown32[28]; Vector3 position; char unknown72[76]; int counters[4];
 Entry228618 first[6],second[2]; Vector3 input; int argument,zero276; float value280,value284;
} Object228618;
#define CHECK(type,field,offset) typedef char check_##type##_##field[(unsigned long)&((type *)0)->field==offset?1:-1]
CHECK(Model228618,first,8); CHECK(Model228618,second,12); CHECK(Motion228618,value,4);
CHECK(Root228618,models,1068); CHECK(Root228618,motions,1072);
CHECK(Entry228618,first,0); CHECK(Entry228618,second,4); CHECK(Entry228618,third,8);
typedef char check_entry_size[sizeof(Entry228618)==12?1:-1];
CHECK(Object228618,tag,0); CHECK(Object228618,dispatch,24); CHECK(Object228618,size30,30); CHECK(Object228618,position,60);
CHECK(Object228618,counters,148); CHECK(Object228618,first,164); CHECK(Object228618,second,236); CHECK(Object228618,input,260);
CHECK(Object228618,argument,272); CHECK(Object228618,zero276,276); CHECK(Object228618,value280,280); CHECK(Object228618,value284,284);
typedef char check_object_size[sizeof(Object228618)==288?1:-1];
#define INDEX(table,i) (*(unsigned int *)((char *)(table)+((unsigned int)(i)<<2)))
Object228618 *initialize_object_8c228618(Object228618 *o,void *owner,Vector3 *position,int argument) {
 Object228618 **home=&o; Root228618 *root; int i; Vector3 temp;
 ((void (*)(Object228618 *,void *))0x8c01d1ec)(o,owner);
 o->dispatch=(void *)0x8c278c18; o->tag=*(unsigned int *)0x8c337df0; o->size30=288;
 o->input=*position; o->argument=argument;
 root=*(Root228618 **)0x8c4e2280;
 for(i=0;i<6;i++) {
  unsigned int model_offset=INDEX(0x8c326b54,i)<<4;
  *(void **)((char *)&o->first[0].first+i*sizeof(Entry228618))=*(void **)((char *)&((Model228618 *)root->models)->first+model_offset);
  *(void **)((char *)&o->first[0].second+i*sizeof(Entry228618))=*(void **)((char *)&((Model228618 *)root->models)->second+model_offset);
  *(void **)((char *)&o->first[0].third+i*sizeof(Entry228618))=*(void **)((char *)&((Motion228618 *)root->motions)->value+(INDEX(0x8c337e54,i)<<3));
 }
 for(i=0;i<2;i++) {
  unsigned int model_offset=INDEX(0x8c32658c,i)<<4;
  *(void **)((char *)&o->second[0].first+i*sizeof(Entry228618))=*(void **)((char *)&((Model228618 *)root->models)->first+model_offset);
  *(void **)((char *)&o->second[0].second+i*sizeof(Entry228618))=*(void **)((char *)&((Model228618 *)root->models)->second+model_offset);
  *(void **)((char *)&o->second[0].third+i*sizeof(Entry228618))=*(void **)((char *)&((Motion228618 *)root->motions)->value+(INDEX(0x8c337e6c,i)<<3));
 }
 o->value280=-0.5f;
 for(i=0;i<4;i++) o->counters[i]=0;
 ((void (*)(int))0x8c0a2144)(2);
 temp=*(Vector3 *)0x8c337e80; *(int *)&temp.y=o->argument;
 ((void (*)(Vector3 *,Vector3 *,Vector3 *))0x8c0a56a0)(&o->input,&o->input,&temp);
 ((void (*)(void *,int))0x8c0a5400)((void *)0x8c337e74,16384);
 ((void (*)(int,Vector3 *,int,int))0x8c05fbf8)(0x30024,&o->position,0,1);
 o->value284=0.0f; o->zero276=0; return o;
}
