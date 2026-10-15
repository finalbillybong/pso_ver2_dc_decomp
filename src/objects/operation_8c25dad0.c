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
    char unknown0[0xa0];
    float fa0;
};
extern int operation_8c03d338(void);
extern float call_8c37f6c0(float);
extern void operation_8c0c5478(void *, Frame *, float);
void operation_8c25dad0(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        (&frame)->f00 = 0.3f;
        (&frame)->f04 = 0.3f;
        (&frame)->f08 = 0.8f;
        (&frame)->f0c = 0.8f;
        t2 = call_8c37f6c0(o->fa0);
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (Frame *)((&frame)), t2);
    }
}
