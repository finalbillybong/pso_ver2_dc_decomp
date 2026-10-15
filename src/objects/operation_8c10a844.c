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
void operation_8c10a844(Object *o)
{
    if (o->f390 == 7) {
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 0) {
            o->f39c = o->f30a;
            o->f390 = 0;
        }
    }
}
