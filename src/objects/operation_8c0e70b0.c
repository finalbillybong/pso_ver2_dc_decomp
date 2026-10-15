typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d9];
    unsigned char f1d9;
    unsigned char f1da;
    unsigned char f1db;
    unsigned char f1dc;
};
extern void flag_owner_8c074ddc(void *);
void operation_8c0e70b0(Object *o)
{
    if (!((unsigned int)o->f1db < (unsigned int)o->f1d9) && !((unsigned int)o->f1dc < (unsigned int)o->f1da)) {
        return;
    }
    flag_owner_8c074ddc((void *)o);
}
