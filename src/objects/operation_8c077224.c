typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x210];
    int f210;
    int f214;
    int f218;
};
extern int call_8c12b944(void);
extern void call_8c074ac4(Object *, int);
void operation_8c077224(Object *o)
{
    int t1;
    o->f214 = o->f210;
    t1 = call_8c12b944();
    call_8c074ac4(o, (int)((float)o->f218 * ((float)t1 / 32768.0f)));
}
