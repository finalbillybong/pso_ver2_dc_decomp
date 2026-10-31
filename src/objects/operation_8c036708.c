extern char g_8c2ed2b4[];
extern char g_8c46200c[];
int operation_8c036708(int a0)
{
    char *base;
    char m;
    char *p;
    int j;
    base = a0 * 0x57 + g_8c46200c;
    m = -1;
    for (j = 0; j != 3; j++) {
        if (a0 >= 0 && a0 < 2 && j >= 0 && j < 3) {
            p = base + j * 0x1d;
        } else {
            p = g_8c2ed2b4 + 0xfc;
        }
        if (*p != 0 && *p != m) {
            return 1;
        }
    }
    return 0;
}
