typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Owner {
    char unknown0[0x94];
    char *f94;
} Owner;
typedef struct Object {
    char unknown0[0x7c];
    Owner *f7c;
    unsigned int f80;
    int f84;
    char unknown88[0x58];
    Vector3 fe0;
} Object;
void operation_8c110a74(Object *o, unsigned int a1)
{
    o->f80 = a1;
    o->f84 &= ~0x1000;
    switch (a1) {
    case 0:
        o->f84 &= ~0x30;
        o->fe0 = *(Vector3 *)(o->f7c->f94 + 0x324);
        break;
    case 1:
        o->f84 &= ~0x10;
        o->f84 |= 0x20;
        break;
    case 2:
        o->f84 &= ~0x20;
        o->f84 |= 0x10;
        break;
    case 3:
        break;
    case 8:
        o->fe0 = *(Vector3 *)(o->f7c->f94 + 0x324);
        break;
    case 0x10:
        o->f84 &= ~0x10;
        o->f84 |= 0x20;
        break;
    }
}
