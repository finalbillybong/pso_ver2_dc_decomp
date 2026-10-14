typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50596c S_g8c50596c;
extern short g_8c46ec4c;
extern int g_8c4da660;
extern int g_8c4dc844;
extern S_g8c50596c *g_8c50596c;
extern int g_8c506068;
extern char g_8c315828[];
extern void call_8c14fc20(void *);
extern void call_8c369eb8(void *);
extern void call_8c14fdf0(void);
extern void call_8c14f904(void);
extern void call_8c14fbbc(void);
extern void call_8c1500d8(void *);
void operation_8c14fd04(void)
{
    switch (g_8c4dc844) {
    case 1:
        call_8c14fc20((void *)((void *)0x8c4dc824));
        return;
    case 2:
        g_8c4da660 = (int)(g_8c50596c);
        call_8c369eb8((void *)((void *)g_8c315828));
        call_8c14fdf0();
        call_8c369eb8((void *)((g_8c315828 + 0x4)));
        call_8c14f904();
        call_8c14fbbc();
        g_8c46ec4c = 1;
        g_8c4da660 = 0;
        return;
    case 3:
        g_8c4da660 = (int)(g_8c506068);
        call_8c369eb8((void *)((void *)g_8c315828));
        call_8c14fdf0();
        call_8c369eb8((void *)((g_8c315828 + 0x4)));
        call_8c14f904();
        call_8c14fbbc();
        g_8c46ec4c = 1;
        g_8c4da660 = 0;
        return;
    case 4:
        call_8c1500d8(g_8c50596c);
        return;
    case 0:
        break;
    }
}
