typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern void call_8c0fe1f4(int, short, short);
void operation_8c0236b0(Object *o)
{
    int n;
    int v10;
    int v7;
    int v4;
    int e;
    unsigned short id;
    int pm1;
    unsigned short pm2;
    pm2 = o->f02;
    pm1 = 0;
    id = (int)(int)pm2;
    v4 = v7 = v10 = pm1;
    if (g_8c4627c8 == 0) {
        if (!(id != g_8c418248)) {
            v4 = 1;
        }
    }
    if (v4 == 0 && o->f04 >= 0) {
        v7 = 1;
    }
    if (v7 != 0 && o->f06 >= 0) {
        v10 = 1;
    }
    if (v10 != 0) {
        n = id;
        if (n == 0xffff) {
            e = 0;
        } else {
            if (n >= 0xc) {
                e = 0;
            } else {
                e = *(int *)((char *)0x8c41ce2c + (n << 2));
            }
        }
        if (e != 0) {
            call_8c0fe1f4(e, o->f04, o->f06);
        }
    }
}
