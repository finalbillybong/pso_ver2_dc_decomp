#include "src/include/classes/TObjCityAirCar_Car.h"
typedef struct Frame Frame;
typedef struct TObjCityAirCar_Car_p64 TObjCityAirCar_Car_p64;
typedef struct TObjCityAirCar_Car_pac TObjCityAirCar_Car_pac;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern int call_8c1c11a8(TObjCityAirCar_Car *);
extern int call_8c05fd7c(int, TObjCityAirCar_Car *, void *, int, int);
extern void emit_control_60320(int, int, int);
extern int create_effect_7708(void *, int, int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void call_8c0a7608(void *, Frame *);
void TObjCityAirCar_Car_update_8c1c1394(TObjCityAirCar_Car *o)
{
    Frame frame;
    char *v181;
    float v138;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    o->f94 += o->f98;
    t1 = call_8c1c11a8(o);
    if (t1 == 0) {
        o->f04 |= 1;
    }
    v181 = (char *)o->f9c;
    if ((int)(v181) == 1 && !(15.5f > o->f94) && !(o->f94 > 35.5f)) {
        goto L_8c1c1400;
    }
    if ((int)(v181) == 2 && !(15.0f > o->f94) && !(o->f94 > 35.0f)) {
L_8c1c1400:;
        if (o->fa0 == 4) {
            call_8c05fd7c(0x40002, o, (void *)(&o->f3c), 0, 0);
        } else {
            if (o->fa0 == 0) {
                t2 = call_8c05fd7c(0x40001, o, (void *)(&o->f3c), 0, 0);
                emit_control_60320(t2, -0x200, 0);
            } else {
                call_8c05fd7c(0x40001, o, (void *)(&o->f3c), 0, 0);
            }
        }
    }
    if (*(int *)0x8c4e2ca8 != 0) {
        o->fa4 -= 0xa;
        if (!(o->fa4 >= 0)) {
            o->fa4 += 0x100;
        }
        o->fa8 += 1;
        if (o->fa8 >= 0x28) {
            o->fa8 = 0;
        }
        if (o->child == 0) {
            t3 = create_effect_7708((void *)(&o->f3c), 0x8a, 0x40);
            o->child = (TObjCityAirCar_Car_pac *)t3;
        }
        if (o->child != 0) {
            if (o->fa0 == 0) {
                v138 = (float)20.0f;
            } else {
                v138 = (float)10.0f;
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            t4 = njSin_8c37eb0c((void *)(o->f64));
            (&frame)->f00.f00 -= v138 * t4;
            t5 = njCos_8c38c154((void *)(o->f64));
            (&frame)->f00.f08 -= v138 * t5;
            call_8c0a7608((void *)(o->child), (Frame *)((&frame)));
        }
    }
}
