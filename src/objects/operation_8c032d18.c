typedef struct Object Object;
struct Object {
    char unknown0[0x10a0];
    int f10a0;
};
extern void call_8c12b880(void *, int, int);
extern void call_8c18e720(void *, char *);
void operation_8c032d18(Object *o, char *a1)
{
    int q;
    int off;
    int n;
    char *start;
    call_8c12b880((void *)((char *)o + 0x20), 0, 0x1000);
    q = 0;
    start = a1;
    o->f10a0 = 0;
    off = 0x10a0;
    for (;;) {
        switch (*a1) {
        case 0:
            n = o->f10a0;
            o->f10a0 = n + 1;
            call_8c18e720((char *)o + (n << 5) + 0x20, start);
            return;
        case '"':
            if (q != 0) {
                q = 0;
                *a1 = 0;
                a1++;
            } else {
                a1++;
                start = a1;
                q = 1;
            }
            break;
        case 9:
        case 10:
            if (q != 0) {
                a1++;
                break;
            }
            *a1++ = 0;
            {
                int *pc = (int *)((char *)o + off);
                n = *pc;
                *pc = n + 1;
            }
            call_8c18e720((char *)o + (n << 5) + 0x20, start);
            start = a1;
            break;
        default:
            a1++;
            break;
        }
    }
}
