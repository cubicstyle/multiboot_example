#include <gba.h>

extern const unsigned short name_data1[];

int main(){
  u16 i,j;
  u16* bg = (u16*)0x6000000;
  SetMode( MODE_3 | BG2_ENABLE );

  for(i=0; i<240*160; i++){
     bg[i] = RGB5(31, 31, 31);
  }

  for(i=0, j=240*56; i<11520; i++,j++){
     bg[j] = name_data1[i];
  }
  
  return 1;
}
