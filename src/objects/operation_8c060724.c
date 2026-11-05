extern int g_8c467a44;
extern int g_8c467a48;
extern int g_8c467a4c;
extern int g_8c467a50;
extern int g_8c467a54;
extern void operation_8c100aec(int);
void operation_8c060724(int a0)
{
    g_8c467a4c = a0;
    g_8c467a48 = (int)(g_8c467a48);
    g_8c467a50 = g_8c467a44 + g_8c467a48 + a0;
    g_8c467a54 = (int)((float)(g_8c467a44 + g_8c467a48 + a0) * 0.423333317f);
    operation_8c100aec((int)(g_8c467a44 + g_8c467a48 + a0));
}
