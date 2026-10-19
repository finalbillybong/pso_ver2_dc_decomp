typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
};
extern int ids_equal_8c25eb2c(void);
extern void operation_8c25e850(void *);
extern void operation_8c25e8fc(void *);
extern void operation_8c25e95c(void *);
extern void operation_8c25ea10(void *);
extern void operation_8c25eadc(void *);
extern int operation_8c25ee2c(void);
extern void operation_8c25ec50(Object *);
extern void operation_8c25ed88(int);
extern void operation_8c25ee08(int);
void operation_8c25e798(Object *o)
{
    int t1;
    int t2;
    t1 = ids_equal_8c25eb2c();
    o->f24 = (int)(t1);
    switch (o->f20) {
    case 0:
        operation_8c25e850((void *)o);
        break;
    case 1:
        operation_8c25e8fc((void *)o);
        break;
    case 2:
        operation_8c25e95c((void *)o);
        break;
    case 3:
        operation_8c25ea10((void *)o);
        break;
    case 4:
        operation_8c25eadc((void *)o);
    }
    t2 = operation_8c25ee2c();
    if (t2 == 0) {
        operation_8c25ec50(o);
        operation_8c25ed88((int)o);
        operation_8c25ee08((int)o);
        o->f04 |= 1;
    }
}
