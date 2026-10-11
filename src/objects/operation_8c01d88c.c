typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern int replicate_nibble_8c01d8c4(Object *, int);
int operation_8c01d88c(Object *o, int a1)
{
    int t1;
    t1 = replicate_nibble_8c01d8c4(o, a1);
    return t1 & o->f34;
}
