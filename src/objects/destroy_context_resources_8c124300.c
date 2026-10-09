extern void destroy_at(void *,int);extern void *context;
void destroy_context_resources_8c124300(void) {if(context) destroy_at(context,1);}
