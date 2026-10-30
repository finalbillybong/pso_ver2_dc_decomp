typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    char unknown2[0xa];
    int f0c;
    int f10;
};
extern int find_record_8c0744dc(int);
extern int operation_8c1c7658(Object *);
int operation_8c1c9bb0(Object *o)
{
    unsigned char v;
    if (find_record_8c0744dc(o->f0c) == 0) {
        switch ((unsigned char)o->tag) {
        case 0:
        case 3:
            if (operation_8c1c7658(o) == 0) {
                return 0;
            }
            break;
        case 1:
            v = o->f01;
            if (v == 0 && v >= 4) {
                return 0;
            }
            break;
        case 2:
            return 1;
        case 4:
            if (o->f10 == 0) {
                return 0;
            }
            break;
        default:
            return 0;
        }
        return 1;
    }
    return 0;
}
