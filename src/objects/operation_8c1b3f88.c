typedef struct Inner {
    char unknown0[0x4];
    void *f04;
} Inner;
typedef struct Res {
    char unknown0[0x4];
    Inner *f04;
} Res;
extern Res *call_8c03ef88(int, int);
extern void call_8c0344f0(void *, int, int, int);
void operation_8c1b3f88(char *o)
{
    int i;
    int e;
    int k1;
    int k2;
    Res *r;
    k1 = 0x398;
    k2 = 0x42c;
    for (i = 0; i < 6; i++) {
        e = *(int *)((char *)(*(char **)(*(char **)(o + k1) + k2) + 8) + (*(int *)((char *)0x8c326b54 + (i << 2)) << 4));
        switch (i) {
        case 0:
            r = call_8c03ef88(e, 1);
            call_8c0344f0(r->f04->f04, 8, 0, 0);
            break;
        case 1:
            r = call_8c03ef88(e, 1);
            call_8c0344f0(r->f04->f04, 8, 0, 0);
            break;
        case 2:
        case 3:
        case 4:
            r = call_8c03ef88(e, 2);
            call_8c0344f0(r->f04->f04, 8, 0, 0);
            break;
        case 5:
            r = call_8c03ef88(e, 5);
            call_8c0344f0(r->f04->f04, 8, 0, 0);
            r = call_8c03ef88(e, 0x5e);
            call_8c0344f0(r->f04->f04, 8, 0, 0);
            break;
        }
    }
}
