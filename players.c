/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <kkuvalis@student.42.fr>          +0x+  +:+       +0x+        */
/*                                                +0x+0x+0x+0x+0x+   +0x+           */
/*   Created: 2019/03/17 17:30:14 by jbashiri          0x+0x    0x+0x             */
/*   Updated: 2019/05/08 10:17:44 by kkuvalis         0x   0x.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char     *get_alliance()
{
	char     *alliance =
			"16777215,16777215,15001318,9740194,927278,3227450,6313526,8612147,6445110,3227450,795950,9674146,15001062,16777215,16777215,16777215,"
			"14343130,1584694,5409,6116920,9071667,7429940,8415027,7364661,9137458,6314040,5410,1650230,14408922,16777215,15001836,"
			"2110006,3816229,6839353,7692596,5525815,2045244,2307900,1979708,5460023,7824180,6905145,4013349,2175542,15001836,9937318,"
			"6433,6839353,5919799,2439228,3555898,4934968,6576182,4606265,3621434,2439483,5722935,6839353,6432,9871782,533038,"
			"4409659,8546355,3752507,2439228,8086580,7035701,5722678,6510646,8349491,3096122,3686970,8612147,4606523,467502,1323069,"
			"4868921,10450736,4672056,1782844,4934712,7561268,5657144,7627061,5591351,2045500,4803384,10582064,5000504,1257533,1585725,"
			"3949625,6904630,1979708,1257533,4606520,9596977,9465650,10384945,5197368,1191742,1848380,6773301,4278073,1651261,1717052,"
			"3227195,7298869,5525559,2308156,8021300,11895343,9794097,12026926,8809011,2439228,5394232,6970165,3227451,1782844,1782588,"
			"2439483,9794097,9334065,2242364,4672056,9728305,7561269,9728562,5460024,2111036,9137458,9728305,2505019,1782588,1782845,"
			"2636347,7955252,8152371,1717052,863549,5788471,10647856,6313782,994877,1585724,7889716,8020788,2767674,1782845,1058605,"
			"1979967,4409401,7298613,4212281,2570556,4999993,9334578,5131832,2570812,4081209,7101749,4474937,2045502,1124141,10068645,"
			"138017,2242623,2767931,6576182,7495733,2373692,1323069,2242364,7364661,6510645,2636347,2177087,138017,10134181,15527147,"
			"2110006,467242,1651776,3818298,6839094,4278073,797502,3752506,6773301,4015161,1585984,532778,2110006,15527147,16777215,"
			"14146010,2110005,137760,1848638,2373691,6773302,6707766,6379318,2505020,1848638,137760,2110005,14146010,16777215,16777215,"
			"16777215,15132390,9871266,1058606,1651260,3884089,7233077,3884089,1651516,1058606,9871266,15132390,16777215,16777215";
	return (alliance);
}

char     *get_horde()
{
	char     *horde =
			"16777215,16777215,15263461,12033175,6627604,7548963,6170655,2888980,4070424,7155234,6364947,12033175,15394790,16777215,16777215,16777215,"
			"14735575,6236960,5049601,4792860,4595482,2495251,1313807,1576208,3808023,7089699,5574660,5974303,14801111,16777215,15592683,"
			"6039841,6757134,6105633,1642257,1116942,1510672,2692115,1904401,1182734,2954772,4595995,5904139,6171425,15592683,12099482,"
			"5640195,7024421,3610902,1314063,2167058,4923675,6236191,5711133,2889236,985614,2561042,6827556,5640197,12099226,6102547,"
			"7352100,4004887,1182478,1839121,5711133,6433056,3020308,5842462,6367520,2166801,1313806,4267544,7417893,6102291,6892578,"
			"7023906,5579805,2167057,2823188,7220770,4332825,526091,3479574,6958113,2823443,2035729,5514269,7220514,6892578,7089442,"
			"5579805,6104862,4398617,2429458,6958114,6236447,3020308,5514269,6695713,2232594,4070424,6301984,5908254,7023906,7220514,"
			"6301983,3151636,2035729,1248271,4989211,7614500,6892578,7548964,5382940,1313807,1904656,2692115,5776926,7286306,6958113,"
			"7352099,5317403,2954516,3414037,2823443,6104863,7548964,6695713,3085844,3086101,2561043,4267032,7286307,6958113,6892578,"
			"6958114,7023906,6892578,7286307,4201496,4070424,7417891,4267033,3873559,7155235,6630177,6826785,7023650,6892578,6102547,"
			"7024163,7023650,7023906,7286563,6170655,3808023,6433312,2888980,4267289,6827041,7220515,7089443,7024163,6102547,12099482,"
			"5443331,7155492,7023906,6827041,4332825,2889237,6367520,2888979,2035729,6301984,7220771,7155492,5443587,12099482,15592683,"
			"6039841,6035211,7286821,7023650,3085844,2035985,6498848,3479830,4070424,7154979,7155492,6035468,6040096,15592683,16777215,"
			"14735575,6039840,5443331,7352101,5579805,3085844,6433056,5908254,6630177,7155492,5443331,6040095,14801111,16777215,16777215,"
			"16777215,15263461,11967383,6102290,6892577,5383196,6564385,7351843,7023907,6037010,11967383,15263461,16777215,16777215";
	return (horde);
}

char*   get_undead()
{
	char    *undead=
			"16514043,16777215,16777215,16777215,16777215,16777215,16777215,10062491,13684434,16777215,16777215,16777215,16777215,16777215,16579836,16777215,"
			"16777215,16777215,16710644,12367007,10923168,13491925,10393226,15854059,16777215,16777215,16777215,16777215,16777215,16777215,16777215,"
			"16777215,15918808,4215097,1529421,3888450,2120274,2901560,10196617,16777215,16777215,16777215,16777215,16777215,16777215,16777215,"
			"16777215,15129796,6121047,3495512,8422507,5133636,7306100,7505285,11316381,16776441,16777215,16777215,16777215,16777215,16777215,"
			"16777215,16777215,16777215,7692109,1772544,10201510,16777215,16777215,1846838,11182209,16777215,16777215,16777215,16777215,16777215,"
			"16777215,16777215,16777215,9809054,9521,5988714,12173256,9009047,1452107,4017730,12958649,11447475,14013654,16777215,16711423,"
			"15395307,11379890,8219745,4414803,3173497,5857638,13026505,10789834,2835286,526861,1839906,2498093,10986920,16777215,16777215,"
			"16316665,14868708,9998213,1252892,1851477,3294804,9801887,7768995,1586248,1186852,5656137,14210779,16645629,16777215,16777215,"
			"16777215,16777215,16777203,3291696,1129041,1389120,3291468,2240834,1846071,1976626,12761767,16777215,16777215,16777215,16777215,"
			"16777215,16711422,8750210,2366480,923933,1192253,660242,2899274,3161931,196612,7893116,16777215,16777215,16777215,16777215,"
			"16777215,16053749,11580343,10460823,0,0,921361,2567736,660255,3091240,7432310,12367809,16777215,16777215,16777215,"
			"16777215,16580093,16777215,12304065,6777193,7762547,3747902,1051924,0,12105648,16777215,15197928,16711422,16777215,16777215,"
			"16777215,16777215,16777215,15330026,16777215,16777215,4273995,0,7762016,16777215,16777215,16777215,16777215,16777215,16777215,"
			"16777215,16777215,16777215,16777215,16777215,16645630,5657435,0,16447988,16777215,16777215,16777215,16777215,16777215,16579836,"
			"16777215,16777215,16777215,16777215,16777215,16777215,8488325,9409944,16777215,16777215,16777215,16777215,16777215,16645629";

	return (undead);
}

char*   get_elf()
{
	char    *undead=
			"16777215,16250871,16316663,16777215,16777215,16514300,15460577,15131615,16052715,16777215,16777215,16777215,16777215,16777215,16777215,16777215,"
			"15395563,15330285,15658219,13811877,10520151,7364458,4864860,7428668,10981484,13879483,16316150,16645374,16777215,16777215,16777215,"
			"16711423,15660027,13023648,3414016,1837854,7364980,7102311,2693940,655360,8546892,16118770,15593462,16053238,16645629,16777215,"
			"15724269,12693671,10984342,5656681,5260657,6049106,6378834,5983080,4800848,8354183,7627360,13549739,16317695,16711422,16777215,"
			"12365737,8088667,4669003,8220538,8813441,4865609,6575451,6115664,9208203,3417950,1904928,9339241,14539485,16777215,16052978,"
			"8808264,4800822,3749208,2034484,6181198,10130325,7825251,6049607,4535887,3877209,6185328,4535326,12758425,16777215,14801099,"
			"5256473,1774370,2233160,4730970,4930861,10196382,10458773,4930630,4338985,5062217,1445438,2098713,9863003,16777215,14274491,"
			"3217416,2366523,3482968,4009026,4866354,6115176,8024437,4865616,5195054,3679309,2957668,1837101,7955526,16777215,14932685,"
			"4927255,2826552,3089225,3418186,3682868,6971760,7957620,3681589,4932918,3217512,2627181,3020825,10257504,16777215,16184563,"
			"8413757,3548456,3222341,5064527,2827559,5655387,8615552,3352365,3945788,4997980,1708603,4860690,13942690,16777215,16777215,"
			"13088415,3416077,35,1247049,3284044,6247526,10393508,6444119,3087676,1115718,262160,7166018,16447216,16777215,16777215,"
			"16316923,5720140,2430229,57,40,9867158,13881551,1905449,44,1968437,3811361,11051943,16777215,16777215,16777215,"
			"15856631,12105671,9270368,5583636,2233859,9341840,4604501,196609,4269338,9598283,10457993,16316925,16777215,16777215,16777215,"
			"16776958,15132906,11776699,14405044,12559744,7035989,0,7297095,14401942,15328475,10461098,16185078,16777215,16777215,16777215,"
			"16777215,15658733,15658992,16777215,16777215,14933721,9274755,15724271,16777215,16777215,14737632,16185078,16777215,16777215";
	return (undead);
}
