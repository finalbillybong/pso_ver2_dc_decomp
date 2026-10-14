typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe2];
    float fe8;
    char unknownec[0x174];
    int f260;
};
extern int call_8c2474a4(void);
extern float call_8c246de8(Object *);
extern void call_8c246834(Object *);
extern int call_8c2468a0(Object *);
extern void call_8c246954(Object *);
void operation_8c2467c4(Object *o)
{
    int t1;
    float t2;
    int t3;
    t1 = call_8c2474a4();
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = call_8c246de8(o);
    o->fe8 = t2;
    call_8c246834(o);
    t3 = call_8c2468a0(o);
    if (t3 != 0) {
        call_8c246954(o);
    }
    o->f260 += 1;
    *(int *)0x8c510e84 = 0;
}
