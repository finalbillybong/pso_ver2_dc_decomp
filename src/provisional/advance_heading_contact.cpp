struct Vector {float x,y,z;};struct Geometry {char unknown0[12];Vector normal;};struct Hit {int unknown0;Geometry *geometry;};
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
virtual void unused18();
virtual Hit *contact(Vector *);};
class Object:public Base {public:char unknown28[32];Vector position,previous;char unknown84[16];int heading;char unknown104[264];Vector normal;char unknown380[548];int failures;char unknown932[24];Vector velocity;};
typedef char check_layout[sizeof(Base)==28 && sizeof(Vector)==12 && sizeof(Geometry)==24 && sizeof(Hit)==8 && sizeof(Object)==968 && (unsigned long)&((Geometry *)0)->normal==12 && (unsigned long)&((Hit *)0)->geometry==4 && (unsigned long)&((Object *)0)->position==60 && (unsigned long)&((Object *)0)->previous==72 && (unsigned long)&((Object *)0)->heading==100 && (unsigned long)&((Object *)0)->normal==368 && (unsigned long)&((Object *)0)->failures==928 && (unsigned long)&((Object *)0)->velocity==956 ? 1:-1];
extern "C" float angle(float,float),sine(int),cosine(int);extern "C" unsigned short turn(int,int,int);extern "C" int project_step(Object *,Vector *,float,float,float);
extern "C" Hit *advance_heading_contact(Object *o,int step,float distance) {
 Vector point;Hit *hit;float sn,cs,y;
 o->heading=(short)turn(o->heading,(int)(angle(o->velocity.x,o->velocity.z)*65536.0f/6.283184051513672f),step);
 sn=sine(o->heading);cs=cosine(o->heading);project_step(o,&point,sn,cs,distance);
 y=o->position.y;hit=o->contact(&point);
 if(hit) {o->previous.x=o->position.x;o->previous.y=y;o->previous.z=o->position.z;o->position.x=point.x;o->position.z=point.z;o->normal=hit->geometry->normal;o->failures=0;}
 else o->failures++;
 return hit;
}
