extern void func_8c371e5c(void);
extern int func_8c371e7c(int);
extern int func_8c371f12(int, int, int, int);
extern int func_8c372184(int);
extern int func_8c37203c(int);
extern int func_8c372180(void);
extern int func_8c37207a(void);
extern int handle_8c566d80;

void wrap_open_8c373764(void)
{
    func_8c371e5c();
    handle_8c566d80 = func_8c371e7c(8);
}

int wrap_call3_8c37377a(int a, int b, int c)
{
    return func_8c371f12(handle_8c566d80, a, b, c);
}

int wrap_8c373792(void)
{
    return func_8c372184(handle_8c566d80);
}

int wrap_8c37379a(void)
{
    return func_8c37203c(handle_8c566d80);
}

int wrap_8c3737a2(void)
{
    return func_8c372180();
}

int wrap_8c3737a8(void)
{
    return func_8c37207a();
}
