typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
int operation_8c1c9978(Object *o)
{
    int v4;
    v4 = 0;
    {
        int v1;
        v1 = 0;
        if ((o->tag) == 0) {
            if ((unsigned int)o->f01 >= (unsigned int)0x70) {
                v1 = (int)1;
            }
        }
        if (v1 != 0) {
            if ((unsigned int)0x88 >= (unsigned int)o->f01) {
                v4 = (int)1;
            }
        }
    }
    return (int)(v4);
}
