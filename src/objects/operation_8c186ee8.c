typedef struct Entry {
    int f00;
    short f04;
    char unknown6[0xe];
} Entry;
typedef struct Table {
    char unknown0[0x8];
    int f08;
} Table;
int operation_8c186ee8(int a0, int a1, int a2)
{
    int n;
    char *v10;
    v10 = *(char **)((char *)0x8c4dbba0 + (a0 << 2));
    if (v10 == 0) {
        return 0;
    }
    n = ((Table *)v10)->f08;
    v10 += 0x10;
    for (a0 = 0; n > a0; a0++, v10 += 0x14) {
        if (((Entry *)v10)->f00 == a1) {
            ((Entry *)v10)->f04 |= a2;
        }
    }
    return 1;
}
