typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x208];
    short f208;
    short f20a;
};
extern void flag_owner_8c074ddc(void *);
void operation_8c17b838(Object *o)
{
    short a;
    short b;
    a = o->f20a;
    b = o->f208;
    if (b > a || -a > b) {
        flag_owner_8c074ddc((void *)o);
    }
}
