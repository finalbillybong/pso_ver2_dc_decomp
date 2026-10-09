typedef struct Pair {float x,y;} Pair;
typedef struct Menu {char unknown0[128]; unsigned short flags;} Menu;
typedef struct Resources {char unknown0[228]; const char *first,*second;} Resources;
typedef struct Context {char unknown0[144]; Resources *resources;} Context;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Menu)==130 && sizeof(Resources)==236 && sizeof(Context)==148 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Resources *)0)->first==228 && (unsigned long)&((Resources *)0)->second==232 && (unsigned long)&((Context *)0)->resources==144 ? 1:-1];
extern Menu *previous,*current;
extern Pair configuration;
extern Context *context;
extern int state;
extern void clear(Menu *),add(Menu *,const char *,int,int),position(Menu *),refresh(Menu *);
extern Menu *create(Pair *,int);
void open_global_choice_menu(void) {
    Pair pair;
    clear(previous);
    pair=configuration;
    current=create(&pair,2);
    add(current,context->resources->first,6,0);
    add(current,context->resources->second,6,1);
    position(current);
    refresh(current);
    { unsigned int flags=current->flags;current->flags=flags|1; }
    state=4;
}
