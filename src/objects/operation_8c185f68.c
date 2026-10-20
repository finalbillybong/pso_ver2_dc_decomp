typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern short g_8c46ec4c;
extern int g_8c46ec50;
extern int g_8c46ec54;
extern int g_8c4dbb80;
extern int g_8c4dbb84;
extern int g_8c4dbb88;
extern int g_8c4dbb8c;
extern int g_8c4dbb90;
extern int g_8c4dbb94;
extern int g_8c4dbb9c;
extern void call_8c369eb8(void *);
extern int operation_8c18604c(int);
extern void call_8c1860ac(void);
extern void call_8c18613c(void);
extern void operation_8c186080(void);
void operation_8c185f68(void)
{
    int t1;
    g_8c4dbb80 = (int)(g_8c46ec50);
    g_8c4dbb84 = g_8c46ec54;
    g_8c4dbb88 = 0;
    g_8c4dbb8c = 0;
    g_8c4dbb90 = 0;
    g_8c4dbb94 = 0;
    g_8c4dbb9c = 0;
    g_8c46ec4c = 0;
    call_8c369eb8((void *)((void *)0x8c319a80));
    t1 = operation_8c18604c(0x8000);
    if (t1 != 0) {
        call_8c1860ac();
        call_8c18613c();
        operation_8c186080();
        g_8c46ec4c |= 1;
    }
}
