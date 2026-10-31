extern void *memset(void *, int, unsigned int);
extern void call_8c12b154(void *, void *, int);
extern int call_8c12b114(char *, char *, int);
extern int call_8c12b048(char *, char *, ...);
extern char *_builtin_strcpy(char *, const char *);
#define strcpy _builtin_strcpy
extern char str_8c3f9098[];
extern char str_8c3f90f4[];
extern char str_8c3f90a4[];
extern char str_8c3f90a8[];
extern char str_8c3f90ac[];
extern char str_8c3f90b0[];
extern char str_8c3f90b4[];
extern char str_8c3f90b8[];
extern char str_8c3f90bc[];
extern char str_8c3f90c0[];
extern char str_8c3f90c4[];
extern char str_8c3f90c8[];
extern char str_8c3f90cc[];
extern char str_8c3f90d0[];
extern char str_8c3f90d4[];
extern void puts_8c3e0b10(char *);
extern void flush_8c3e0c3c(void);

void show_build_8c3df574(void)
{
    char buf[32];
    unsigned char day[3];
    unsigned char year[5];
    char *p;
    unsigned char mon;

    memset(day, 0, 3);
    memset(year, 0, 5);
    call_8c12b154(day, str_8c3f9098 + 4, 2);
    call_8c12b154(year, str_8c3f9098 + 7, 4);
    if (day[0] == ' ')
        day[0] = '0';
    year[0]++;
    if (!call_8c12b114(str_8c3f9098, str_8c3f90a4, 3))
        mon = 1;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90a8, 3))
        mon = 2;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90ac, 3))
        mon = 3;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b0, 3))
        mon = 4;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b4, 3))
        mon = 5;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b8, 3))
        mon = 6;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90bc, 3))
        mon = 7;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c0, 3))
        mon = 8;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c4, 3))
        mon = 9;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c8, 3))
        mon = 10;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90cc, 3))
        mon = 11;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90d0, 3))
        mon = 12;
    call_8c12b048(p = buf, str_8c3f90d4, year, mon, day, str_8c3f90f4[0], str_8c3f90f4[1],
                  str_8c3f90f4[3], str_8c3f90f4[4], str_8c3f90f4[6], str_8c3f90f4[7]);
    flush_8c3e0c3c();
    puts_8c3e0b10(p);
    flush_8c3e0c3c();
}

void get_build_8c3df6d8(char *out)
{
    char buf[32];
    unsigned char day[3];
    unsigned char year[5];
    char *p;
    unsigned char mon;

    memset(day, 0, 3);
    memset(year, 0, 5);
    call_8c12b154(day, str_8c3f9098 + 4, 2);
    call_8c12b154(year, str_8c3f9098 + 7, 4);
    if (day[0] == ' ')
        day[0] = '0';
    year[0]++;
    if (!call_8c12b114(str_8c3f9098, str_8c3f90a4, 3))
        mon = 1;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90a8, 3))
        mon = 2;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90ac, 3))
        mon = 3;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b0, 3))
        mon = 4;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b4, 3))
        mon = 5;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90b8, 3))
        mon = 6;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90bc, 3))
        mon = 7;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c0, 3))
        mon = 8;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c4, 3))
        mon = 9;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90c8, 3))
        mon = 10;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90cc, 3))
        mon = 11;
    else if (!call_8c12b114(str_8c3f9098, str_8c3f90d0, 3))
        mon = 12;
    call_8c12b048(p = buf, str_8c3f90d4, year, mon, day, str_8c3f90f4[0], str_8c3f90f4[1],
                  str_8c3f90f4[3], str_8c3f90f4[4], str_8c3f90f4[6], str_8c3f90f4[7]);
    strcpy(out, p);
}

void print_line_8c3df888(char *s)
{
    flush_8c3e0c3c();
    puts_8c3e0b10(s);
    flush_8c3e0c3c();
}
