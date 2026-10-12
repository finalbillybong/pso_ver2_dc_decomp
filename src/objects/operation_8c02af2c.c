typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern void call_8c191504(int);
void operation_8c02af2c(Object *o)
{
    int v1;
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0) {
        call_8c191504(1);
    }
}
