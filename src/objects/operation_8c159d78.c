typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void update_rise_8c159ef8(void *);
extern void update_link_8c159fac(void *);
extern void update_phase_8c15a058(void *);
extern void call_8c15a0fc(Object *);
void operation_8c159d78(Object *o)
{
    switch (o->f30a) {
    case 7:
        update_rise_8c159ef8((void *)o);
        return;
    case 1:
        update_link_8c159fac((void *)o);
        return;
    case 4:
        update_phase_8c15a058((void *)o);
        return;
    case 5:
        call_8c15a0fc(o);
    }
}
