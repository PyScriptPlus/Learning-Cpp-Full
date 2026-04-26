// In mabhas Function Expansion dar mored behine kardan
// Function ha hast
// Makhsusan Function hayi ke kochik hastand code kam tari daran
// Sari ejra mishan

// Mesal: Code benevis minimum 2 ta adad bege

int min(int x, int y) {
	return ((x < y) ? x : y);
}

int main() {

	min(5 , 3); 
	// In vaghti call mikoni
	// CPU mire soragh function min 
	// Chand kari ro anjam mide
	// Avval Address fe'li Instrcution zakhire mikone
	// Ya'ni address jayi ke gharar dare zakhire mikone ta befahme
	// Statement ba'adi ke mikhad ejra kone chiye
	// Ba'ad miad Parameter haye Function ro Instance mikone
	// Takhsis hafeze
	// Ba'ad miad hamon Parameter haro Initialization mikone
	// Meghdar dahi avvali on adad hayi ke 5 , 3 ro behesh pass dadim
	// Mishune sar jashon

	// Khob inayi ke goftam yek Sar bari hastand ya behtare begim
	// Overhead hala in Overhead mesal (5 nano sec) tul mikeshe
	// Code haye dakhel Function mesal (10 nano sec) dar in halat
	// Behtare vali age Zaman ejraye Function mesal dar (2 nano sec)
	// Tul bekeshe va on Overhead (5 nano sec) Performance miad payin
	// Mesal hamin Function ro 100 bar Call kardi
	// Khob dige sor'at barname kamel miad payin

	// Rah hal?
	// Estefade az inline expansion ke jalase ba'adi migam

	// Va in inline expansion ham hazine dare 
	// Mitune ba'es afzayesh Performance ya kahesh Performance bashe

	// Baraye har Function 3 halat vojud darad:
	// 1- On Function bayad Expansion beshe
	// 2- Momkene ya mitune beshe
	// 3- Ya kolan nemitune Expansion she
	// Aksar Function ha hamin daste 2 hastand


	return 0;
}
