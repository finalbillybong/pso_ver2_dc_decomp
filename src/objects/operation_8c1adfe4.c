typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x394];
    int f394;
};
extern int call_8c0c349c(void);
void operation_8c1adfe4(Object *o)
{
    int t1;
    t1 = call_8c0c349c();
    if (t1 != 0) {
        o->f394 = 0;
        return;
    }
    o->f394 = 1;
}
