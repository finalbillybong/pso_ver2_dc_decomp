typedef struct Saved {int values[7];} Saved;
typedef struct Object {char unknown0[32];int index;char unknown36[112];unsigned int flags;char unknown152[12];int notify,result;char unknown172[20];Saved *destination;Saved saved;} Object;
typedef char check_layout[sizeof(Saved)==28 && sizeof(Object)==224 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->flags==148 && (unsigned long)&((Object *)0)->notify==164 && (unsigned long)&((Object *)0)->result==168 && (unsigned long)&((Object *)0)->destination==192 && (unsigned long)&((Object *)0)->saved==196 ? 1:-1];
extern short selected;extern int input(int *,int),emit(int,void *,void *,int);extern void refresh(Object *),reset(void),close(Object *),cancel(Object *);
void copy_resource_selection(Object *o) {
 refresh(o);
 if(input(&o->index,4)) {emit(0x50001,0,0,0);o->result=2;*o->destination=o->saved;if(o->notify) {selected=-1;reset();}close(o);}
 else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {emit(0x50016,0,0,0);cancel(o);}}
}
