typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e14f0 S_L8c2e14f0;
typedef struct S_L8c2e14f3 S_L8c2e14f3;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    unsigned char f0c;
    unsigned char f0d;
};
struct S_L8c2e14f3 {
    unsigned char f00;
    char f01;
    char f02;
};
struct S_L8c2e14f0 {
    unsigned char f00;
    unsigned char f01;
};
extern S_L8c2e14f0 g_8c2e14f0;
extern S_L8c2e14f3 g_8c2e14f3;
extern int call_8c207378(Object *, int);
void operation_8c20775c(Object *o, int a1)
{
    int i;
    int v1;
    int found;
    int v18;
    int v20;
    int t1;
    v1 = (unsigned char)a1;
    if (v1 < (unsigned int)6) {
        if ((unsigned int)6 > v1) {
            for (i = 0; i != 3; i++) {
                if (v1 == call_8c207378(o, i)) {
                    found = 1;
                    goto done;
                }
            }
        }
        found = 0;
    done:
        if (found == 0) {
            v18 = o->f0c;
            if ((v18 & g_8c2e14f3.f00) == 0) {
                o->f0d |= a1;
                o->f0c = g_8c2e14f3.f00 | o->f0c;
                return;
            }
            if ((v18 & 2) == 0) {
                v1 = (unsigned char)a1 << 3;
                o->f0d |= v1;
                o->f0c = (char)o->f0c | g_8c2e14f3.f01;
                return;
            }
            if ((v18 & 4) == 0) {
                t1 = (unsigned char)a1;
                v20 = o->f0d;
                if (t1 > (v20 & g_8c2e14f0.f00)) {
                    a1 -= 1;
                }
                if (t1 > ((v20 & g_8c2e14f0.f01) >> 3)) {
                    a1 -= 1;
                }
                t1 = (unsigned char)a1;
                if ((unsigned int)4 > t1) {
                    o->f0d |= t1 << 6;
                }
                o->f0c = (char)o->f0c | g_8c2e14f3.f02;
            }
        }
    }
}
