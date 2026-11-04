#include "src/include/classes/TObjCityAirCar_Car.h"
extern void TObjectShared_ctor_8c01d1ec(TObjCityAirCar_Car *);
extern void call_8c1c11a8(TObjCityAirCar_Car *);
TObjCityAirCar_Car *TObjCityAirCar_Car_ctor_8c1c108c(TObjCityAirCar_Car *o, int a1, int a2, int a3, float f0)
{
    TObjCityAirCar_Car **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c2758dc;
    o->tag = (int)(*(int *)0x8c3288ec);
    o->size = 0xb0;
    o->f94 = 0.0f;
    o->f9c = a2;
    o->fa0 = a3;
    o->f98 = f0;
    o->fa4 = 0;
    o->fa8 = 0;
    o->child = 0;
    call_8c1c11a8(o);
    o->f68 = 0;
    return o;
}
