#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

// معایب روش اول:
// Vaghti miaym on HeaderFile ke darunesh in maghadir hast
// Include mikonim dar vaghe ina mian Copy mishan
// Engar dar constexpr ba'ad C++17 dorust shode
// Hala farz kon Variable sade bod bale miomad Copy migerft
// Ravesh khubi nist 

// Va yek eyb dige ham dare in ravesh
// Age dar HeaderFile yek chizi taghir bedim 
// Bayad hameye on source code hayi ke darunesh in HeaderFile 
// Include kardim yek dor hamashon ro Recompile konim!!!

namespace constants
{
	constexpr double pi = 3.14;
	constexpr double avogadro = 6.022;
	constexpr double myGravity = 9.2;
}

#endif
