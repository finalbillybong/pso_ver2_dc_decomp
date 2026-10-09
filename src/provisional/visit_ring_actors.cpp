#include "src/include/vector3.h"
struct Payload {int kind;float amount;};
struct Actor {char unknown0[24];
virtual void unused0();
virtual void unused1();
virtual void unused2();
virtual void unused3();
virtual void unused4();
virtual void unused5();
virtual void unused6();
virtual void unused7();
virtual void unused8();
virtual void unused9();
virtual void unused10();
virtual void unused11();
virtual void unused12();
virtual void unused13();
virtual void unused14();
virtual void unused15();
virtual void unused16();
virtual void unused17();
virtual void unused18();
virtual void unused19();
virtual void unused20();
virtual void unused21();
virtual void unused22();
virtual void unused23();
virtual void unused24();
virtual void apply(void *,int,Payload);
char unknown28[4];short identifier;char unknown34[26];Vector3 position;char unknown72[2000];unsigned int flags;
};
typedef char check_identifier[(unsigned long)&((Actor *)0)->identifier==32?1:-1];
typedef char check_position[(unsigned long)&((Actor *)0)->position==60?1:-1];
typedef char check_flags[(unsigned long)&((Actor *)0)->flags==2072?1:-1];
typedef char check_payload[sizeof(Payload)==8?1:-1];
extern "C" {extern Actor *actors[];extern int actor_count;extern void *source;int ready_at(void);int valid_at(short);float distance_at(const Vector3 *,const Vector3 *);
void visit_ring_actors(void *self,const Vector3 *input) {
 Vector3 position=*input;
 if(ready_at()) {Payload payload;payload.kind=17;payload.amount=0.0f;
  for(int i=0;i<actor_count;++i) {Actor *actor=*(Actor **)((char *)actors+((unsigned int)i<<2));
   if(actor&&valid_at(actor->identifier)&&!(actor->flags&16)&&!(distance_at(&position,&actor->position)>20.0f)) actor->apply(source,0,payload);
  }
 }
}
}
