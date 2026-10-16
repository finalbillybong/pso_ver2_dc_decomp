typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
};
extern int operation_8c09b33c(void);
extern float call_8c09a710(void);
extern float operation_8c09a6f4(void);
extern float call_8c12c714(float);
void operation_8c0976b0(Object *o)
{
    float v1;
    int t1;
    float t2;
    float t3;
    float t4;
    t1 = operation_8c09b33c();
    if (t1 != 0) {
        switch (o->f30) {
        case 0:
        case 1:
            t3 = call_8c09a710();
            t4 = operation_8c09a6f4();
            v1 = (float)(t3 - t4);
            t2 = call_8c12c714(v1);
            if (t2 > 0.05f) {
                *(int *)0x8c46b064 += (int)(v1 * 1092.0f);
            }
        }
    }
}
