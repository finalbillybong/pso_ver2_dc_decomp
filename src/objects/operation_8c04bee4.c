typedef struct Object Object;
struct Object {
    unsigned short *tag;
    char unknown4[0xc];
    int f10;
};
void operation_8c04bee4(Object *o, int a1, int a2)
{
    unsigned short *v2;
    unsigned short *v1;
    v2 = (unsigned short *)((char *)o->tag + (a1 << 1));
    if (*v2 != 0) {
        v1 = (unsigned short *)((char *)v2 + (a2 << 1));
        do {
            *v2++ = *v1;
        } while (*v1++ != 0);
        o->f10 -= a2;
    }
}
