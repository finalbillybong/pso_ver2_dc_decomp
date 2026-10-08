#include "src/include/vector3.h"
extern void *allocate_at(void *,unsigned int);
extern void initialize_a(void *,void *,Vector3 *);
extern void load_at(void *);
extern void initialize_b(void *,void *,void *);
#define initialize_c ((void (*)(void *,void *,int))0x8c0c4ad8)
void initialize_render_sequence(void){Vector3 position=*(Vector3 *)0x8c3060d8;void *object=allocate_at(*(void **)0x8c4d97e0,32);if(object)initialize_a(object,*(void **)0x8c44be98,&position);load_at((void *)0x8c2e2e84);((void (*)(void))0x8c0405b4)();*(void **)0x8c4689e0=*(void **)0x8c44be9c;((void (*)(void))0x8c0a2c74)();((void (*)(void))0x8c031328)();((void (*)(void))0x8c09f220)();{void *context=*(void **)0x8c4db9e0;int index=*(int *)0x8c418250;((void (*)(int,int,void *))0x8c01e790)(0,index,context);}((void (*)(void *))0x8c0a1b78)(((void *(*)(int))0x8c021ef8)(*(int *)0x8c418254));object=allocate_at(*(void **)0x8c4d97e0,36);if(object)initialize_b(object,*(void **)0x8c44be84,(void *)0x8c0c5b6c);object=allocate_at(*(void **)0x8c4d97e0,44);if(object)initialize_c(object,*(void **)0x8c44be84,0);}
