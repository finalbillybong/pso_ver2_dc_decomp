#ifndef PSO_OBJECT_VTABLE_H
#define PSO_OBJECT_VTABLE_H
/* The vtable pointer of a TObject-derived object, at +0x18 after the 0x18-byte TObject header.
 * In C the class headers name it as a member; in C++ it is the implicit vptr of the class's
 * virtual slots, so constructors and destructors that install a vtable store it through this. */
#define TOBJECT_VTABLE(o) (*(void **)((char *)(o) + 0x18))
#endif
