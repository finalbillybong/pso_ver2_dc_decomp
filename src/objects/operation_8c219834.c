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
int operation_8c219834(Object *o, int a1, unsigned int a2)
{
    float v3;
    float v6;
    char *v19;
    float v12;
    float v15;
    int t1;
    int t2;
    if ((unsigned int)0x10 > a2) {
        t1 = next_random_state((void *)(*(Arg0_24_0 **)((char *)((char *)o->f24 + 0x0) + (a2 << 2))));
        v3 = (float)(float)(unsigned int)a1;
        v6 = (float)(float)(unsigned int)t1;
        return (unsigned int)(v3 * v6 / 4294967296.0f);
    }
    v19 = (char *)o->f24->f40;
    t2 = next_random_state((void *)v19);
    v12 = (float)(float)(unsigned int)a1;
    v15 = (float)(float)(unsigned int)t2;
    return (unsigned int)(v12 * v15 / 4294967296.0f);
}
