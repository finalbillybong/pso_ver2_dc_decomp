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
extern void refresh_records_8c1ada14(void);
extern void operation_8c2308d4(int);
void operation_8c1b7160(Object *o)
{
    refresh_records_8c1ada14();
    operation_8c2308d4((int)o);
    o->f39c = 0x1c6;
}
