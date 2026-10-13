typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c0cfb80(void);
extern void call_8c0ce82c(void);
extern void call_8c0cf360(void);
extern void call_8c0cf644(void);
extern void call_8c0cea60(void);
extern void call_8c0ced44(void);
extern void call_8c0cfc38(void);
extern void call_8c0cfd18(void);
void operation_8c0ce348(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c0cfb80();
        return;
    case 1:
        call_8c0ce82c();
        return;
    case 2:
        call_8c0cf360();
        return;
    case 9:
        call_8c0cf644();
        return;
    case 4:
        call_8c0cea60();
        return;
    case 5:
        call_8c0ced44();
        return;
    case 7:
        call_8c0cfc38();
        return;
    case 8:
        call_8c0cfd18();
        return;
    case 3:
    case 6:
        break;
    }
}
