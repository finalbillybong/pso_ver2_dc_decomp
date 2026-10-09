typedef struct Parent Parent;
typedef struct Dialog {char unknown0[4]; unsigned short flags; char unknown6[30]; int state; char unknown40[868]; Parent *parent; char unknown912[20]; void (*accept)(Parent *); void (*cancel)(void);} Dialog;
typedef char check_layout[sizeof(Dialog)==940 && (unsigned long)&((Dialog *)0)->flags==4 && (unsigned long)&((Dialog *)0)->state==36 && (unsigned long)&((Dialog *)0)->parent==908 && (unsigned long)&((Dialog *)0)->accept==932 && (unsigned long)&((Dialog *)0)->cancel==936 ? 1:-1];
extern void initialize(Dialog *),choose(Dialog *),confirm(Dialog *),edit(Dialog *),reset(Dialog *),wait(Dialog *);
void update_callback_dialog(Dialog *o) {
    switch(o->state) {
    case 0:initialize(o);break;
    case 1:choose(o);break;
    case 2:confirm(o);break;
    case 3:edit(o);break;
    case 5:reset(o);break;
    case 4:wait(o);break;
    case 8:if(o->accept)o->accept(o->parent);o->flags|=1;break;
    case 7:if(o->cancel)o->cancel();o->flags|=1;break;
    }
}
