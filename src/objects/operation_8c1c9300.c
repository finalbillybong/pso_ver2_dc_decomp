typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
struct S_c8c0adc1c {
    char unknown0[0x18];
    int f18;
};
extern S_c8c0adc1c *call_8c0adc1c(int, int);
int operation_8c1c9300(Object *o)
{
    S_c8c0adc1c *t1;
    if (o->tag == 3 && o->f01 == 2) {
        t1 = call_8c0adc1c((int)(o->f04), (int)(o->f02));
        if (t1 != 0) {
            return t1->f18;
        }
    }
    return 0;
}
