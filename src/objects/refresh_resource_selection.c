#include "src/include/types/ResourceSelection.h"
typedef char check_layout[(unsigned long)&((ResourceSelection *)0)->index==32 && (unsigned long)&((ResourceSelection *)0)->widgets==36 && (unsigned long)&((ResourceSelection *)0)->phase==152 && (unsigned long)&((ResourceSelection *)0)->last==156 && (unsigned long)&((ResourceSelection *)0)->option==196 && (unsigned long)&((ResourceSelection *)0)->limit==198 && (unsigned long)&((ResourceSelection *)0)->slots==200 ? 1:-1];
extern short code(void *);extern void update(ResourceSelection *,short *);
static inline int is_entry(short code) {int within;if(code==440)return 0;within=0;if(code>=19 && code<=29)within=1;if(within)return 0;return 1;}
void refresh_resource_selection(ResourceSelection *o) {
 short chosen=code(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));
 if(chosen!=o->last) {
  switch(o->phase) {
   case 0:
    if(is_entry(chosen)) {if(o->option<8) *(short *)((char *)o->slots+((unsigned int)o->option++<<1))=chosen;o->phase=1;}
    else if(o->option>0) *(short *)((char *)&o->limit+((unsigned int)o->option<<1))=chosen;
    break;
   case 1:
    if(is_entry(chosen)) {if(o->option>0) *(short *)((char *)&o->limit+((unsigned int)o->option<<1))=chosen;}
    else {if(o->option>0) *(short *)((char *)o->slots+((unsigned int)--o->option<<1))=-1;o->phase=0;}
    break;
  }
  update(o,&o->option);o->last=chosen;
 }
}
