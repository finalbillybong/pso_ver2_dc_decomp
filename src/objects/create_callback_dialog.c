typedef struct Parent {char unknown0[36]; int state,value;} Parent;
typedef struct Dialog {char unknown0[932]; void (*accept)(Parent *); void (*cancel)(void);} Dialog;
typedef char check_layout[sizeof(Parent)==44 && sizeof(Dialog)==940 && (unsigned long)&((Parent *)0)->state==36 && (unsigned long)&((Parent *)0)->value==40 && (unsigned long)&((Dialog *)0)->accept==932 && (unsigned long)&((Dialog *)0)->cancel==936 ? 1:-1];
extern void *heap,*context;
extern Dialog *heap_alloc_8c122700(void *,unsigned int),*TShopEquipmentSellWindow_ctor_8c1067ec(Dialog *,void *,Parent *,int,int);
extern void accept(Parent *);
extern void cancel(void),reset_controller_state_8c01d9dc(void);
void create_callback_dialog(Parent *o) {
    Dialog *dialog=heap_alloc_8c122700(heap,940);
    if(dialog)TShopEquipmentSellWindow_ctor_8c1067ec(dialog,context,o,o->value,37);
    dialog->accept=accept;dialog->cancel=cancel;
    reset_controller_state_8c01d9dc();
    o->state=7;
}
