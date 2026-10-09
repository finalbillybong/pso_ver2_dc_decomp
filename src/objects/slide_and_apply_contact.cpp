#include "src/include/vector3.h"
struct Geometry {Vector3 position,normal;};
struct Contact {unsigned int unknown0;Geometry *geometry;};
class Base {public:char unknown0[24];
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
virtual Contact *current_contact();
virtual Contact *contact(Vector3 *);
};
class View:public Base {public:char unknown28[32];Vector3 position,previous;char unknown84[284];Vector3 normal;char unknown380[540];float radius;int blocked,failures;};
typedef char check_view[sizeof(Base)==28 && sizeof(View)==932 && (unsigned long)&((View *)0)->position==60 && (unsigned long)&((View *)0)->previous==72 && (unsigned long)&((View *)0)->normal==368 && (unsigned long)&((View *)0)->failures==928 ? 1:-1];
typedef char check_geometry[sizeof(Geometry)==24 && (unsigned long)&((Geometry *)0)->normal==12 && sizeof(Contact)==8 && (unsigned long)&((Contact *)0)->geometry==4 ? 1:-1];
typedef char check_radius[(unsigned long)&((View *)0)->radius==920 && (unsigned long)&((View *)0)->blocked==924 ? 1:-1];
extern "C" void slide(View *,Vector3 *,float,float,float);
extern "C" Contact *slide_and_apply_contact(View *o,float dx,float dz,float scale) {
 Vector3 destination;
 Contact *contact;
 float y;
 slide(o,&destination,dx,dz,scale);
 y=o->position.y;
 contact=o->contact(&destination);
 if(contact) {
  o->previous.x=o->position.x;
  o->previous.y=y;
  o->previous.z=o->position.z;
  o->position.x=destination.x;
  o->position.z=destination.z;
  o->normal=contact->geometry->normal;
  o->failures=0;
 } else o->failures++;
 return contact;
}
