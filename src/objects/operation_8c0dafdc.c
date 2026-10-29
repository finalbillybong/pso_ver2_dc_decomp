typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Pair {
    short f00;
    short f02;
} Pair;
typedef struct Object {
    int tag;
    Pair *f04;
} Object;
int operation_8c0dafdc(Object *o)
{
    Pair tmp;
    int n;
    int j;
    Pair *p;
    Pair *q;
    if (o->f04 == 0) {
        return 0;
    }
    n = o->tag;
    while (--n > 0) {
        p = o->f04;
        for (j = 0; j < n; j++) {
            q = p + 1;
            if (p->f00 > q->f00) {
                tmp = *p;
                *p = *q;
                *q = tmp;
            }
            p++;
        }
    }
    return 1;
}
