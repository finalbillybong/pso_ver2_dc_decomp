typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    short ff2;
    char unknownf4[0x4];
    float ff8;
    char unknownfc[0x4];
    float f100;
};
int check_range_8c01cf68(Object *o, float f0)
{
    if ((o->fe8 & 4) == 0 || (o->fe8 & 1) != 0) {
        if (o->ff0 == o->ff2) {
            if (o->ff8 > f0) {
                if (o->ff8 <= (f0 + o->f100)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
