typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf8];
    float ff8;
    char unknownfc[0x294];
    int f390;
    int f394;
};
extern void call_8c0fbafc(Object *);
extern void call_8c0fbc48(Object *, int, void *, float);
extern void operation_8c0fbdf0(int);
void operation_8c0fba40(Object *o)
{
    float v9;
    float pm1;
    int pm2;
    int pm4;
    call_8c0fbafc(o);
    if (o->f394 != 0) {
        if (7.0f > o->ff8) {
            pm2 = 0x3c + o->f390;
            pm1 = 7.0f;
            call_8c0fbc48(o, (pm2), (void *)(((char *)o + 0x3c)), o->ff8 / pm1);
        } else {
            if (!(o->ff8 < 41.0f)) {
                pm1 = o->ff8;
                if (pm1 < 48.0f) {
                    char *pm3;
                    pm3 = 0x3c + (char *)o;
                    pm4 = o->f390 + 0x3c;
                    call_8c0fbc48(o, (int)((pm3)), (void *)(pm4), (o->ff8 - 41.0f) / 7.0f);
                }
            }
        }
    }
    v9 = (float)o->ff8;
    if (!(12.0f > v9) && 35.0f > v9) {
        operation_8c0fbdf0((int)o);
    }
}
