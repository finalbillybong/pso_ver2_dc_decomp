typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2a];
    int f30;
    char unknown34[0x40];
    int f74;
};
extern void operation_8c13f65c(void *);
extern void call_8c13f708(Object *);
void operation_8c13f614(Object *o)
{
    if (!(--o->f74 >= 0)) {
        o->f04 |= 1;
        return;
    }
    switch (o->f30) {
    case 0:
        operation_8c13f65c((void *)o);
        return;
    case 1:
        call_8c13f708(o);
    }
}
