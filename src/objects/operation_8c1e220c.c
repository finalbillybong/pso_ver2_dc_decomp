typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xbc];
    int fbc;
};
extern int operation_8c2097a8(int);
void operation_8c1e220c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    switch (*(int *)0x8c467188) {
    case 0:
        o->fbc = 0;
        t1 = operation_8c2097a8(0x10);
        if (t1 != 0) {
            o->fbc |= 1;
        }
        t2 = operation_8c2097a8(0x20);
        if (t2 != 0) {
            o->fbc |= 2;
        }
        t3 = operation_8c2097a8(0x40);
        if (t3 != 0) {
            o->fbc |= 4;
        }
        t4 = operation_8c2097a8(0x80);
        if (t4 == 0) {
            return;
        }
        o->fbc |= 8;
        return;
    case 1:
    case 2:
    case 3:
    case 4:
        o->fbc = 6;
    }
}
