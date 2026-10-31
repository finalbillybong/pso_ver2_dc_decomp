typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    void *f04;
    void *f08;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int operation_8c02c1ac(void *);
extern int call_8c023484(int, void *, void *);
void operation_8c0233e8(Object *o)
{
    Object *self = o;
    int x;
    int x2;
    int nx;
    int id;
    int e;
    int g;
    unsigned short v2;
    g = g_8c4627c8;
    v2 = self->f02;
    x = 0;
    if (g == 0 && v2 == g_8c418248) {
        x = 1;
    }
    nx = x == 0;
    if (nx) {
        id = v2;
        if (id == 0xffff) {
            e = 0;
        } else {
            if (id >= 0xc) {
                e = 0;
            } else {
                e = *(int *)((char *)0x8c41ce2c + (id << 2));
            }
        }
        if (e != 0) {
            if (operation_8c02c1ac((void *)e) == 0) {
                g = g_8c4627c8;
                v2 = self->f02;
                x2 = 0;
                if (g == 0 && v2 == g_8c418248) {
                    x2 = 1;
                }
                nx = x2 == 0;
                if (nx) {
                    call_8c023484(e, self->f04, self->f08);
                }
            }
        }
    }
}
