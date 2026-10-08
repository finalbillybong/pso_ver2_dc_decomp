extern void configure_a(int,void *);
#define configure_b ((void (*)(int,void *))0x8c38a714)
void submit_render_buffers(void *first,void *second){((void (*)(void))0x8c38ae68)();configure_a(0,(void *)0x8c46f02c);configure_b(0,*(char **)0x8c57553c-64);((void (*)(int,void *,void *))0x8c3be280)(0,first,second);((void (*)(void))0x8c38ad10)();}
