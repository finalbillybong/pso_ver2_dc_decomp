typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x374];
    int f374;
    int f378;
    char unknown37c[0x40];
    char f3bc;
};
void operation_8c02cbb0(Object *o, int a1)
{
    int v2;
    int v4;
    int v6;
    int v8;
    int v9;
    if (o->f374 < 0 || o->f374 >= 3) {
        v2 = (int)0;
    } else {
        v2 = (int)o->f374;
    }
    switch (v2) {
    case 0:
    case 1:
        v4 = (int)0xe;
        break;
    case 2:
    default:
        v4 = (int)0x1d;
    }
    if (o->f378 < 0 || o->f378 >= 3) {
        v6 = (int)0;
    } else {
        v6 = (int)o->f378;
    }
    v8 = (int)v4;
    if (v6 == 2) {
        v8 = (int)-1;
    }
    v9 = (int)a1;
    if ((char)a1 > (char)v8) {
        v9 = (int)v8;
    }
    o->f3bc = v9;
}
