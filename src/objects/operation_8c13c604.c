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
extern void call_8c13cb88(void);
extern void call_8c13ce30(void);
extern void call_8c13c81c(void);
extern void call_8c13cc1c(void);
extern void call_8c13ca08(void);
void operation_8c13c604(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c13cb88();
        return;
    case 2:
        call_8c13ce30();
        return;
    case 4:
        call_8c13c81c();
        return;
    case 9:
        call_8c13cc1c();
        return;
    case 5:
        call_8c13ca08();
        return;
    case 1:
    case 3:
    case 6:
    case 7:
    case 8:
        break;
    }
}
