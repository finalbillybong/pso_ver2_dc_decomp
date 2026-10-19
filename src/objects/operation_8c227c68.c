typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Arg0_24 *f24;
};
extern void update_hierarchy(void *);
void operation_8c227c68(Object *o)
{
    if (o->f24 != 0) {
        update_hierarchy((void *)(o->f24));
        return;
    }
    o->f04 |= 1;
}
