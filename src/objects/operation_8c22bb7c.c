typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x69];
    char f69;
    short f6a;
    short f6c;
};
extern char g_8c41cba0[];
extern int operation_8c01d88c(void *, int);
extern void operation_8c22bd64(void *, short);
extern void operation_8c22bd14(void *, short);
void operation_8c22bb7c(Object *o)
{
    int v6;
    int v9;
    short v8;
    int v10;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d88c((void *)v1, 0xc0);
    if (t1 == 0) {
        t2 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0xc0);
        if (t2 == 0) {
            return;
        }
    }
    if (o->f69 != 0) {
        v8 = o->f6c;
        v6 = (int)0x64;
    } else {
        v8 = o->f6a;
        v6 = (int)0xfa;
    }
    v9 = (int)(int)((float)(short)v6 * 0.025f);
    t3 = operation_8c01d88c((void *)v1, 0x80);
    if (t3 == 0) {
        t4 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x80);
        if (t4 == 0) {
            goto L_8c22bbfa;
        }
    }
    v8 = v8 + v9;
L_8c22bbfa:;
    t5 = operation_8c01d88c((void *)v1, 0x40);
    if (t5 == 0) {
        t6 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x40);
        if (t6 == 0) {
            goto L_8c22bc18;
        }
    }
    v8 = v8 - v9;
L_8c22bc18:;
    if (v8 > 0) {
        v8 = 0;
    }
    v10 = -(short)v6;
    if (v10 > v8) {
        v8 = v10;
    }
    if (o->f69 != 0) {
        operation_8c22bd64((void *)o, v8);
        return;
    }
    operation_8c22bd14((void *)o, v8);
}
