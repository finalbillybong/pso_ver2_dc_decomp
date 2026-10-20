typedef struct S_g8c467180 {
    char unknown0[0x30];
    int f30;
} S_g8c467180;
extern char g_8c2f2aac[];
extern S_g8c467180 *g_8c467180;
extern int g_8c46718c;
extern S_g8c467180 *call_8c104ff8(void *);
void operation_8c04c448(int a0)
{
    switch (a0) {
    case 0:
        g_8c467180 = call_8c104ff8(g_8c2f2aac);
        break;
    case 2:
        g_8c467180 = call_8c104ff8(g_8c2f2aac + 0xd);
        break;
    case 3:
        g_8c467180 = call_8c104ff8(g_8c2f2aac + 0x18);
        break;
    case 4:
        g_8c467180 = call_8c104ff8(g_8c2f2aac + 0x23);
        break;
    case 1:
    default:
        g_8c467180 = call_8c104ff8(g_8c2f2aac + 0x2f);
        break;
    }
    g_8c46718c = g_8c467180->f30;
}
