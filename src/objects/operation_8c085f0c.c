typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xec];
    int fec;
};
extern void call_8c027090(void);
void operation_8c085f0c(Object *o)
{
    if (o->fec != 0) {
        call_8c027090();
    }
}
