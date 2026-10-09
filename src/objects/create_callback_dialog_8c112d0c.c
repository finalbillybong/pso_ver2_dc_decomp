typedef struct Parent {char unknown0[36]; int state,value;} Parent;
typedef struct Dialog {char unknown0[932]; void (*accept)(Parent *); void (*cancel)(void);} Dialog;
typedef char check_layout[sizeof(Parent)==44 && sizeof(Dialog)==940 && (unsigned long)&((Parent *)0)->state==36 && (unsigned long)&((Parent *)0)->value==40 && (unsigned long)&((Dialog *)0)->accept==932 && (unsigned long)&((Dialog *)0)->cancel==936 ? 1:-1];
extern void *heap,*context;
extern Dialog *allocate(void *,unsigned int),*construct(Dialog *,void *,Parent *,int,int);
extern void accept(Parent *);
extern void cancel(void),reset_input(void);
void create_callback_dialog_8c112d0c(Parent *o) {
    Dialog *dialog=allocate(heap,940);
    if(dialog)construct(dialog,context,o,o->value,44);
    dialog->accept=accept;dialog->cancel=cancel;
    reset_input();
    o->state=5;
}
