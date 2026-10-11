typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x4];
    short f32;
};
extern int current_effect_mode(void);
short operation_8c01d728(Object *o)
{
    int t1;
    int t2;
    t1 = current_effect_mode();
    if (t1 == 0) {
        return 0;
    }
    if ((unsigned int)0x1000 > (unsigned int)o->f20) {
        t2 = current_effect_mode();
        return ((unsigned int)1 >= (unsigned int)(t2 + -1)) ? o->f32 : o->f2c;
    }
    return o->f2c;
}
