typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
struct Object {
    char unknown0[0xfc];
    float ffc;
    Arg0_100 *f100;
};
extern float call_8c37eb0c(void *);
void operation_8c082980(Object *o)
{
    float t1;
    *(int *)((char *)o + 0x100) += 0x300;
    t1 = call_8c37eb0c((void *)(o->f100));
    o->ffc = t1 * 0.2f + 0.4f;
}
