typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void call_8c19b4e0(Object *);
extern void call_8c19b4fc(Object *);
extern void operation_8c19b688(void *);
extern void call_8c19b710(Object *);
extern void call_8c19b900(Object *);
extern void operation_8c19bab4(void *);
extern void operation_8c19be70(void *);
extern void operation_8c19bed4(void *);
extern void operation_8c19bc58(void *);
extern void operation_8c19c0f0(void *);
extern void operation_8c19c114(void *);
extern void operation_8c19c138(void *);
void operation_8c19b3ec(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c19b4e0(o);
        call_8c19b4fc(o);
        return;
    case 1:
        operation_8c19b688((void *)o);
        return;
    case 2:
        call_8c19b710(o);
        return;
    case 3:
        call_8c19b900(o);
        return;
    case 4:
        operation_8c19bab4((void *)o);
        return;
    case 5:
        operation_8c19be70((void *)o);
        return;
    case 6:
        operation_8c19bed4((void *)o);
        return;
    case 7:
        operation_8c19bc58((void *)o);
        return;
    case 10:
        operation_8c19c0f0((void *)o);
        return;
    case 8:
        operation_8c19c114((void *)o);
        return;
    case 11:
        operation_8c19c138((void *)o);
        return;
    case 9:
        break;
    }
}
