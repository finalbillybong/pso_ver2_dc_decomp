typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    int f6c;
    int f70;
};
extern int operation_8c20a7d0(int, int);
extern void operation_8c21225c(void);
void operation_8c2150d0(Object *o)
{
    char *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (char *)o->f70;
    t1 = operation_8c20a7d0((int)(((char *)o + 0x68)), 0x10);
    if (t1 != 0) {
        o->f70 -= 1;
    } else {
        t2 = operation_8c20a7d0((int)(((char *)o + 0x68)), 0x20);
        if (t2 != 0) {
            o->f70 += 1;
        } else {
            t3 = operation_8c20a7d0((int)(((char *)o + 0x68)), 0x20000);
            if (t3 != 0) {
                o->f70 = 0;
            } else {
                t4 = operation_8c20a7d0((int)(((char *)o + 0x68)), 0x10000);
                if (t4 != 0) {
                    o->f70 = 2;
                }
            }
        }
    }
    if (o->f6c > o->f70) {
        o->f70 = (int)(o->f6c);
    } else {
        if (o->f70 >= 3) {
            o->f70 = 2;
        }
    }
    if (o->f70 != (int)(v1)) {
        operation_8c21225c();
    }
}
