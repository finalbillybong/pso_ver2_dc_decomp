typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void create_effect_777c(int, int);
void operation_8c129a08(Object *o, int a1, int a2)
{
    if (((o->f34 & 0x8000000)) == 0) {
        create_effect_777c(a1, a2);
    }
}
