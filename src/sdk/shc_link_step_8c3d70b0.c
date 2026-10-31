extern unsigned char g_8c5be0fa;
extern unsigned char g_8c5be0d3;
extern unsigned int g_8c5be10c;
extern unsigned char g_8c5be0f6;
extern void func_8c3dc272(void);
extern void reset_8c3dc224(unsigned int *, int);
extern void func_8c3d9f38(char **, unsigned short *);
extern unsigned short func_8c3d7e7e(char **);
extern void func_8c3d7fa8(unsigned short, int);
extern void func_8c3da080(void);
extern void func_8c3d7aa4(char **, unsigned short *);
extern unsigned short func_8c3da780(char **);
extern void func_8c3da7ca(unsigned short);
extern void func_8c3d7c7c(void);

char link_step_8c3d70b0(void)
{
    if (g_8c5be0fa & 1) {
        func_8c3dc272();
        return 1;
    }
    if (*(volatile unsigned char *)&g_8c5be0d3 & 2) {
        reset_8c3dc224(&g_8c5be10c, 100);
        g_8c5be0f6 = 6;
        return 1;
    }
    return 0;
}

void link_pump_8c3d70ec(void)
{
    unsigned short len;
    char *dst;
    char *src;
    unsigned short n;

    func_8c3d9f38(&src, &len);
    if (len && func_8c3d7e7e(&dst) >= len) {
        n = len;
        while (n-- != 0)
            *dst++ = *src++;
        func_8c3d7fa8(len, 1);
        func_8c3da080();
    }
    func_8c3d7aa4(&src, &len);
    if (len && func_8c3da780(&dst) >= len) {
        n = len;
        while (n-- != 0)
            *dst++ = *src++;
        func_8c3da7ca(len);
        func_8c3d7c7c();
    }
}
