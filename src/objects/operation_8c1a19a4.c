typedef struct Object Object;
void operation_8c1a19a4(Object *o, int a1)
{
    int i;
    int *p;
    int n;
    p = (int *)((char *)o + 0x20);
    n = 0x200;
    for (i = 0; n > i; i++) {
        if (*p == 0) {
            *p = a1;
            p++;
            *p = 0;
            return;
        }
        p++;
    }
}
