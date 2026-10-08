/* Provisional accessed prefixes; preserve raw guards and floating comparison order. */
typedef struct Actor { char unknown0[410]; short maximum; char unknown412[406]; short current; } Actor;
typedef struct Owner { char unknown0[128]; unsigned int id; char unknown132[12]; unsigned int flags; Actor *actor; } Owner;
typedef struct Object { char unknown0[56]; unsigned int flags; char unknown60[24]; signed char index; char unknown85[2]; unsigned char chance; char unknown88[36]; Owner *owner; char unknown128[4]; unsigned int flags132; } Object;
typedef struct TemplateCost { char unknown0[16]; int cost; } TemplateCost;
#define CHECK(type,field,offset) typedef char check_##type##_##field[(unsigned long)&((type *)0)->field==offset?1:-1]
CHECK(Actor,maximum,410); CHECK(Actor,current,818); CHECK(Owner,id,128); CHECK(Owner,flags,144); CHECK(Owner,actor,148);
CHECK(Object,flags,56); CHECK(Object,index,84); CHECK(Object,chance,87); CHECK(Object,owner,124); CHECK(Object,flags132,132); CHECK(TemplateCost,cost,16);
typedef char check_actor[sizeof(Actor)==820?1:-1]; typedef char check_owner[sizeof(Owner)==152?1:-1]; typedef char check_object[sizeof(Object)==136?1:-1]; typedef char check_template[sizeof(TemplateCost)==20?1:-1];
#define random_at ((int (*)(void))0x8c12b944)
extern TemplateCost *get_effect_template(int,int);
void choose_object_action_8c10d790(Object *object) {
 int group,forced; unsigned int owner_flags;
 if(object->owner->id==65535) return;
 if(!((int (*)(Actor *))0x8c1eacf4)(object->owner->actor)) return;
 if(object->flags&64) goto fallback;
 owner_flags=object->owner->flags;
 if(owner_flags&16) goto fallback;
 if(object->flags&4) group=0; else if(object->flags&8) group=1; else if(object->flags&16) group=2; else group=0;
 forced=(object->flags132&0x2000)&&(owner_flags&0x1000);
 if(!forced) {
  if(((float (*)(float))0x8c12c714)(((float)random_at()/32768.0f)*10.0f)>(float)object->chance*0.1f) {
   ((void (*)(Object *))0x8c110f74)(object); return;
  }
 }
 forced=*(int *)((char *)0x8c285d70+((unsigned int)group<<3)+((unsigned int)forced<<2));
 { TemplateCost *parameters=get_effect_template(forced,object->index); Actor *actor=object->owner->actor;
  float remaining=(float)(actor->current-parameters->cost); float maximum=(float)actor->maximum;
  if(!(remaining/maximum>0.2f)&&maximum!=0.0f) ((void (*)(Object *,int))0x8c110278)(object,3);
 }
 object->flags132&=~0x2000;
 if(((int (*)(Actor *,int))0x8c1ecae8)(object->owner->actor,forced)) { ((void (*)(Object *,int))0x8c111238)(object,forced); return; }
 fallback: ((void (*)(Object *))0x8c110f74)(object);
}
