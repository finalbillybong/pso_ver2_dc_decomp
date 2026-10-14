typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c01b9e0(void);
void operation_8c25f920(Object *o)
{
    if (*(int *)0x8c5134c0 != 0) {
        operation_8c01b9e0();
        o->f04 |= 1;
    }
}
