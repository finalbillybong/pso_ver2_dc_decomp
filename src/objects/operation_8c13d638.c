typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x1c];
    int f3c4;
};
void operation_8c13d638(Object *o, int a1)
{
    if (((o->f34 & 0x800)) == 0) {
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 2) {
            o->f39c = o->f30a;
            o->f390 = 2;
        }
        o->f3c4 = a1;
    }
}
