#ifndef PSO_NOTICE_ACTOR_H
#define PSO_NOTICE_ACTOR_H
#include "src/include/vector3.h"
#include "src/include/notice_dispatch.h"
/* Provisional virtual prefix. Slots 0x8c, 0x90 and 0x94 are observed calls;
 * placeholder methods establish their positions, not recovered semantics. */
struct Counter {char unknown00[32];int value;};
class ActorBase {public:char unknown00[24];
virtual void unknown_0();
virtual void unknown_1();
virtual void unknown_2();
virtual void unknown_3();
virtual void unknown_4();
virtual void unknown_5();
virtual void unknown_6();
virtual void unknown_7();
virtual void unknown_8();
virtual void unknown_9();
virtual void unknown_10();
virtual void unknown_11();
virtual void unknown_12();
virtual void unknown_13();
virtual void unknown_14();
virtual void unknown_15();
virtual void unknown_16();
virtual void unknown_17();
virtual void unknown_18();
virtual void unknown_19();
virtual void unknown_20();
virtual void unknown_21();
virtual void unknown_22();
virtual void unknown_23();
virtual void unknown_24();
virtual void unknown_25();
virtual void unknown_26();
virtual void unknown_27();
virtual void unknown_28();
virtual void unknown_29();
virtual void unknown_30();
virtual void unknown_31();
virtual void unknown_32();
virtual void show_a(Vector3 *,int,int);
virtual void show_b(Vector3 *,int,int);
virtual void show_c(Vector3 *,int,int);
};
class Actor:public ActorBase {public:char unknown1c[24];unsigned int flags;char unknown38[332];Counter *counter;char unknown188[16];short max_a,max_b;char unknown19c[392];Vector3 position;short a,b;};
typedef char check_Counter_value[(unsigned long)&((Counter *)0)->value == 32 ? 1 : -1];
typedef char check_Counter_prefix[sizeof(Counter) == 36 ? 1 : -1];
typedef char check_ActorBase_prefix[sizeof(ActorBase) == 28 ? 1 : -1];
typedef char check_Actor_flags[(unsigned long)&((Actor *)0)->flags == 52 ? 1 : -1];
typedef char check_Actor_counter[(unsigned long)&((Actor *)0)->counter == 388 ? 1 : -1];
typedef char check_Actor_max_a[(unsigned long)&((Actor *)0)->max_a == 408 ? 1 : -1];
typedef char check_Actor_max_b[(unsigned long)&((Actor *)0)->max_b == 410 ? 1 : -1];
typedef char check_Actor_position[(unsigned long)&((Actor *)0)->position == 804 ? 1 : -1];
typedef char check_Actor_a[(unsigned long)&((Actor *)0)->a == 816 ? 1 : -1];
typedef char check_Actor_b[(unsigned long)&((Actor *)0)->b == 818 ? 1 : -1];
typedef char check_Actor_prefix[sizeof(Actor) == 820 ? 1 : -1];
#endif
