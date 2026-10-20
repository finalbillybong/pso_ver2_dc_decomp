typedef struct S_g8c50590c {
    char unknown0[0x50];
    void *f50;
} S_g8c50590c;
typedef struct S_g8c505910 {
    char unknown0[0x4];
    int f04;
    char *f08;
    int *f0c;
} S_g8c505910;
typedef struct Arg2 {
    unsigned char f00;
    unsigned char f01;
} Arg2;
extern S_g8c50590c *g_8c50590c;
extern S_g8c505910 *g_8c505910;
extern void operation_1c7dd4(void *);
extern int operation_8c219df0(int);
extern int call_8c218d6c(int, int *, Arg2 *);
extern int call_8c218c14(int, void *, int, int, int);
extern void call_8c219308(int, int, Arg2 *);
static inline int find_entry(int a0, int a1, Arg2 *a2)
{
    int i;
    S_g8c505910 *g;
    if (g_8c505910 != 0 && operation_8c219df0(a0) == 1) {
        for (i = 0; g = g_8c505910, i != g->f04; i++) {
            if (g->f08[i] == a1 + 1 && call_8c218d6c(a0, (int *)((char *)g->f0c + (i << 2)), a2) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
void operation_8c21955c(int a0, int a1, Arg2 *a2)
{
    int r;
    if (a2 != 0) {
        operation_1c7dd4((void *)a2);
        if (!find_entry(a0, a1, a2)) {
            r = (unsigned char)call_8c218c14(a0, g_8c50590c->f50, a1, 7, 0xa);
            switch (r) {
            case 0:
                a2->f00 = 0;
                break;
            case 1:
                a2->f00 = 1;
                a2->f01 = 1;
                break;
            case 2:
                a2->f00 = 1;
                a2->f01 = 2;
                break;
            case 3:
                a2->f00 = 1;
                a2->f01 = 3;
                break;
            case 4:
                a2->f00 = 3;
                break;
            case 5:
                a2->f00 = 4;
                break;
            default:
                return;
            }
            call_8c219308(a0, a1, a2);
        }
    }
}
