typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct Object Object;
typedef struct Arg0_s754 Arg0_s754;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x21a];
    short f30c;
};
struct Arg0_s754 {
    char unknown0[0xc];
    int f0c;
};
extern int actor_animation_ready(void *);
extern void operation_8c1e8e60(int, int, int);
extern int call_8c1aaafc(void *);
extern int operation_02c350(void *);
void operation_8c1eb920(Object *o)
{
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    if (o->f30c == 4) {
        t1 = actor_animation_ready((void *)o);
        if (t1 == 0) {
            return;
        }
        operation_8c1e8e60((int)o, 1, 5);
        return;
    }
    if (((o->fe8 & 0x10)) != 0) {
        {
            int *q = &((Arg0_s754 *)((char *)o + 0x754))->f0c;
            v1 = (int)(((*q & 1)) != 0);
        }
        if (v1 != 0) {
            t2 = call_8c1aaafc((void *)(((char *)o + 0x754)));
            switch ((short)t2) {
            case 0:
            case 1:
                o->f30c = 4;
                o->fe8 &= -0x41;
                v2 = (int)0;
                if (((o->f34 & 0x100000)) != 0) {
                    v2 = (int)1;
                }
                t3 = operation_02c350((void *)o);
                {
                    short h = *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v2 << 2)) + 0x0) + ((short)t3 << 1));
                    o->ff0 = h;
                }
                return;
            case 2:
                operation_8c1e8e60((int)o, 7, 5);
            }
        }
    }
}
