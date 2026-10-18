typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
extern int call_8c15816c(int, int);
extern int call_8c1580d0(int, int);
extern int operation_8c158110(int);
extern int operation_8c1581ac(int);
extern int call_8c15813c(int, int);
int operation_8c1c7658(Object *o)
{
    unsigned char v1;
    unsigned char v2;
    unsigned char v3;
    int v8;
    v8 = 0;
    v1 = (unsigned char)o->tag;
    switch (v1) {
    case 0:
        v8 = call_8c15816c((int)(o->f01), (int)(o->f02));
        break;
    case 1:
        v2 = (unsigned char)o->f01;
        switch (v2) {
        case 1:
        case 2:
            v8 = call_8c1580d0((int)v2, (int)(o->f02));
            break;
        case 3:
            v8 = operation_8c158110((int)(o->f02));
            break;
        }
        break;
    case 2:
        v8 = operation_8c1581ac((int)(o->f01));
        break;
    case 3:
        v3 = (unsigned char)o->f01;
        if (v3 == 2) {
            if ((unsigned int)0x1d >= (unsigned int)o->f02) {
                v8 = call_8c15813c(v3, (int)(o->f04));
            }
        } else {
            v8 = call_8c15813c(v3, (int)(o->f02));
        }
        break;
    }
    return v8;
}
