typedef struct Pair { float x,y; } Pair;
typedef struct Element { char unknown0[4]; unsigned short flags; } Element;
typedef struct Object { char unknown0[32]; int state; char unknown36[8]; Element *panel,*menu; char unknown52[12]; char first[8],first_end,second[8],second_end; } Object;
typedef struct Resources { char unknown0[16]; char *first_item,*second_item,*heading,*first_label,*second_label; } Resources;
typedef struct Context { char unknown0[96]; Resources *resources; } Context;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Element)==6 && sizeof(Object)==84 && sizeof(Resources)==36 && sizeof(Context)==100 && (unsigned long)&((Object *)0)->state==32 && (unsigned long)&((Object *)0)->panel==44 && (unsigned long)&((Object *)0)->menu==48 && (unsigned long)&((Object *)0)->first==64 && (unsigned long)&((Object *)0)->first_end==72 && (unsigned long)&((Object *)0)->second==73 && (unsigned long)&((Object *)0)->second_end==81 && (unsigned long)&((Element *)0)->flags==4 && (unsigned long)&((Context *)0)->resources==96 && (unsigned long)&((Resources *)0)->first_item==16 && (unsigned long)&((Resources *)0)->second_item==20 && (unsigned long)&((Resources *)0)->heading==24 && (unsigned long)&((Resources *)0)->first_label==28 && (unsigned long)&((Resources *)0)->second_label==32 ? 1:-1];
extern char first_text[],second_text[],format[];
extern Pair panel_position,panel_extent,menu_configuration;
extern Context *context;
extern void copy_bytes(void *,const void *,int),release(void *),add_panel_text(Element *,const char *,int),add_menu_item(Element *,char *,int,int),menu_width(Element *,float),menu_select(Element *,int),activate(Element *);
extern void *allocate(unsigned int);
extern Element *create_panel(Pair *,Pair *),*create_menu(Pair *,int);
extern int format_text(char *,const char *,...);
void initialize_two_text_panel(Object *o) {
    Pair position,extent,menu_config;
    copy_bytes(o->first,first_text,8);
    copy_bytes(o->second,second_text,8);
    o->first_end=0;o->second_end=0;
    if(o->panel) o->panel->flags|=1;
    position=panel_position;extent=panel_extent;
    o->panel=create_panel(&position,&extent);
    if(o->panel) {
        char *buffer=allocate(96);
        if(buffer) {
            add_panel_text(o->panel,context->resources->heading,1);
            add_panel_text(o->panel,format+11,0);
            format_text(buffer,format+13,context->resources->first_label,o->first);
            add_panel_text(o->panel,buffer,2);
            format_text(buffer,format+13,context->resources->second_label,o->second);
            add_panel_text(o->panel,buffer,2);
        }
        release(buffer);
    }
    if(o->menu) o->menu->flags|=1;
    menu_config=menu_configuration;
    o->menu=create_menu(&menu_config,2);
    if(o->menu) {
        o->menu=create_menu(&menu_config,2);
        add_menu_item(o->menu,context->resources->first_item,6,0);
        add_menu_item(o->menu,context->resources->second_item,6,1);
        menu_width(o->menu,442.0f);
        menu_select(o->menu,1);
        activate(o->menu);
    }
    o->state=8;
}
