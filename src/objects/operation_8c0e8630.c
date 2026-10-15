typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e0];
    unsigned char f1e0;
    unsigned char f1e1;
    unsigned char f1e2;
    unsigned char f1e3;
};
extern void flag_owner_8c074ddc(void *);
void operation_8c0e8630(Object *o)
{
    if (!((unsigned int)o->f1e2 < (unsigned int)o->f1e0) && !((unsigned int)o->f1e3 < (unsigned int)o->f1e1)) {
        return;
    }
    flag_owner_8c074ddc((void *)o);
}
