extern void *heap;extern void *heap_alloc_8c122700(void *,unsigned int);
extern void *TObjDFJisin_ctor_8c21b698(void *,void *,int);
void *TObjDFJisin_create_8c21b658(void *parent,int angle) { void *o=heap_alloc_8c122700(heap,48);if(o) TObjDFJisin_ctor_8c21b698(o,parent,angle);return o; }
