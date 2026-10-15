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
    int f24;
};
extern void call_8c060724(int);
void operation_8c25ee58(Object *o)
{
    if (!(--o->f20 > 0)) {
        call_8c060724(0);
        o->f04 |= 1;
        return;
    }
    if (0xf >= o->f20) {
        call_8c060724((int)((int)((float)o->f20 * 0.0666666701f * (float)o->f24)));
    }
}
