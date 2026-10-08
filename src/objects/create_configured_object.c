extern void configure_at(const float *,int);
extern void *allocate_at(void *,unsigned int);
extern void initialize_at(void *);
void *create_configured_object(const float *configuration) {
 void *object;
 configure_at(configuration,7);
 object=allocate_at(*(void **)0x8c4d97e0,160);
 if(object) initialize_at(object);
 return object;
}
