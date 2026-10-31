typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int g_8c4d9b9c;
extern void call_8c154e80(Object *);
void handle_6x85_vol_opt_phase_2_boss_actions_8c13a4fc(Object *o)
{
    if (g_8c4d9b9c != 0) {
        switch (o->f04) {
        case 0:
            call_8c154e80(o);
        }
    }
}
