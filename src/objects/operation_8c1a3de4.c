typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    char unknown38[0x4];
    int f3c;
};
extern void call_8c1d5eb8(void *);
void operation_8c1a3de4(Object *o, int a1)
{
    if (o->f34 != 0 && a1 != o->f3c) {
        o->f3c = a1;
        call_8c1d5eb8((void *)(o->f34));
    }
}
