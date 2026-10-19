typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    Vector3 f08;
    int f14;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2e8];
    int f350;
    char unknown354[0x28];
    int f37c;
};
extern int call_8c0c4f08(void *);
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c021e84(Object *o)
{
    int v1;
    int t1;
    S_c8c021ef8 *t2;
    Object *self = o;
    v1 = 0;
    if (self->f04 >= 0 && call_8c0c4f08((void *)(&self->f08)) == 0) {
        v1 = 1;
    }
    if (v1 != 0) {
        t2 = lookup_low_id((int)(self->f02));
        if (t2 != 0) {
            *(Vector3 *)&t2->f3c = *(Vector3 *)&self->f08;
            t2->f37c = (int)(self->f04);
            t2->f64 = (int)(self->f14);
            t2->f350 |= 0x4000000;
        }
    }
}
