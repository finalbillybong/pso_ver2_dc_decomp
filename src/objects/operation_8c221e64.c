typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    char unknown28[0x4];
    int f2c;
    int f30;
    char unknown34[0xc0];
    int ff4;
};
extern void operation_8c220860(int);
void operation_8c221e64(Object *o)
{
    int v1;
    int v2;
    switch (o->f20) {
    case 0:
        v2 = (int)o->ff4;
        v1 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v1);
        if (!(v1 > (v2 * 3 - v2))) {
            return;
        }
        o->f20 = 1;
        operation_8c220860((int)(o->f2c));
        o->f2c += 1;
        return;
    case 1:
        v1 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v1);
        if (!(v1 > (o->ff4 * 0xd))) {
            return;
        }
        o->f20 = 2;
        return;
    case 2:
        v1 = (int)o->ff4;
        v2 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v2);
        if (!(v2 > (v1 * 0xe - v1))) {
            return;
        }
        o->f20 = 3;
        operation_8c220860((int)(o->f2c));
        o->f2c += 1;
        return;
    case 3:
        v2 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v2);
        if (!(v2 > (o->ff4 * 0x18))) {
            return;
        }
        o->f24 = 0;
        o->f20 = 0;
        if (!(++o->f30 > 5)) {
            return;
        }
        o->f30 = 5;
        o->f20 = 4;
        return;
    case 4:
        o->f30 = 5;
        return;
    }
}
