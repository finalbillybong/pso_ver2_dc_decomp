typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Object {
    char unknown0[0x98];
    float f98;
};
extern int operation_8c03d338(void);
extern float call_8c37f6c0(float);
extern void call_8c0c5478(void *, Frame *, float);
void operation_8c258d90(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        (&frame)->f00 = 0.3f;
        (&frame)->f04 = 0.3f;
        (&frame)->f08 = 0.3f;
        (&frame)->f0c = 0.3f;
        t2 = call_8c37f6c0(o->f98);
        call_8c0c5478((void *)(((char *)o + 0x3c)), (Frame *)((&frame)), t2);
    }
}
