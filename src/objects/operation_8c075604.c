typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0xc9];
    float f200;
    float f204;
    char unknown208[0x4];
    short f20c;
};
void operation_8c075604(Object *o)
{
    if (o->f136 == 0) {
        o->f20c = -1;
        return;
    }
    *(int *)0x8c4689f4 = 0;
    o->f200 = 0.0f;
    o->f204 = 0.03f;
}
