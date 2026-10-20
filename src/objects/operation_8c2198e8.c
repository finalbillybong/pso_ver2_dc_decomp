typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_0 Arg0_24_0;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x40];
    int f40;
};
extern int next_random_state(void *);
float operation_8c2198e8(Object *o, unsigned int a1)
{
    float v2;
    char *v7;
    float v5;
    int t1;
    int t2;
    if ((unsigned int)0x10 > a1) {
        t1 = next_random_state((void *)(*(Arg0_24_0 **)((char *)((char *)o->f24 + 0x0) + (a1 << 2))));
        v2 = (float)(float)(unsigned int)((unsigned int)t1 >> 0x10);
        return v2 / 65536.0f;
    }
    v7 = (char *)o->f24->f40;
    t2 = next_random_state((void *)v7);
    v5 = (float)(float)(unsigned int)((unsigned int)t2 >> 0x10);
    return v5 / 65536.0f;
}
