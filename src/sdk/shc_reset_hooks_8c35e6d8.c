extern void func_8c342da6(void);
extern void func_8c342f36(void);
extern void func_8c355d5a(int *);
extern int obj_8c575754;
extern int *ptr_8c51b6d0;
extern int obj_8c575c5c;

void reset_hooks_8c35e6d8(void)
{
    func_8c342da6();
    ptr_8c51b6d0 = &obj_8c575754;
    func_8c355d5a(&obj_8c575c5c);
}

void call_8c342f36_8c35e6ee(void)
{
    func_8c342f36();
}

void call_reset_8c35e6f4(void)
{
    reset_hooks_8c35e6d8();
}

void call_8c35e6ee_8c35e6f8(void)
{
    call_8c342f36_8c35e6ee();
}
