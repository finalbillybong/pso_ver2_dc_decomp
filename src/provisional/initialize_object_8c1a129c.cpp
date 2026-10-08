#include "src/include/vector3.h"
/* Checked provisional object and virtual-slot views. */
class Base1a129c { public: unsigned int tag; char unknown4[20];
 virtual void unknown0(); virtual void unknown1(); virtual void unknown2(); virtual void unknown3(); virtual void unknown4_method(); virtual void unknown5(); virtual void configure(void *argument);
};
class Object1a129c : public Base1a129c { public:
 short unknown28; unsigned short size30; char unknown32[20]; unsigned int flags; char unknown56[4]; Vector3 position;
 char unknown72[36]; float extent_x,unknown112,extent_z; char unknown120[20]; void *linked; char unknown144[84];
 char resources[544]; int count; void *resources_pointer; int *count_pointer; Vector3 cached_position; float radius; void *linked_copy;
};
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((Object1a129c *)0)->field==offset?1:-1]
typedef char check_base_size[sizeof(Base1a129c)==28?1:-1];
CHECK(tag,0); CHECK(size30,30); CHECK(flags,52); CHECK(position,60); CHECK(extent_x,108); CHECK(extent_z,116); CHECK(linked,140);
CHECK(resources,228); CHECK(count,772); CHECK(resources_pointer,776); CHECK(count_pointer,780); CHECK(cached_position,784); CHECK(radius,796); CHECK(linked_copy,800);
typedef char check_object_size[sizeof(Object1a129c)==804?1:-1];
extern "C" Object1a129c *initialize_object_8c1a129c(Object1a129c *o,void *owner,void *argument) {
 Object1a129c **home=&o;
 ((void (*)(Object1a129c *,void *))0x8c051eb8)(o,owner);
 *(void **)((char *)o+24)=(void *)0x8c272e84;
 o->tag=*(unsigned int *)0x8c31d498;
 o->size30=804;
 o->configure(argument);
 o->flags|=0x40000000;
 ((void (*)(Object1a129c *))0x8c1a169c)(o);
 ((void (*)(Object1a129c *))0x8c1a1444)(o);
 o->count=8;
 o->resources_pointer=&o->resources;
 o->count_pointer=&o->count;
 o->cached_position=o->position;
 { Object1a129c *current=o;
   float x=current->extent_x*0.5f; x=x*x;
   float z=current->extent_z*0.5f; z=z*z;
   current->radius=x+z;
 }
 o->linked_copy=o->linked;
 if(*(void **)0x8c4dc5e0) ((void (*)(void *,Object1a129c *))0x8c1a19cc)(*(void **)0x8c4dc5e0,o);
 return o;
}
