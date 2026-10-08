typedef struct View { char unknown0[384]; void *member; } View;
typedef char check_member[(unsigned long)&((View *)0)->member==384?1:-1];
typedef char check_prefix[sizeof(View)==388?1:-1];
extern void release_at(void *);
void release_optional_member(View *o) { if(o->member) release_at(o->member); }
