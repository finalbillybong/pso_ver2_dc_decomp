typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    float fe8;
};
extern int call_8c246eb0(void);
int operation_8c246e74(Object *o)
{
    int v1;
    int t1;
    t1 = call_8c246eb0();
    if (t1 == 0) {
        return 0;
    }
    v1 = (int)(o->fe8 <= 500.0f);
    return v1;
}
