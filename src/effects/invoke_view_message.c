#include "src/include/view_message_owner.h"
extern char view_message_data[];
void invoke_view_message(ViewMessageOwner *effect,void *target){((void (*)(void *,char *,int))0x8c12b154)(target,view_message_data+390,16);effect->count--;}
