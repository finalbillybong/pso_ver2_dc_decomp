typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
};
extern void call_8c24b070(void);
extern void call_8c24b130(void);
void operation_8c24b040(Object *o)
{
    if (((o->f108 & 1)) != 0) {
        call_8c24b070();
        return;
    }
    call_8c24b130();
}
