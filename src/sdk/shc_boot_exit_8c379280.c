typedef void (*SysFn)(int);
extern void func_8c36ba44(void);

void boot_exit_8c379280(void)
{
    *(int *)0xa05f811c = 0xff;
    if (*(unsigned char *)0x8c0080fc == 1) {
        if (*(unsigned char *)0x8c0080fe == 1) {
            ((void (*)(void))0x8c008300)();
        } else {
            *(int *)0x8c000064 = 0x8c008000;
            (*(SysFn *)0x8c0000e0)(3);
        }
    } else {
        (*(SysFn *)0x8c0000e0)(1);
    }
}

int boot_menu_8c3792b6(void)
{
    func_8c36ba44();
    return ((int (*)(int))*(SysFn *)0x8c0000e0)(2);
}
