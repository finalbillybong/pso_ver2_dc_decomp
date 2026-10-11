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
    char unknown3a8[0x17c];
    float f524;
};
void operation_8c154ea4(Object *o, float f0)
{
    if (((o->f34 & 0x800)) == 0) {
        if (((o->f3a4 & 0x20000)) == 0) {
            if (o->f30a != 0xc) {
                o->f524 = f0 + 55.0f;
                o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
                if (((o->f3a4 & 1)) == 0) {
                    if (o->f30a != 0xc) {
                        o->f39c = o->f30a;
                        o->f390 = 0xc;
                    }
                }
            }
        }
    }
}
