/* Provisional table prefix; preserve the early mismatch return without closing. */
typedef struct ResourceLength { const char *name; unsigned int length; } ResourceLength;
typedef char check_length[(unsigned long)&((ResourceLength *)0)->length==4?1:-1];
typedef char check_size[sizeof(ResourceLength)==8?1:-1];
extern void *open_at(const char *,int);
extern int length_at(void *,unsigned int *);
extern void close_at(void *);
int check_resource_table_lengths(const ResourceLength *table) {
 unsigned int length;
 int index; unsigned int offset;
 for(index=0;(offset=(unsigned int)index<<3,*(const unsigned int *)((const char *)&table->length+offset));index++) {
  void *handle=open_at(*(const char *const *)((const char *)&table->name+offset),0);
  if(!handle) return 0;
  if(!length_at(handle,&length)) { close_at(handle); return 0; }
  if(*(const unsigned int *)((const char *)&table->length+offset)!=length) return 1;
  close_at(handle);
 }
 return 0;
}
