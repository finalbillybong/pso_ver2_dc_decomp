#include "src/include/effect_resource_records.h"
extern EffectResourcePair resource_pairs[];
extern void *resource_handle;
extern char resource_name[];
extern EffectResourceRecord *resource_records;
extern void *resource_outputs[55];
extern void *load_resource(char *);
void initialize_effect_resources(void){int i;resource_handle=load_resource(resource_name+18);for(i=0;i<1;i++){unsigned int offset=(unsigned int)i<<3;void *first=*(void **)((char *)&resource_pairs[0].first+offset);void *second=*(void **)((char *)&resource_pairs[0].second+offset);((void (*)(void *,void *))0x8c033c84)(second,first);}{char *resources=(char *)&resource_records[0].resource;for(i=0;i<55;i++){*(void **)((char *)resource_outputs+((unsigned int)i<<2))=**(void ***)(resources+i*sizeof(EffectResourceRecord));}}}
