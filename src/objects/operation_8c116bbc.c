typedef struct Arg1 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x20];
    unsigned char ids[1];
} Arg1;
typedef struct Object {
    char unknown0[0x5e0];
    int f5e0;
} Object;
int operation_8c116bbc(Object *o, Arg1 *a1)
{
    int n;
    int r;
    int i;
    unsigned char *p;
    int k;
    n = a1->f14;
    r = 0x85;
    p = (unsigned char *)a1 + 0x38;
    k = 0x5e0;
    for (i = 0; i < n; i++) {
        if (p[i] == *(int *)((char *)o + k)) {
            r = i;
            break;
        }
    }
    return r;
}
