typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
    short f04;
};
extern short g_8c5051fc;
extern void call_8c210a0c(int);
void operation_8c210b1c(Object *o)
{
    short v1;
    int v4;
    if (o->f02 == 1) {
        v1 = (short)o->f04;
        v4 = (int)0;
        if ((short)v1 >= 0x57 && 0xb7 >= (short)v1) {
            v4 = (int)1;
        }
        if (v4 != 0) {
            g_8c5051fc = v1;
            call_8c210a0c(v4);
        }
    }
}
