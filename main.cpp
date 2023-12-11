#include <stdio.h>
#include <list>

int main() {

	std::list<const char*> list{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"};
	int stationNo = 0;

	printf("山手線の各年代の駅一覧\n");
	printf("1970年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); itr++) {
		printf("JY%d %s\n",++stationNo,*itr);
	}
	stationNo = 0;
	printf("\n");

	printf("2019年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); itr++) {
		if (*itr == "Tabata") {
			itr = list.insert(itr, "Nishi-Nippori");
			printf("JY%d %s\n", ++stationNo, *itr);
			++itr;
		}
		printf("JY%d %s\n", ++stationNo, *itr);
	}
	stationNo = 0;
	printf("\n");

	printf("2022年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = list.insert(itr, "Takanawa Gateway");
			printf("JY%d %s\n", ++stationNo, *itr);
			++itr;
		}
		printf("JY%d %s\n", ++stationNo, *itr);
	}

	return 0;
}