typedef struct { unsigned char a, b, c, d; } Cmd;
extern int func_8c379834(int);
extern int func_8c36f444(int, int, int, int, int, Cmd *, int);
extern int func_8c37990e(int, int, int);
extern char str_8c3f7b30[];

int port_ready_8c379cb0(int port)
{
    return func_8c379834(port);
}

int port_send2_8c379cb6(int port, int v)
{
    int w;
    unsigned char *p;
    int r;
    if (!port_ready_8c379cb0(port)) {
        return -2;
    }
    w = 0;
    p = (unsigned char *)&w;
    *p++ = 0;
    *p++ = 2;
    *p = v;
    r = func_8c36f444(port, 0x100, 0, 0, 0, (Cmd *)&w, 1);
    if (r < 0) {
        return -1;
    }
    return 0;
}

int port_write_8c379d1a(int port, int data)
{
    if (!port_ready_8c379cb0(port)) {
        return -2;
    }
    return func_8c37990e(port, data, 1);
}

int port_hello_8c379d48(int port)
{
    if (!port_ready_8c379cb0(port)) {
        return -2;
    }
    return func_8c37990e(port, (int)str_8c3f7b30, 1);
}
