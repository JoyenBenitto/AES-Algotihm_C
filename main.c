
//   Rijndael Algorithm         
//
//
//              ___________________                 ____________________                  _________________ 
//             |                   |               |                    |                |                 |
//             |   128 bit Input   |  --------->   |        AES         |  ----------->  | 128 bit output  |
//             |___________________|               |____________________|                |_________________|
//                                                           ^
//                                                           | 
//                                                           |
//                                                           |
//                                                  ____________________
//                                                 |                    |
//                                                 |     128/192/256    |
//                                                 |____________________|
//
//  ___________________________________________________________________________________________________________________________________________________________________
//
//
//
//
//  The AES Algorithm is a 128 bits (16 bytes) symmetric block cypher that means it takes 128 bits size of message and encrypts it 
//  into 128 bits of cypher texts witn some key and now that key can be 128,192 or 256
//  Unlike other cyphers whick likes to arrange things in the form of long text, the AES Cypher likes to arrange things in the form 
//  of a 4 X 4 grid 
//  
//  B0, B1 ............. ------> Byte 1, Byte 2, .......................
//
//    ____________________________________________  ____________________________________________  ____________________________________________  ____________________________________________
//   |          |          |          |           ||          |          |          |           ||          |          |          |           ||          |          |          |           |
//   |          |          |          |           ||          |          |          |           ||          |          |          |           ||          |          |          |           |
//   |    B0    |    B1    |    B2    |    B3     ||    B4    |    B5    |    B6    |    B7     ||    B8    |    B9    |    B10   |     B11   ||   B12    |    B13   |    B14   |    B15    |
//   |          |          |          |           ||          |          |          |           ||          |          |          |           ||          |          |          |           |
//   |__________|__________|__________|___________||__________|__________|__________|___________||__________|__________|__________|___________||__________|__________|__________|___________|
//                                        
//                                                        |
//                                                        |
//                                                        |
//                                _______________________ |
//                               |                       || 
//                               | Converting to coloumn ||
//                               |           major order ||
//                               |_______________________||
//                                                        |
//                                                        |
//                                                        |  
//                                                        |
//                                                        | 
//                                   ____________________________________________
//                                  |          |          |          |           |
//                                  |          |          |          |           |
//                                  |    B0    |    B4    |    B8    |    B12    |
//                                  |          |          |          |           |
//                                  |__________|__________|__________|___________|
//                                  |          |          |          |           |
//                                  |          |          |          |           |
//                                  |    B1    |    B5    |    B9    |    B13    |
//                                  |          |          |          |           |
//                                  |__________|__________|__________|___________|
//                                  |          |          |          |           |
//                                  |          |          |          |           |
//                                  |    B2    |    B6    |    B10   |    B14    |
//                                  |          |          |          |           |
//                                  |__________|__________|__________|___________|
//                                  |          |          |          |           |
//                                  |          |          |          |           |
//                                  |    B3    |    B7    |    B11   |    B15    |
//                                  |          |          |          |           |  
//                                  |__________|__________|__________|___________| 
//
//
//
//
// When the bytes are arranged in this order we are going to start doing out sp netowork and then we're going to permute we are going to substitute bytes and then we're going to 
// transform this into someway where an attacker can't read what the message used to be. So there are few different operations AES will do but it should me noted that whatever happens
// in AES happens in the above 4 X 4 grid. 
//
// 
//
//_______________________________________________________________________________________________________________________________________________________________________
//

#include <stdio.h>
#include <math.h>

int main()
{
       
    return 0;
}