typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e4];
    unsigned char f1e4;
    unsigned char f1e5;
};
extern void flag_owner_8c074ddc(void *);
void operation_8c075f8c(Object *o)
{
    if ((unsigned int)o->f1e5 < (unsigned int)o->f1e4) {
        flag_owner_8c074ddc((void *)o);
    }
}
