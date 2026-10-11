typedef struct Header { char unknown0[0x4f]; char name[1]; } Header;
extern Header header_8c31cb24;
extern char output_8c31cb18[];
extern int load_resource_small(const char *, void *);
void check_and_load_8c199628(void)
{
    int *word = (int *)0x8c004000;
    short i;
    unsigned int count = 0x4000 / sizeof(int);
    for (i = 0; i < count; i++) {
        if (*word++) for (;;) ;
    }
    load_resource_small(header_8c31cb24.name, output_8c31cb18);
    *(void **)0x8c4dc440 = output_8c31cb18;
}
