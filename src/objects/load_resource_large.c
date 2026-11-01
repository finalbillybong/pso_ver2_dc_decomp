extern int sprintf_8c12b048(char *,const char *,...);
extern void *game_malloc_buffer_8c011e9c(int);
#define transform_at ((void (*)(void *,void *))0x8c0787cc)
#define consume_at ((void (*)(void *,void *))0x8c3877a8)
extern void *load_at(const char *);
#define game_free_8c011ec0 ((void (*)(void *))0x8c011ec0)
int load_resource_large(const char *name,void *output) {
 void *loaded,*decoded;
 sprintf_8c12b048((char *)0x8c44f860,(const char *)0x8c2e8ad0,name);
 loaded=load_at((char *)0x8c44f860);
 if(!loaded) { game_free_8c011ec0(loaded); return 0; }
 decoded=game_malloc_buffer_8c011e9c(0x200000);
 transform_at(loaded,decoded);
 consume_at(decoded,output);
 game_free_8c011ec0(decoded);
 game_free_8c011ec0(loaded);
 return 1;
}
