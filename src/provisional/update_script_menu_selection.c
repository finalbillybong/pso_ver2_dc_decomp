typedef struct Menu { char unknown0[32]; int index; void *entries[25]; int key,value,unknown144,flags; char unknown152[24]; int kind,next_state,state; } Menu;
typedef char check_layout[sizeof(Menu)==188 && (unsigned long)&((Menu *)0)->index==32 && (unsigned long)&((Menu *)0)->entries==36 && (unsigned long)&((Menu *)0)->key==136 && (unsigned long)&((Menu *)0)->value==140 && (unsigned long)&((Menu *)0)->flags==148 && (unsigned long)&((Menu *)0)->kind==176 && (unsigned long)&((Menu *)0)->next_state==180 && (unsigned long)&((Menu *)0)->state==184 ? 1:-1];
extern int entry_index(void *),resolve_value(Menu *,int,int,int),entry_key(void *),key_kind(int);
extern void set_entry_value(void *,int),refresh(Menu *),cancel(Menu *),finish(Menu *);
extern int button(void *,int),emit(int,void *,int,int),poll(void);
static inline void *entry(Menu *o,int offset) { return *(void **)((char *)&o->entries[offset]+((unsigned int)o->index<<2)); }
static inline int request(Menu *o) {
    void *p=entry(o,0);
    int key=p?entry_key(p):-1;
    if(key_kind(key)!=7) { o->state=1; return 1; }
    return 0;
}
static inline int cancelled(Menu *o) { return (button(&o->index,2) || (o->flags&2))?1:0; }
void update_script_menu_selection(Menu *o) {
    int done=0;
    switch(o->state) {
    case 0: {
        int value=resolve_value(o,o->kind,o->key,entry_index(entry(o,0)));
        if(value!=o->value) { o->value=value; set_entry_value(entry(o,1),o->value); }
        refresh(o);
        if(button(&o->index,4)) {
            emit(0x50001,0,0,0);
            done=!request(o);
        } else if(cancelled(o)) {
            emit(0x50016,0,0,0);
            cancel(o);
        }
        break;
    }
    case 1: done=poll();break;
    }
    if(done) { o->next_state=9; finish(o); }
}
