typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
struct Object {
    char unknown0[0x2a];
    char f2a;
};
struct S_g8c4db9e4 {
    int f00;
};
extern void call_8c1ca890(Object *, int);
extern void call_8c1ca934(Object *, int, int);
extern void call_8c1caa08(Object *);
void operation_8c1ca664(Object *o)
{
    int v1;
    switch (o->f2a) {
    case 0:
        call_8c1ca890(o, 0xd);
        break;
    case 1:
        call_8c1ca890(o, 5);
        break;
    case 2:
        call_8c1ca934(o, 2, 3);
        break;
    case 4:
        call_8c1ca890(o, 5);
        break;
    case 5:
    case 6:
        call_8c1ca890(o, 5);
        break;
    case 7:
    case 8:
        call_8c1ca934(o, 1, 0xf);
        break;
    case 9:
        if (*(int *)0x8c4db9e4 != 0) {
            v1 = (int)((*(S_g8c4db9e4 **)0x8c4db9e4)->f00 & 1);
        } else {
            v1 = (int)0;
        }
        if (v1 == 0) {
            call_8c1ca890(o, 0);
        } else {
            call_8c1ca934(o, 0x10, 0x11);
        }
    case 3:
        break;
    }
    call_8c1caa08(o);
}
