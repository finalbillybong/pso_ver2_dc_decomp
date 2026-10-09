typedef struct View { char unknown0[32]; int current; int requested; } View;
typedef char check_current[(unsigned long)&((View *)0)->current==32?1:-1];
typedef char check_requested[(unsigned long)&((View *)0)->requested==36?1:-1];
void request_mode_one(View *o) { o->requested=1; }
void request_mode_two(View *o) { o->requested=2; }
void request_mode_five(View *o) { o->requested=5; }
int current_mode_is_four(const View *o) { return o->current==4; }
