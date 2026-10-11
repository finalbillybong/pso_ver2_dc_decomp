typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x440];
    unsigned short f440;
    char unknown442[0xe];
    short f450;
    short f452;
    short f454;
};
void set_link_state_8c0d9cdc(Object *o, int a1, int a2)
{
    int v1;
    if ((unsigned short)a1 == (o->f440 & 0xffff)) {
        v1 = (int)2;
    } else {
        v1 = (int)1;
    }
    o->f450 = a1;
    o->f452 = a2;
    o->f454 = v1;
}
