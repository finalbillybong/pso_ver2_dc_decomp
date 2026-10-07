extern int format_at(char *,const char *,...);
extern void *allocate_at(int);
#define transform_at ((void (*)(void *,void *))0x8c0787cc)
#define consume_at ((void (*)(void *,void *))0x8c3877a8)
extern void *load_at(const char *);
#define release_at ((void (*)(void *))0x8c011ec0)
int load_resource_large(const char *name,void *output) {
 void *loaded,*decoded;
 format_at((char *)0x8c44f860,(const char *)0x8c2e8ad0,name);
 loaded=load_at((char *)0x8c44f860);
 if(!loaded) { release_at(loaded); return 0; }
 decoded=allocate_at(0x200000);
 transform_at(loaded,decoded);
 consume_at(decoded,output);
 release_at(decoded);
 release_at(loaded);
 return 1;
}
