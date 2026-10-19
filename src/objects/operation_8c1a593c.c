typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x27c];
    char f27c;
};
extern void call_8c1a5974(Object *);
extern void call_8c1a5e6c(Object *);
void operation_8c1a593c(Object *o)
{
    switch (o->f27c) {
    case 0:
        call_8c1a5974(o);
        return;
    case 1:
        call_8c1a5e6c(o);
    }
}
