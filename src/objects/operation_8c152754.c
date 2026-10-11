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
};
void operation_8c152754(Object *o)
{
    if (((o->f34 & 0x800)) == 0) {
        if (((o->f3a4 & 0x40000)) == 0) {
            o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
            if (((o->f3a4 & 1)) == 0) {
                if (o->f30a != 0xb) {
                    o->f39c = o->f30a;
                    o->f390 = 0xb;
                }
            }
        }
    }
}
