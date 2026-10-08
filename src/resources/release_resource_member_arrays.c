typedef struct View {
 char unknown0[36]; void *slots36[8]; char unknown68[32];
 void *slots100[6]; void *member124,*member128,*member132;
} View;
typedef char check_slots36[(unsigned long)&((View *)0)->slots36==36?1:-1];
typedef char check_slots100[(unsigned long)&((View *)0)->slots100==100?1:-1];
typedef char check_member124[(unsigned long)&((View *)0)->member124==124?1:-1];
typedef char check_member128[(unsigned long)&((View *)0)->member128==128?1:-1];
typedef char check_member132[(unsigned long)&((View *)0)->member132==132?1:-1];
typedef char check_prefix[sizeof(View)==136?1:-1];
extern void release_at(void *);
void release_resource_member_arrays(View *o) {
 int i;
 if(o->member132) { release_at(o->member132); o->member132=0; }
 if(o->member128) { release_at(o->member128); o->member128=0; }
 if(o->member124) { release_at(o->member124); o->member124=0; }
 for(i=0;i<6;i++) {
  unsigned int offset=(unsigned int)i<<2;
  if(*(void **)((char *)o->slots100+offset)) {
   release_at(*(void **)((char *)o->slots100+offset));
   *(void **)((char *)o->slots100+offset)=0;
  }
 }
 for(i=7;i>=0;i--) {
  unsigned int offset=(unsigned int)i<<2;
  if(*(void **)((char *)o->slots36+offset)) {
   release_at(*(void **)((char *)o->slots36+offset));
   *(void **)((char *)o->slots36+offset)=0;
  }
 }
}
