typedef struct Configuration { unsigned int words[2]; } Configuration;
typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Items { char unknown0[436]; void *first,*second,*third,*fourth,*fifth; } Items;
typedef struct Context { char unknown0[144]; Items *items; } Context;
typedef char check_layout[sizeof(Configuration)==8 && sizeof(Menu)==130 && sizeof(Items)==456 && sizeof(Context)==148 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Context *)0)->items==144 && (unsigned long)&((Items *)0)->first==436 && (unsigned long)&((Items *)0)->second==440 && (unsigned long)&((Items *)0)->third==444 && (unsigned long)&((Items *)0)->fourth==448 && (unsigned long)&((Items *)0)->fifth==452 ? 1:-1];
extern void *previous;
extern Menu *menu;
extern Context *context;
extern Configuration configuration;
extern int mode;
extern void reset_at(void *),add_at(Menu *,void *,int,int),finish_at(Menu *),activate_at(Menu *);
extern Menu *create_at(Configuration *,int);
void initialize_five_entry_selection(void) {
    Configuration local;
    reset_at(previous);
    local=configuration;
    menu=create_at(&local,5);
    add_at(menu,context->items->fifth,6,0);
    add_at(menu,context->items->first,6,1);
    add_at(menu,context->items->second,6,2);
    add_at(menu,context->items->third,6,3);
    add_at(menu,context->items->fourth,6,4);
    finish_at(menu);
    activate_at(menu);
    menu->flags|=1;
    mode=25;
}
