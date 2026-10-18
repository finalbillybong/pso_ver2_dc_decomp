typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    char f68;
    char f69;
};
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c21ec0c(int, char);
extern void operation_8c21ec3c(void *);
void operation_8c21e810(Object *o)
{
    int v4;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (((o->f68 & 4)) == 0) {
        v1 = (int)(g_8c41cba0 + 0x20);
        t1 = operation_8c01d844(v1, 0xc0, 6, 1);
        if (t1 == 0) {
            t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xc0, 6, 1);
            if (t2 == 0) {
                return;
            }
        }
        call_8c05fbf8(0x50000, 0, 0, 0);
        v4 = (int)0;
        t3 = operation_8c01d844(v1, 0x80, 6, 1);
        if (t3 == 0) {
            t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
            if (t4 == 0) {
                goto L_8c21e884;
            }
        }
        v4 = (int)(v4 + 1);
L_8c21e884:;
        t5 = operation_8c01d844(v1, 0x40, 6, 1);
        if (t5 == 0) {
            t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
            if (t6 == 0) {
                goto L_8c21e8aa;
            }
        }
        v4 -= 1;
L_8c21e8aa:;
        if ((char)v4 != 0) {
            do {
                o->f69 += v4;
                if (!(o->f69 >= 0)) {
                    o->f69 += 6;
                }
                if (o->f69 >= 6) {
                    o->f69 -= 6;
                }
                t7 = operation_8c21ec0c((int)o, o->f69);
            } while (t7 == 0);
            operation_8c21ec3c((void *)o);
        }
    }
}
