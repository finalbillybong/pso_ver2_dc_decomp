typedef struct Header { char unknown0[0xe]; char name[1]; } Header;
extern Header header_8c3088fc;
extern char output_8c3088cc[];
extern int load_resource_small(const char *, void *);
void check_and_load_8c0ea6d8(void)
{
    int *word = (int *)0x8c004000;
    short i;
    unsigned int count = 0x4000 / sizeof(int);
    for (i = 0; i < count; i++) {
        if (*word++) for (;;) ;
    }
    load_resource_small(header_8c3088fc.name, output_8c3088cc);
    *(void **)0x8c470360 = output_8c3088cc;
}
