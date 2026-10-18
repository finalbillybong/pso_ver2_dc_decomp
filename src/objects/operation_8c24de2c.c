typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    int f13c;
};
extern int call_8c03b55c(int, int);
extern void operation_8c07f694(void *, unsigned char);
void operation_8c24de2c(Object *o)
{
    int t1;
    t1 = call_8c03b55c((int)((int)o->f13c + 0xbcc), 1);
    if (t1 != 0) {
        operation_8c07f694((void *)t1, o->f138);
    }
}
