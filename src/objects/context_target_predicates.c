typedef struct View {char unknown0[820];void *target;} View;
typedef char check_target[(unsigned long)&((View *)0)->target==820?1:-1];
int context_target_differs_0(View *o,void *target) {return target!=o->target;}
int context_target_differs_1(View *o,void *target) {return target!=o->target;}
int context_target_differs_2(View *o,void *target) {return target!=o->target;}
int context_target_differs_3(View *o,void *target) {return target!=o->target;}
