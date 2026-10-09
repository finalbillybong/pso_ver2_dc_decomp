typedef struct View {char unknown0[4];unsigned short flags;char unknown6[18];void *dispatch;char unknown28[4];void *buffer;void (*callback)(void *);int state,handle;char text[16];} View;
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((View *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((View *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((View *)0)->text==48?1:-1];
extern void acquire_at(View *),open_at(View *),poll_at(View *),complete_at(View *);
void update_text_context_effect(View *o) {switch(o->state) {case 0:acquire_at(o);break;case 1:open_at(o);break;case 2:break;case 3:poll_at(o);break;case 4:complete_at(o);break;case 5:o->flags|=1;break;}}
