typedef struct Row {unsigned int flags;int unknown4;float x,y,width;char unknown20[12];int digit;} Row;
typedef struct Object {char unknown0[48];Row **rows;char unknown52[12];float width;char unknown68[38];signed char digits;char mode;int unknown108,limit,current;} Object;
typedef char check_layout[sizeof(Row)==36 && sizeof(Object)==120 && (unsigned long)&((Row *)0)->x==8 && (unsigned long)&((Row *)0)->width==16 && (unsigned long)&((Row *)0)->digit==32 && (unsigned long)&((Object *)0)->rows==48 && (unsigned long)&((Object *)0)->width==64 && (unsigned long)&((Object *)0)->digits==106 && (unsigned long)&((Object *)0)->limit==112 && (unsigned long)&((Object *)0)->current==116 ? 1:-1];
extern int thresholds[];
void choose_selection_child_digits(Object *o) {int i;o->digits=0;for(i=0;i<6;i++) {if(o->limit<*(int *)((char *)thresholds+((unsigned int)i<<2)))break;o->digits=i;}o->digits++;}
