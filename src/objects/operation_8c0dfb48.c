typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x19];
    unsigned char f81;
};
extern int operation_8c2097c4(void);
extern void operation_8c0e10f4(void *);
void operation_8c0dfb48(Object *o)
{
    int t1;
    if (((o->f81 & 4)) != 0 && 0x1000000 > o->f64) {
        t1 = operation_8c2097c4();
        o->f64 += t1 + 1;
    }
    if (((o->f34 & 2)) != 0) {
        if (((o->f34 & 1)) != 0 && ((o->f34 & 4)) == 0) {
            return;
        }
        o->f34 &= -5;
        operation_8c0e10f4((void *)o);
    }
}
