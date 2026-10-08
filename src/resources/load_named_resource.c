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
extern void *read_at(const char *,unsigned int *);
extern ResourceView *allocate_at(void *,unsigned int);
extern void base_at(ResourceView *,void *);
extern void clear_at(void *,int,unsigned int);
extern void copy_name_at(char *,const char *,unsigned int);
extern void *relocate_at(ResourceView *);
void *load_named_resource(const char *name) {
 unsigned int length;
 void *data=read_at(name,&length);
 unsigned int saved_length=length;
 ResourceView *object=allocate_at(*(void **)0x8c4d97e0,64);
 if(object) { base_at(object,(void *)0x8c4d5ad0); object->dispatch=(void *)0x8c26586c; }
 clear_at(object->filename,0,17);
 copy_name_at(object->filename,name,16);
 object->name=object->filename;
 object->data=(char *)data;
 object->length=saved_length;
 return relocate_at(object);
}
