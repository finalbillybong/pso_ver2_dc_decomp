extern int sprintf_8c12b048(char *,const char *,...);
extern void *syMalloc_dispatch_alloc_8c36cd16(int);
#define transform_at ((void (*)(void *,void *))0x8c0787cc)
#define consume_at ((void (*)(void *,void *))0x8c3877a8)
extern int file_last_size_8c104d50(const char *);
extern int file_load_8c104d00(const char *,void *);
#define release_at ((void (*)(void *))0x8c36cde4)
int load_prs_resource_sized_8c033d18(const char *name,void *output) {
 int size;
 void *loaded,*decoded;
 sprintf_8c12b048((char *)0x8c44f760,(const char *)0x8c2e8ad0,name);
 size=file_last_size_8c104d50((char *)0x8c44f760);
 { int failure=-1; if(size!=failure) {
  loaded=syMalloc_dispatch_alloc_8c36cd16(((size+0x7ff)>>11)*0x800);
  if(file_load_8c104d00((char *)0x8c44f760,loaded)!=-1) {
   decoded=syMalloc_dispatch_alloc_8c36cd16(0x200000);
   transform_at(loaded,decoded);
   consume_at(decoded,output);
   release_at(decoded);
  }
  release_at(loaded);
  return 1;
 }
 } return 0;
}
