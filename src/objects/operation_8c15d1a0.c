typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x120];
    int f120;
};
extern void call_8c15d1bc(void);
void operation_8c15d1a0(Object *o)
{
    o->f120 += 0x28f;
    call_8c15d1bc();
}
