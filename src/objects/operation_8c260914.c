typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
};
extern void call_8c260acc(void);
void operation_8c260914(Object *o)
{
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    call_8c260acc();
}
