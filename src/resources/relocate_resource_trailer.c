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
void *relocate_resource_trailer(ResourceView *object) {
 char *current=object->data;
 unsigned int count,i;
 RelocationHeader *header=(RelocationHeader *)(current+object->length-32);
 unsigned short *indices=(unsigned short *)(header->offset+(unsigned int)current);

 count=header->count;
 for(i=0;i<count;i++) {
  current+=(unsigned int)*indices++<<2;
  *(unsigned int *)current+=(unsigned int)object->data;
 }
 object->entry=(void *)(header->entry+(unsigned int)object->data);
 return object->entry;
}
