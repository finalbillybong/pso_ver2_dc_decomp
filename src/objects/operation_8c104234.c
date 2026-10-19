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
    char unknown24[0xc];
    float f30;
    int f34;
    int f38;
    float f3c;
    float f40;
};
extern void operation_8c104148(void *);
extern void call_8c1041b4(Object *);
void operation_8c104234(Object *o)
{
    float v1;
    switch (o->f20) {
    case 0:
        o->f3c += 7.0f;
        v1 = (float)o->f40;
        if (!(v1 > o->f3c)) {
            o->f3c = v1;
            o->f20 = 1;
        }
        operation_8c104148((void *)o);
        break;
    case 1:
        o->f30 -= 0.05f;
        if (0.0f > o->f30) {
            o->f30 = 0.0f;
            o->f04 |= 1;
            return;
        }
    }
    o->f38 += 0x800;
    o->f34 += 1;
    if (o->f34 >= 0xc) {
        o->f34 = 0;
    }
    call_8c1041b4(o);
}
