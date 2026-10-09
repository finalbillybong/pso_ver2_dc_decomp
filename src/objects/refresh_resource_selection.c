typedef struct Object {char unknown0[32];int index;void *widgets[25];char unknown136[16];int phase,last;char unknown160[36];short count,kind,slots[8];} Object;
typedef char check_layout[sizeof(Object)==216 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->phase==152 && (unsigned long)&((Object *)0)->last==156 && (unsigned long)&((Object *)0)->count==196 && (unsigned long)&((Object *)0)->kind==198 && (unsigned long)&((Object *)0)->slots==200 ? 1:-1];
extern short code(void *);extern void update(Object *,short *);
static inline int is_entry(short code) {int within;if(code==440)return 0;within=0;if(code>=19 && code<=29)within=1;if(within)return 0;return 1;}
void refresh_resource_selection(Object *o) {
 short chosen=code(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));
 if(chosen!=o->last) {
  switch(o->phase) {
   case 0:
    if(is_entry(chosen)) {if(o->count<8) *(short *)((char *)o->slots+((unsigned int)o->count++<<1))=chosen;o->phase=1;}
    else if(o->count>0) *(short *)((char *)&o->kind+((unsigned int)o->count<<1))=chosen;
    break;
   case 1:
    if(is_entry(chosen)) {if(o->count>0) *(short *)((char *)&o->kind+((unsigned int)o->count<<1))=chosen;}
    else {if(o->count>0) *(short *)((char *)o->slots+((unsigned int)--o->count<<1))=-1;o->phase=0;}
    break;
  }
  update(o,&o->count);o->last=chosen;
 }
}
