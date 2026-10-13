typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x74];
    int f380;
};
extern void call_8c027090(void);
void operation_8c084418(Object *o)
{
    if (o->f30a != 0) {
        if (o->f30a == 1) {
            return;
        }
        return;
    }
    if (o->f380 != 0) {
        call_8c027090();
    }
}
