#include"tablenn.h"
using namespace std;
Tableplayer::Tableplayer(const string& v1, bool v2):name(v1),Hastable(v2) {

}

void Tableplayer::show() {
	cout << "name: " << name << endl << "has table: " << Hastable<<endl;
}

void Tableplayer::set_table(bool u){
	Hastable = u;
}

Ratedplayer::Ratedplayer(int i, const string& v1, bool v2):rated(i),Tableplayer(v1,v2)
{
}

Ratedplayer::Ratedplayer(int i, Tableplayer& v):rated(i),Tableplayer(v)
{
}

void Ratedplayer::set_rated(int r)
{
	rated = r;
}

void Ratedplayer::show_rated()
{
	cout << "rated: " << rated << endl;
}
