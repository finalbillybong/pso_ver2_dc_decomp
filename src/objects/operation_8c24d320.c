typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    unsigned short f20;
    short f22;
};
extern int lookup_low_id(int);
void operation_8c24d320(Object *o)
{
    int t1;
    t1 = lookup_low_id((int)(o->f20));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f22 == 0) {
        o->f04 |= 1;
        return;
    }
    o->f22 -= 1;
}
