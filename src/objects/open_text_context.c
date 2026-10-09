typedef struct View {char unknown0[4];unsigned short flags;char unknown6[18];void *dispatch;char unknown28[4];void *buffer;void (*callback)(void *);int state,handle;char text[16];} View;
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((View *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((View *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((View *)0)->text==48?1:-1];
extern int open_at(const char *);extern void *buffer_at(View *);extern void *fill_at(void *,int,unsigned int);extern void prepare_at(int);extern int start_at(int,const char *,void *);
void open_text_context(View *o) {o->handle=open_at(o->text);switch(o->handle) {case -2:break;case -1:o->flags|=1;break;default:o->buffer=buffer_at(o);if(o->buffer) {fill_at(o->buffer,0,1024);prepare_at(o->handle);if(start_at(o->handle,o->text,o->buffer)==0) o->state=3;else o->state=5;}else o->state=5;break;}}
