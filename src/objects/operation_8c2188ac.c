typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
struct Object {
    int tag;
    char unknown4[0x4];
    Arg0_8 *f08;
};
extern int call_8c12b944(void);
void operation_8c2188ac(Object *o)
{
    int i;
    unsigned int j;
    unsigned char *p;
    int k;
    unsigned char a;
    unsigned char b;
    if (o->f08 != 0) {
        for (k = 0; k != o->tag; k++) {
            ((char *)o->f08)[k] = k;
        }
    }
    if (o->f08 != 0) {
        for (i = 0; i != o->tag; i++) {
            j = (unsigned int)((float)o->tag * ((float)call_8c12b944() / 32768.0f));
            p = (unsigned char *)o->f08;
            a = p[i];
            b = p[j];
            p[i] = b;
            ((char *)o->f08)[j] = a;
        }
    }
}
