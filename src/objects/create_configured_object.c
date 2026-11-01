extern void configure_at(const float *,int);
extern void *heap_alloc_8c122700(void *,unsigned int);
extern void TWindowSubComCardList_ctor_8c206ee4(void *);
void *create_configured_object(const float *configuration) {
 void *object;
 configure_at(configuration,7);
 object=heap_alloc_8c122700(*(void **)0x8c4d97e0,160);
 if(object) TWindowSubComCardList_ctor_8c206ee4(object);
 return object;
}
