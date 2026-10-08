#include "src/include/transform_tracks.h"
#define current (*(TrackState **)0x8c46f440)
void initialize_transform_tracks(TrackInput *input,float frame) {
 int kind, stride;
 char *cursor;
 if(!input) input=(TrackInput *)0x8c2857a0;
 kind=(input->layout & 0xc0)>>6;
 current->cursor=input->keys;
 current->unknown18=input->count;
 current->flags=input->flags;
 current->frame=frame;
 current->index=0;
 stride=(input->layout & ~0xc0)*4;
 current->stride=stride;
 current->step=stride+stride;
 cursor=current->cursor;
 current->first=(void **)cursor;
 current->second=(unsigned int *)(cursor+current->stride);
 current->index=0;
 current->vector=*(void (**)(void *,unsigned int,void *,float))(0x8c305fa0+(kind<<2));
 current->angle=*(void (**)(void *,unsigned int,void *,float))(0x8c305fac+(kind<<2));
 current->third=*(void **)0x8c305fb8;
}
