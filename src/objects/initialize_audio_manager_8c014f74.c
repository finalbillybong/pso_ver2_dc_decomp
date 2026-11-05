#include "src/include/classes/TObject.h"
extern TObject *audio_manager;
extern void TObject_ctor_8c0330e4(TObject *);
extern void view_set_ofs_wrapper_8c014fcc(TObject *);
extern void view_set_eye_wrapper_8c014fe4(TObject *);
extern void view_set_at_wrapper_8c015004(TObject *);
TObject *initialize_audio_manager_8c014f74(TObject *o)
{
    TObject **home = &o;
    (void)home;
    {
        TObject *base = o;
        TObject_ctor_8c0330e4(base);
        base->vtable = (void *)0x8c261240;
    }
    o->vtable = (void *)0x8c26117c;
    view_set_ofs_wrapper_8c014fcc(o);
    view_set_eye_wrapper_8c014fe4(o);
    view_set_at_wrapper_8c015004(o);
    audio_manager = o;
    return o;
}
