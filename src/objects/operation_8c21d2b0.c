typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern void operation_8c21d3a8(void *);
extern void operation_8c21d3ec(void *);
extern void operation_8c21d510(void *);
extern void call_8c21d598(Object *);
extern void operation_8c21d81c(void *);
extern void call_8c21d778(void);
extern void operation_8c21d780(void *);
extern void call_8c21d7b8(Object *);
extern void operation_8c21da5c(void *);
extern void operation_8c21da98(void *);
extern void operation_8c21da18(void *);
extern void operation_8c21da78(void *);
void operation_8c21d2b0(Object *o)
{
    switch (o->f28) {
    case 0:
        operation_8c21d3a8((void *)o);
        return;
    case 1:
        operation_8c21d3ec((void *)o);
        return;
    case 2:
        operation_8c21d510((void *)o);
        return;
    case 3:
        call_8c21d598(o);
        return;
    case 8:
        operation_8c21d81c((void *)o);
        return;
    case 4:
        call_8c21d778();
        return;
    case 5:
        operation_8c21d780((void *)o);
        return;
    case 6:
        call_8c21d7b8(o);
        return;
    case 9:
        operation_8c21da5c((void *)o);
        return;
    case 10:
        operation_8c21da98((void *)o);
        return;
    case 7:
        operation_8c21da18((void *)o);
        return;
    case 11:
        operation_8c21da78((void *)o);
        return;
    case 12:
        break;
    }
}
