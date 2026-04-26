// Khob hala berim bebinim chejuri mishe Decimal tabdil kard be Binary
// Baraye in rah 2 ravesh vojud dare
// Ravesh 1:
// Taghsim sahih be 2 va baghimande hash mishe Binary
// ( r ) ke neveshtam payin baghimande hast
// Mesal: 53
// 53 / 2 --> 26 r1
// 26 / 2 --> 13 r0
// 13 / 2 --> 6  r1
// 6  / 2 --> 3  r0
// 3  / 2 --> 1  r1
// 1  / 2 --> 0  r1

// Az payin be bala minevsim samt chap: 110101

//-------------------------------------------------------//

// Ravesh dovvom:
// Ma ye list tavan 2 darim dige hamo:
// 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 va ...
// Miaym on adad Decimal ke dadan behemun bozorg tarin adad va kochik tarinesho peyda mikonim
// Yani mesal:
// 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 va ...
// Decimal: 53
// Bozorg tarin to in list ke az 53 bozorg tar hast 32 has
// Khob adad ma shod 32
// 53 >= 32 --> 1  53 - 32 = 21
// 21 >= 16 --> 1  21 - 16 = 5
// 5  >= 8  --> 0
// 5  >= 4  --> 1  5 - 4 = 1
// 1  >= 2  --> 0
// 1  >= 1  --> 1

// Az samt bala be payin az samt chap minevisim: 110101

// Kheyli rahate motavajeh shodi age javab true bod 1 mizarim va kam mikonim mirim
// Soragh ba'adi age false bod 0 mirim ba'adi