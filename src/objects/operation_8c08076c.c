typedef struct Object {
    char unknown0[0x94];
    int f94;
} Object;
extern int hierarchy_is_active(void *);
void operation_8c08076c(Object *o)
{
    int t1;
    t1 = hierarchy_is_active(o);
    if (t1 != 0) {
        if (o->f94 == 0) {
            return;
        }
    }
}
