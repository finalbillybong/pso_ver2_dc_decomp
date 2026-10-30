typedef struct { char pad[0x28]; int handle; } Sock;
extern int func_8c37365c(int);
extern int func_8c37367c(int, Sock *, int, int, int, int, int);
extern void func_8c37366c(int, int);
extern int func_8c3750c6(Sock *, short, char);
extern int func_8c374a0a();
extern int func_8c374b24();
extern int func_8c3757ec();
extern int func_8c3758e4();
extern int func_8c3759cc();
extern int func_8c375b0a();
extern int func_8c3763de();
extern int func_8c374d08();
extern int func_8c374f7e();
extern int func_8c374e1a();

int net_call_8c372910(a, b)
int a;
int b;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c374a0a(a, b);
}

int net_call_8c37293e(a, b)
int a;
int b;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c374b24(a, b);
}

int net_call_8c37296c(a, b)
int a;
int b;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c3757ec(a, b);
}

int net_call_8c37299a(a, b)
int a;
int b;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c3758e4(a, b);
}

int net_call_8c3729c8(a, b, c)
int a;
int b;
int c;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c3759cc(a, b, c);
}

int net_call_8c3729fa(a, b, c)
int a;
int b;
int c;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c375b0a(a, b, c);
}

int net_call_8c372a2c(a, b)
int a;
int b;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c3763de(a, b);
}

int net_call_8c372a5a(a, b, c)
int a;
int b;
int c;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c374d08(a, b, c);
}

int net_call_8c372a8c(a, b, c, d)
int a;
int b;
int c;
int d;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c374f7e(a, b, c, d);
}

int net_call_8c372ac2(a, b, c, d)
int a;
int b;
int c;
int d;
{
    if (func_8c37365c(a)) {
        return -1;
    }
    return func_8c374e1a(a, b, c, d);
}

int net_call_8c372af8(a, b, c)
Sock *a;
short b;
char c;
{
    if (func_8c37365c(a->handle)) {
        return -1;
    }
    return func_8c3750c6(a, b, c);
}

int net_open_8c372b34(p)
Sock *p;
{
    int h = p->handle;
    int z;
    if (func_8c37365c(h)) {
        return -1;
    }
    z = 0;
    func_8c37367c(h, p, 1, z, z, z, z);
    func_8c37366c(h, 4);
    return z;
}

int net_open2_8c372b7a(p, a, b)
Sock *p;
int a;
int b;
{
    int h = p->handle;
    if (func_8c37365c(h)) {
        return -1;
    }
    func_8c37367c(h, p, a, b, 0, 0, 0);
    func_8c37366c(h, 5);
    return 0;
}
