typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_230 Arg0_230;
struct Object {
    char unknown0[0x230];
    Arg0_230 *f230;
};
extern char g_8c4e2ce0;
extern void call_8c227d60(void *, float);
extern void call_8c1c3828(Object *);
extern void call_8c1c3314(Object *);
extern void call_8c1c3a44(Object *);
void operation_8c1c3278(Object *o)
{
    if (o->f230 != 0) {
        call_8c227d60((void *)(o->f230), -14.0f);
    }
    switch (g_8c4e2ce0) {
    case 8:
        call_8c1c3828(o);
        return;
    case 9:
        call_8c1c3314(o);
        call_8c1c3828(o);
        call_8c1c3a44(o);
        return;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
}
