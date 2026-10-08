#ifndef PSO_ACTOR_RENDER_CALLBACKS_H
#define PSO_ACTOR_RENDER_CALLBACKS_H
#include "src/include/vector3.h"
/* Provisional C++ prefixes; callback positions follow the observed vtable ABI. */
struct ActorDrawCallbacks {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual int visible(float,float);};
struct ActorDrawView:ActorDrawCallbacks {char unknown28[12];void *resource;char unknown44[8];unsigned int flags;void *model;Vector3 position;char unknown72[28];int angle;};
struct ActorDistanceCallbacks {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void unused24();virtual void unused25();virtual void unused26();virtual void unused27();virtual void unused28();virtual void unused29();virtual void unused30();virtual void unused31();virtual void unused32();virtual void unused33();virtual void unused34();virtual void unused35();virtual void unused36();virtual void unused37();virtual void unused38();virtual void unused39();virtual void unused40();virtual void unused41();virtual void unused42();virtual void unused43();virtual void unused44();virtual void unused45();virtual void unused46();virtual void unused47();virtual void unused48();virtual void unused49();virtual void unused50();virtual void unused51();virtual void unused52();virtual void unused53();virtual void unused54();virtual void unused55();virtual void unused56();virtual void unused57();virtual void unused58();virtual void unused59();virtual void unused60();virtual void unused61();virtual void unused62();virtual void unused63();virtual void unused64();virtual void unused65();virtual void near_target();};
struct ActorDistanceView:ActorDistanceCallbacks {char unknown28[32];Vector3 position;char unknown72[12];Vector3 destination;char unknown96[682];short mode;char unknown780[132];int requested;char unknown916[8];int previous;char unknown928[4];unsigned int flags;};
typedef char check_ActorDrawCallbacks_size[sizeof(ActorDrawCallbacks)==28?1:-1];
typedef char check_ActorDrawView_resource[(unsigned long)&((ActorDrawView *)0)->resource==40?1:-1];
typedef char check_ActorDrawView_flags[(unsigned long)&((ActorDrawView *)0)->flags==52?1:-1];
typedef char check_ActorDrawView_model[(unsigned long)&((ActorDrawView *)0)->model==56?1:-1];
typedef char check_ActorDrawView_position[(unsigned long)&((ActorDrawView *)0)->position==60?1:-1];
typedef char check_ActorDrawView_angle[(unsigned long)&((ActorDrawView *)0)->angle==100?1:-1];
typedef char check_ActorDrawView_size[sizeof(ActorDrawView)==104?1:-1];
typedef char check_ActorDistanceCallbacks_size[sizeof(ActorDistanceCallbacks)==28?1:-1];
typedef char check_ActorDistanceView_position[(unsigned long)&((ActorDistanceView *)0)->position==60?1:-1];
typedef char check_ActorDistanceView_destination[(unsigned long)&((ActorDistanceView *)0)->destination==84?1:-1];
typedef char check_ActorDistanceView_mode[(unsigned long)&((ActorDistanceView *)0)->mode==778?1:-1];
typedef char check_ActorDistanceView_requested[(unsigned long)&((ActorDistanceView *)0)->requested==912?1:-1];
typedef char check_ActorDistanceView_previous[(unsigned long)&((ActorDistanceView *)0)->previous==924?1:-1];
typedef char check_ActorDistanceView_flags[(unsigned long)&((ActorDistanceView *)0)->flags==932?1:-1];
typedef char check_ActorDistanceView_size[sizeof(ActorDistanceView)==936?1:-1];
#endif
