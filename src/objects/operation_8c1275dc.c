typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
extern float distance_xz(void *, void *);
void operation_8c1275dc(Object *o)
{
    float t1;
    t1 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x54)));
    if (t1 > 100.0f) {
        if (((o->f3a4 & 1)) != 0) {
            return;
        }
        if (o->f30a == 8) {
            return;
        }
        o->f39c = o->f30a;
        o->f390 = 8;
        return;
    }
    if (((o->f3a4 & 1)) == 0 && o->f30a != 0) {
        o->f39c = o->f30a;
        o->f390 = 0;
    }
}
