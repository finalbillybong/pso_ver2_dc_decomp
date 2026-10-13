typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
};
extern void send_code_8c14472c(void *, int);
extern void call_8c01c5f0(void);
void operation_8c1456a8(Object *o, int a1)
{
    switch (a1) {
    case 4:
        o->ff0 = 1;
        return;
    case 2:
        send_code_8c14472c((void *)o, 1);
        return;
    case 0:
        call_8c01c5f0();
        return;
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    }
}
