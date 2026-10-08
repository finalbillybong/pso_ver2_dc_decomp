#include "src/include/render_resource_lookups.h"
#define lookup_a ((void *(*)(void *))0x8c17948c)
#define lookup_b ((void *(*)(void *))0x8c1794a0)
#define lookup_c ((void *(*)(void *))0x8c1794b4)
#define lookup_d ((void *(*)(void *))0x8c1794c8)
void initialize_render_resource_lookups(void){RenderLookupOwner *owner=*(RenderLookupOwner **)0x8c46f9f0;int i;*(void **)0x8c46f9c0=owner->table->value24;*(void **)0x8c46f9c4=owner->table->value12;for(i=0;i<2;i++){unsigned int offset=(unsigned int)i<<2;*(void **)((char *)0x8c46f9a0+offset)=lookup_a(*(void **)((char *)0x8c2857d0+offset));*(void **)((char *)0x8c46f9a8+offset)=lookup_b(*(void **)((char *)0x8c2857d8+offset));*(void **)((char *)0x8c46f9b0+offset)=lookup_c(*(void **)((char *)0x8c2857e0+offset));*(void **)((char *)0x8c46f9b8+offset)=lookup_d(*(void **)((char *)0x8c2857e8+offset));}}
