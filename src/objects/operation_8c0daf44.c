typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
};
extern int operation_8c1eca04(void *, int);
int operation_8c0daf44(Object *o, int a1, int a2, int a3)
{
    int t1;
    if (o->f04 != 0) {
        return 0;
    }
    switch ((short)a2) {
    case 4:
        switch ((short)a3) {
        case 9:
        case 10:
            return 1;
        }
        return 0;
    case 3:
        t1 = operation_8c1eca04((void *)a1, (int)((short)a3));
        return (int)(t1);
    }
    return 0;
}
