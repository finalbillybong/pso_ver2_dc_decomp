extern int format_at(char *,const char *,...);
extern void *allocate_at(int);
#define transform_at ((void (*)(void *,void *))0x8c0787cc)
#define consume_at ((void (*)(void *,void *))0x8c3877a8)
extern int size_at(const char *);
extern int read_at(const char *,void *);
#define release_at ((void (*)(void *))0x8c36cde4)
int load_resource_sized(const char *name,void *output) {
 int size;
 void *loaded,*decoded;
 format_at((char *)0x8c44f760,(const char *)0x8c2e8ad0,name);
 size=size_at((char *)0x8c44f760);
 { int failure=-1; if(size!=failure) {
  loaded=allocate_at(((size+0x7ff)>>11)*0x800);
  if(read_at((char *)0x8c44f760,loaded)!=-1) {
   decoded=allocate_at(0x200000);
   transform_at(loaded,decoded);
   consume_at(decoded,output);
   release_at(decoded);
  }
  release_at(loaded);
  return 1;
 }
 } return 0;
}
