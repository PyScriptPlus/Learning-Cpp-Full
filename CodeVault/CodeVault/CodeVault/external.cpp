// Global Variable goftam dige mitune ham Internal ham External bashe
// Baraye External shodan bayad az Keyword extern estefade shavad
// Va inke Global Variable gheyr constant be sorat
// Default External hast che extern gharar bedam che nadam
int g_x = 10;
extern int g_y = 20;

// Vali baraye constant ha niyaze in extern bezarim
// Chon Default ona Internal hast na External
extern const int g_z = 99;
extern constexpr int g_i = 6;

//-------------------------------------------------------//

// Hala Function ha chetor? Ona ro baladi dige
// Be sorat default External hast 
// Mitunim estefade konim kheyli azash estefade kardim
// Mesal:
bool isEqual(bool x, bool y) 
{
	return x == y;
}