// sevomin Property Linkage hast:
// Ke ye mesal mizanm kamel dark konim mafhumesho
// Ma 2 ta Variable darim ba Identifier haye yeksan  mesal: (x)
// Mesal codi zadam payin
// Hala Linkage be ma mige aya in 2 ta (x) ha be yek Object dar hafeze RAM eshare darand
// Ya joda joda hastand har kodum be Object dige dar hafeze RAM eshare darand
// Mafhum kamel dark in dar ayande migim kamelesho

#include <iostream>

int main() {

	int x = 4;
	{
		int x = 5;
	}
	// Hala ye code sade zadam jolo tar ha mifahmim chejurie kamel
	// x balayi ba x ke dar Nested Block ta'rif shode 
	// Be ham hich rabti nadard
	// Har kodum be yek Object dige dar hafeze RAM eshare darand
	// Ta haminja bedon!!!

	return 0;
}