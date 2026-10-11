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
extern void *current_effect_mode(void);
void operation_8c01d778(Object *o, int a1)
{
    void *t1;
    if ((unsigned int)0x1000 > (unsigned int)o->f20) {
        t1 = current_effect_mode();
        if ((unsigned int)2 >= (unsigned int)t1) {
            o->f32 = a1;
        }
        o->f2c = a1;
        return;
    }
    o->f2c = a1;
}
