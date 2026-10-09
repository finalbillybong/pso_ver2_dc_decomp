#include "src/include/vector3.h"
typedef struct Entry { int tag; char unknown4[12]; } Entry;
typedef struct Binding { const Entry *entries; Vector3 *output; } Binding;
typedef char check_entry_tag[(unsigned long)&((Entry *)0)->tag==0?1:-1];
typedef char check_entry[sizeof(Entry)==16?1:-1];
typedef char check_output[(unsigned long)&((Binding *)0)->output==4?1:-1];
typedef char check_binding[sizeof(Binding)==8?1:-1];
int validate_resource_entries(const Entry *entries) {
 int count=0;
 if(!entries) return 0;
 while(entries->tag!=-1) {
  if(count>=8) return 0;
  count++;
  entries++;
 }
 return 1;
}
