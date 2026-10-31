extern unsigned short func_8c3da780(char **);
extern void func_8c3da7ca(unsigned short);

void buf_write_8c3dc1b4(char *src, unsigned short n)
{
    char *buf;
    unsigned short avail;
    unsigned short i;

    while (n) {
        i = 0;
        avail = func_8c3da780(&buf);
        if (!avail)
            return;
        while (n && i < avail) {
            *buf++ = *src++;
            i++;
            n--;
        }
        if (0) buf++;
        func_8c3da7ca(i);
    }
}
