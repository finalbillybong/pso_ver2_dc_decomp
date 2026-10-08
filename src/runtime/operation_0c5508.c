/* Provisional address-based name; wider setup/update role remains under review. */
#define operation_01da7c ((void (*)(void))0x8c01da7c)
#define operation_01dea8 ((void (*)(void))0x8c01dea8)
#define operation_011eec ((void (*)(void))0x8c011eec)
extern void  operation_0331e4(void *);
extern void  operation_0332a4(void *);
#define operation_0410b4 ((void (*)(void))0x8c0410b4)
#define operation_05f9e4 ((void (*)(void))0x8c05f9e4)
#define operation_184614 ((void (*)(void))0x8c184614)
#define operation_01e180 ((signed char (*)(void))0x8c01e180)
#define operation_01c234 ((void (*)(void))0x8c01c234)
#define operation_104da8 ((int (*)(void))0x8c104da8)
#define operation_380516 ((void (*)(void))0x8c380516)

void operation_0c5508(void) {
    operation_01da7c();
    operation_01dea8();
    operation_011eec();
    operation_0331e4((void *)0x8c44bec8);
    operation_0332a4((void *)0x8c44bec8);
    operation_0410b4();
    operation_05f9e4();
    operation_184614();
    if (operation_01e180()) operation_01c234();
    if (!operation_104da8()) {
        operation_380516();
        (*(int *)0x8c418244)++;
    }
}
