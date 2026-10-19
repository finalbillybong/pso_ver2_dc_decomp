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
extern int g_8c4e22d0;
extern void call_8c1adbf0(void);
extern void call_8c1ae374(Object *, int);
void operation_8c1b6f18(Object *o)
{
    o->f39c = 0x7e;
    g_8c4e22d0 = 2;
    call_8c1adbf0();
    call_8c1ae374(o, 2);
}
