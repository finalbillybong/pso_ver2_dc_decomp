extern void *allocate_at(unsigned int);extern void initialize_at(void *,int,void *,int,int,int);extern void *context;extern char descriptor[];
void create_context_resources_8c1a0898(void) {void *p=allocate_at(1088);if(p) initialize_at(p,1,descriptor,0,0,0);context=p;}
