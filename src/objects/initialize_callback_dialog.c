typedef struct Parent Parent;
typedef struct Dialog {void *resource; char unknown4[20]; void *dispatch; unsigned short flags,size; int unknown32,state,value; char buffer[840]; int mode,unknown888,parameter,enabled,unknown900,unknown904; Parent *parent; int unknown912,unknown916,unknown920,unknown924,unknown928; void (*accept)(Parent *); void (*cancel)(void);} Dialog;
typedef char check_layout[sizeof(Dialog)==940 && (unsigned long)&((Dialog *)0)->dispatch==24 && (unsigned long)&((Dialog *)0)->size==30 && (unsigned long)&((Dialog *)0)->state==36 && (unsigned long)&((Dialog *)0)->value==40 && (unsigned long)&((Dialog *)0)->buffer==44 && (unsigned long)&((Dialog *)0)->mode==884 && (unsigned long)&((Dialog *)0)->parameter==892 && (unsigned long)&((Dialog *)0)->enabled==896 && (unsigned long)&((Dialog *)0)->parent==908 && (unsigned long)&((Dialog *)0)->unknown924==924 && (unsigned long)&((Dialog *)0)->accept==932 && (unsigned long)&((Dialog *)0)->cancel==936 ? 1:-1];
extern Dialog *base(Dialog *,void *);
extern void *resource;
extern char dispatch[];
extern void *clear(void *,int,unsigned int);
Dialog *initialize_callback_dialog(Dialog *o,void *context,Parent *parent,int value,int parameter) {
    Dialog **home=&o;
    base(o,context);
    o->dispatch=dispatch;o->resource=resource;o->size=940;
    o->mode=0;o->unknown888=0;o->parameter=parameter;
    o->state=0;o->enabled=1;o->unknown900=0;o->unknown904=0;
    o->parent=parent;o->unknown912=0;o->unknown916=0;o->unknown920=0;
    o->unknown928=0;o->unknown924=0;o->value=value;
    o->accept=0;o->cancel=0;
    clear(o->buffer,0,840);
    return o;
}
