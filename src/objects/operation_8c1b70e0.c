typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern int operation_8c01c25c(void);
extern void call_8c1adcfc(Object *, int, float);
extern void operation_8c1ae010(void *, int);
extern void operation_8c1add7c(void *);
void operation_8c1b70e0(Object *o)
{
    float v1;
    float v2;
    int t1;
    int t2;
    t1 = operation_8c01c25c();
    if (t1 == 0x10 && 0xa > o->f39c) {
        v1 = (float)((float)(0xa - (int)o->f39c) / 6.0f);
        v2 = (float)v1;
        if (v1 > 1.0f) {
            v2 = (float)1.0f;
        }
        call_8c1adcfc(o, 0xffffff, v2);
    }
    if (!(--o->f39c >= 0)) {
        t2 = operation_8c01c25c();
        if (t2 == 0x10) {
            operation_8c1ae010((void *)o, 0xf);
            return;
        }
        operation_8c1add7c((void *)o);
    }
}
