typedef struct Entry8 {
    unsigned int key;
    int value;
} Entry8;
typedef struct Object {
    int tag;
    Entry8 *f04;
} Object;
void operation_8c16ae6c(Object *o)
{
    int n;
    int j;
    Entry8 *p;
    Entry8 *q;
    Entry8 tmp;
    n = o->tag;
    while (--n > 0) {
        p = o->f04;
        for (j = 0; j < n; j++) {
            q = p + 1;
            if (p->key > q->key) {
                tmp = *p;
                *p = *q;
                *q = tmp;
            }
            p++;
        }
    }
}
