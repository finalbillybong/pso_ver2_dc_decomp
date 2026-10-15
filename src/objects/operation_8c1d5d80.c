typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned char f68;
    char unknown69[0x7];
    int f70;
    int f74;
    int f78;
    char unknown7c[0x30];
    Vector3 fac;
};
extern void operation_8c0e1bbc(void *);
void operation_8c1d5d80(Object *o)
{
    operation_8c0e1bbc((void *)(((char *)o + 0x2c)));
    o->f68 = (unsigned int)o->f68 >> 1 << 1;
    o->f70 = 0;
    o->f74 = 0;
    o->f78 = 0;
    *(Vector3 *)&o->fac = *(Vector3 *)&*(Vector3 *)0x8c2875c0;
}
