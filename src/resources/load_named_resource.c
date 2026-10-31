/* Provisional resource object and relocation header views. */
typedef struct ResourceView { void *name; char unknown4[20]; void *dispatch; char unknown28[4]; char *data; unsigned int length; void *entry; char filename[17]; } ResourceView;
typedef struct RelocationHeader { unsigned int offset; unsigned int count; unsigned int unknown8[2]; unsigned int entry; unsigned int unknown20[3]; } RelocationHeader;
typedef char check_dispatch[(unsigned long)&((ResourceView *)0)->dispatch==24?1:-1];
typedef char check_data[(unsigned long)&((ResourceView *)0)->data==32?1:-1];
typedef char check_length[(unsigned long)&((ResourceView *)0)->length==36?1:-1];
typedef char check_entry[(unsigned long)&((ResourceView *)0)->entry==40?1:-1];
typedef char check_name[(unsigned long)&((ResourceView *)0)->filename==44?1:-1];
typedef char check_view[sizeof(ResourceView)==64?1:-1];
typedef char check_header_count[(unsigned long)&((RelocationHeader *)0)->count==4?1:-1];
typedef char check_header_entry[(unsigned long)&((RelocationHeader *)0)->entry==16?1:-1];
typedef char check_header[sizeof(RelocationHeader)==32?1:-1];
extern void *malloc_load_file_8c1050d8(const char *,unsigned int *);
extern ResourceView *heap_alloc_8c122700(void *,unsigned int);
extern void TObject_ctor_8c0330e4(ResourceView *,void *);
extern void memset_8c12b880(void *,int,unsigned int);
extern void strncpy_8c12b154(char *,const char *,unsigned int);
extern void *relocate_at(ResourceView *);
void *load_named_resource_8c104f68(const char *name) {
 unsigned int length;
 void *data=malloc_load_file_8c1050d8(name,&length);
 unsigned int saved_length=length;
 ResourceView *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,64);
 if(object) { TObject_ctor_8c0330e4(object,(void *)0x8c4d5ad0); object->dispatch=(void *)0x8c26586c; }
 memset_8c12b880(object->filename,0,17);
 strncpy_8c12b154(object->filename,name,16);
 object->name=object->filename;
 object->data=(char *)data;
 object->length=saved_length;
 return relocate_at(object);
}
