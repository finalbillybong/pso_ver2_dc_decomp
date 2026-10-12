typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c0649f4(Object *o, int a1)
{
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 == 4) {
                return;
            }
            if (a1 == 5) {
                return;
            }
            return;
        }
        o->f04 |= 1;
    }
}
