typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_37c Arg0_37c;
struct Object {
    char unknown0[0x37c];
    Arg0_37c *f37c;
};
extern void call_8c162e94(int, void *, void *);
void operation_8c084240(Object *o, int a1)
{
    call_8c162e94(a1, ((char *)o + 0x3c), o->f37c);
}
