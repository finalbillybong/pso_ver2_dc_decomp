#include "src/include/vector3.h"
typedef struct Entry { int tag; char unknown4[12]; } Entry;
typedef struct Binding { const Entry *entries; Vector3 *output; } Binding;
typedef char check_entry_tag[(unsigned long)&((Entry *)0)->tag==0?1:-1];
typedef char check_entry[sizeof(Entry)==16?1:-1];
typedef char check_output[(unsigned long)&((Binding *)0)->output==4?1:-1];
typedef char check_binding[sizeof(Binding)==8?1:-1];
extern int validate_at(const Entry *);
extern void *allocate_at(unsigned int);
extern const Vector3 default_output;
Binding *create_resource_binding(const Entry *entries,Vector3 *output) {
 Binding *binding;
 if(validate_at(entries)) {
 binding=(Binding *)allocate_at(8);
 if(binding) {
  const Entry *cursor;
  Vector3 *destination;
  binding->entries=entries;
  binding->output=output;
  cursor=binding->entries;
  destination=binding->output;
  while(cursor->tag!=-1) { *destination=default_output; cursor++; destination++; }
 }
 return binding;
 }
 return 0;
}
