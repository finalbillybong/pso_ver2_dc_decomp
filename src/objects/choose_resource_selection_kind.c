typedef struct Object {char unknown0[32];int index;void *widgets[25];int mode,selection;char unknown144[4];unsigned int flags;char unknown152[16];int result,unknown172,category,state;char unknown184[14];unsigned short kind;char unknown200[60];int step;} Object;
typedef char check_layout[sizeof(Object)==264 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->mode==136 && (unsigned long)&((Object *)0)->selection==140 && (unsigned long)&((Object *)0)->flags==148 && (unsigned long)&((Object *)0)->category==176 && (unsigned long)&((Object *)0)->state==180 ? 1:-1];
typedef char check_extended[(unsigned long)&((Object *)0)->result==168 && (unsigned long)&((Object *)0)->kind==198 && (unsigned long)&((Object *)0)->step==260 ? 1:-1];
extern int global_mode,next_state(Object *,int);extern short code(void *);extern void close(Object *);
extern int value(void *),select_value(Object *,int,int,int),input(int *,int),emit(int,void *,void *,int);
extern void set_value(void *,int),refresh(Object *),activate(Object *),cancel(Object *);
void choose_resource_selection_kind(Object *o) {
 int result=select_value(o,o->category,o->mode,value(*(void **)((char *)o->widgets+((unsigned int)o->index<<2))));
 if(result!=o->selection) {o->selection=result;set_value(*(void **)((char *)&o->widgets[1]+((unsigned int)o->index<<2)),o->selection);}
 if(input(&o->index,4)) {emit(0x50001,0,0,0);{short chosen=code(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));unsigned short kind;
 switch(chosen) {
 case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:default:kind=1;break;
 case 9:kind=2;break;
 case 10:switch(global_mode) {case 0:kind=3;break;case 1:case 2:case 3:case 4:default:kind=4;break;}break;
 case 11:kind=6;break;
 }
 o->kind=kind;o->state=next_state(o,chosen);o->step=0;activate(o);}
}
 else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {emit(0x50016,0,0,0);o->result=3;close(o);}}
}
