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
    char unknown30c[0x48];
    short f354;
    char unknown356[0x3a];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
void operation_8c1527ac(Object *o, int a1)
{
    if (((o->f34 & 0x800)) == 0) {
        if (((o->f3a4 & 0x10000)) == 0) {
            if (o->f30a != 9) {
                o->f354 = a1;
                o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
                if (((o->f3a4 & 1)) == 0) {
                    if (o->f30a != 9) {
                        o->f39c = o->f30a;
                        o->f390 = 9;
                    }
                }
            }
        }
    }
}
