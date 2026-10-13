typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d];
    char f1d;
};
void operation_8c19f504(Object *o, int a1, int a2, int a3)
{
    int v3;
    int v7;
    int v9;
    if (a1 != 1) {
        if (a1 == 2) {
            goto L_8c19f526;
        }
        if (a1 == 3) {
            goto L_8c19f51e;
        }
    } else {
        o->f1d = 0;
        return;
L_8c19f51e:;
        o->f1d = 1;
        return;
L_8c19f526:;
        o->f1d = 2;
        return;
    }
    switch ((unsigned int)((unsigned char)a2)) {
    case 1:
        v3 = (int)(unsigned char)a3;
        if ((unsigned char)a3 == 3) {
            o->f1d = 4;
            return;
        }
        if (v3 == 2) {
            o->f1d = 0xa;
            return;
        }
        o->f1d = 0xb;
        return;
    case 2:
        o->f1d = 3;
        return;
    case 3:
        v7 = (int)(unsigned char)a3;
        if ((unsigned char)a3 == 0) {
            o->f1d = 5;
            return;
        }
        v9 = (int)v7;
        if (v7 == 1) {
            o->f1d = 7;
            return;
        }
        if (v9 == 2) {
            o->f1d = 6;
            return;
        }
        o->f1d = 8;
        return;
    case 4:
        o->f1d = 9;
        return;
    case 0:
        break;
    }
    o->f1d = 0x2d;
}
