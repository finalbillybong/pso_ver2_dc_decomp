typedef struct View { char unknown0[52]; unsigned int flags; } View;
typedef char check_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_prefix[sizeof(View)==56?1:-1];
extern void emit_at(int,void *,void *,void *);
void request_resource_release(View *o) {
 if(!(o->flags&1)) o->flags&=~4;
 else if(o->flags&2) o->flags|=4;
 else {
  if(!(o->flags&32)) emit_at(0x50004,0,0,0);
  o->flags&=~1;
  o->flags|=2;
 }
 o->flags|=16;
}
