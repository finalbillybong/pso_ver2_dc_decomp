extern void configure_a(int,void *);
#define configure_b ((void (*)(int,void *))0x8c38a714)
void configure_render_buffers(void){configure_a(0,(void *)0x8c46f02c);configure_b(0,*(char **)0x8c57553c-64);}
