typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    int f40;
};
extern int operation_8c01c25c(void);
extern float call_8c087bcc(void);
extern float call_8c087ba0(void);
void operation_8c191880(Object *o)
{
    int t1;
    float t2;
    float t3;
    o->f20 = (o->f28 - o->f20) * 0.1f + o->f20;
    o->f24 = (o->f2c - o->f24) * 0.1f + o->f24;
    o->f30 = (o->f38 - o->f30) * 0.1f + o->f30;
    o->f34 = (o->f3c - o->f34) * 0.1f + o->f34;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        switch (o->f40) {
        case 150:
            o->f30 = 650.0f;
            o->f34 = 425.0f;
            t2 = call_8c087bcc();
            o->f38 = t2 + 616.0f;
            o->f3c = 425.0f;
            break;
        case 300:
            o->f20 = 650.0f;
            o->f24 = 425.0f;
            t3 = call_8c087ba0();
            o->f28 = t3 + 616.0f;
            o->f2c = 425.0f;
            o->f40 = 0;
        }
        o->f40 += 1;
    }
}
