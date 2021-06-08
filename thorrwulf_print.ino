#include <Keyboard.h>

void setup() {
  Keyboard.begin();
delay(2000);
    
type(KEY_LEFT_CTRL,false);
Keyboard.releaseAll();
delay(2000);

print(F("    .....                                                                                                    ..           "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F(" .H8888888h.  ~-.    .uef^'                                            x=~                             x .d88'     oec :  "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F(" 888888888888x  `> :d88E              u.      .u    .      .u    .    88x.   .e.   .e.     x.    .      5888R     @88888  "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("X~     `?888888hx~ `888E        ...ue888b   .d88B :@8c   .d88B :@8c  '8888X.x888:.x888   .@88k  z88u    '888R     8'*88%  "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("'      x8.^'*88*'   888E .z8k   888R Y888r ='8888f8888r ='8888f8888r  `8888  888X '888k ~'8888 ^8888     888R     8b.     "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F(" `-:- X8888x        888E~?888L  888R I888>   4888>'88'    4888>'88'    X888  888X  888X   8888  888R     888R    u888888> "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("      488888>       888E  888E  888R I888>   4888> '      4888> '      X888  888X  888X   8888  888R     888R     8888R   "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("    .. `'88*        888E  888E  888R I888>   4888>        4888>        X888  888X  888X   8888  888R     888R     8888P   "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("  x88888nX'      .  888E  888E u8888cJ888   .d888L .+    .d888L .+    .X888  888X. 888~   8888 ,888B .   888R     *888>   "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F(" !'*8888888n..  :   888E  888E  '*888*P'    ^'8888*'     ^'8888*'     `%88%``'*888Y'     '8888Y 8888'   .888B .   4888    "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("'    '*88888888*   m888N= 888>    'Y'          'Y'          'Y'         `~     `'         `Y'   'YP     ^*888%    '888    "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("        ^'***'`     `Y'   888                                                                             '%       88R    "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("                         J88'                                                                                      88>    "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("                         @%                                                                                        48     "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);

print(F("                       :'                                                                                          '8   "));
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(200);
Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}
