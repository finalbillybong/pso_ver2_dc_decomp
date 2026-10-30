typedef struct Object {
    char unknown0[0x6c];
    int f6c;
} Object;
extern int g_8c418248;
extern char g_8c339ca0[];
extern int lookup_low_id(int);
extern void operation_8c24870c(Object *);
void operation_8c237cb0(Object *o)
{
    int found;
    int i;
    int off;
    int *p;
    off = 0x274;
    found = 0;
    for (i = 0; i < 4; i++) {
        if (i != g_8c418248) {
            p = (int *)(i * 0xa4 + g_8c339ca0 + off);
            if (lookup_low_id(i) == 0) {
                if (*p != 0) {
                    *p = 0;
                }
            } else {
                if (*p == 0) {
                    found = 1;
                }
            }
        }
    }
    if (found) {
        o->f6c++;
        if (o->f6c % 30 == 0) {
            operation_8c24870c(o);
        }
    } else {
        o->f6c = 0;
    }
}
