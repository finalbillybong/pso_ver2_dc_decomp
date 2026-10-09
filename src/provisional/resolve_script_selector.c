typedef struct Values { short *data; int count; } Values;
typedef struct Context { char unknown0[160]; int state; char unknown164[88]; short selection; char unknown254[6]; int mode; } Context;
typedef char check_layout[sizeof(Values)==8 && sizeof(Context)==264 && (unsigned long)&((Context *)0)->state==160 && (unsigned long)&((Context *)0)->selection==252 && (unsigned long)&((Context *)0)->mode==260 ? 1:-1];
extern Values *script_tables;
extern int script_table_count;
extern Values *find_script_values(int);
extern int query_context_mode(void);
static inline short table_value(int table_index,int index) {
    short result=-1;
    Values *v;
    if(script_table_count<=table_index) v=0;
    else v=(Values *)((char *)script_tables+(table_index<<3));
    if(v) {
        if(index<0 || index>=v->count) result=-1;
        else result=*(short *)((char *)v->data+(index<<1));
    }
    return result;
}
static inline short first_value(int index) {
    Values *v;
    short result=-1;
    if(script_table_count<=0) v=0;
    else v=script_tables;
    if(v) {
        if(index<0 || index>=v->count) result=-1;
        else result=*(short *)((char *)v->data+(index<<1));
    }
    return result;
}
static inline short key_value(int key,int index) {
    short result=-1;
    Values *v=find_script_values(key);
    if(v) {
        if(index<0 || index>=v->count) result=-1;
        else result=*(short *)((char *)v->data+(index<<1));
    }
    return result;
}
static inline int context_mode(Context *o) {
    int mode=query_context_mode();
    if(mode==0) return 1;
    if(mode==15) return 0;
    if(o->state) return 3;
    return 2;
}
static inline int in_range(short value) { int result=0; if(value>=19 && value<=29) result=1; return result; }
int resolve_script_selector(Context *o,int kind,int key,int index) {
    switch(kind) {
    case 0:
        index=first_value(index);
        if(index==-30) {
            switch(context_mode(o)) {
            case 1:index=4;break;
            case 0:index=3;break;
            case 3:index=6;break;
            case 2:index=5;break;
            }
        }
        break;
    case 1:case 2:case 6:index=-60;break;
    case 3: {
        short value=key_value(key,index);
        if(in_range(value)) {
            if(value==27) index=-70;
            else if(value==28) index=-90;
            else index=-80;
        } else index=-60;
        break;
    }
    case 5:index=table_value(2,index);break;
    case 12: {
        short value=key_value(113,index);
        if(value==27) index=-70;
        else if(value==28) index=-90;
        else index=-80;
        break;
    }
    case 13: {
        short value=key_value(-80,index);
        if(value==440) index=*(short *)((char *)(script_tables[3].data-19)+(o->selection<<1));
        else index=*(short *)((char *)(script_tables[4].data-19)+(o->selection<<1));
        break;
    }
    case 14: { int selected=o->selection-19; index=table_value(3,selected); break; }
    case 15:index=-50;break;
    case 17: { int selected=o->selection-19; index=table_value(5,selected); break; }
    case 18:index=-50;break;
    case 21:if(o->mode>=2) index=-60;else index=144;break;
    default:index=-1;break;
    }
    return index;
}
