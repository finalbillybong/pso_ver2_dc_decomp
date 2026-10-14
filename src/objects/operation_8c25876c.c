typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
};
extern void call_8c258794(void);
void operation_8c25876c(Object *o)
{
    o->f24 += -1;
    if (o->f24 == 0) {
        call_8c258794();
        o->f04 |= 1;
    }
}
