#include "src/include/alternate_render.h"
#define enable_at ((void (*)(void))0x8c0c773c)
#define configure_at ((void (*)(void))0x8c0c7784)
#define select_at ((void *(*)(void *,void *))0x8c0c7728)
#define draw_at ((void (*)(void *))0x8c01cc90)
#define restore_at ((void (*)(void))0x8c0c77b4)
#define disable_at ((void (*)(void))0x8c0c7760)
void draw_with_alternate_dispatch(AlternateDrawObject *object,void *parameter) {
 void *previous=object->dispatch;
 enable_at();configure_at();
 object->dispatch=select_at(previous,parameter);
 draw_at(object);
 restore_at();disable_at();
 object->dispatch=previous;
}
