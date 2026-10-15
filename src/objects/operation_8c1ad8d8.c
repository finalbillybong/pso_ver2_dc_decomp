typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c46efd4[];
extern void call_8c1086fc(void);
extern void call_8c380c5a(int, void *);
extern void call_8c3c14a0(void);
extern void call_8c1ad054(void);
extern void call_8c1ad0f8(void);
extern void call_8c391cc4(void);
void operation_8c1ad8d8(void)
{
    call_8c1086fc();
    if (*(int *)0x8c4e2278 != 0) {
        call_8c380c5a(2, (void *)((g_8c46efd4 + 0x14)));
        call_8c3c14a0();
        call_8c1ad054();
        call_8c1ad0f8();
        if (++*(int *)0x8c4e227c >= 4) {
            *(int *)0x8c4e227c = 0;
        }
    }
    call_8c391cc4();
    *(int *)0x8c4e2278 = 0;
}
