typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x358];
    int f358;
    char unknown35c[0x1c];
    int f378;
};
extern void call_8c027090(void);
extern void call_8c24cadc(Object *, int);
void operation_8c24c90c(Object *o)
{
    if (o->f378 == 1) {
        call_8c027090();
    }
    if (!(o->f358 > 0)) {
        o->f358 = 0;
        call_8c24cadc(o, 1);
    }
}
