#include<iostream>

using namespace std;

class P{
	private:
		float c;
	public:
		void setP(){
			cout << "Enter celsius: ";
			cin >> c;
		}
		float getP(){
			return c;
		}
};

class Q : public P{
	private:
		float F;
	public:
		void setQ(){
			setP();
		}
		float getQ(){
			F = getP()*1.8;
			return F;
		}
};

class R : public Q{
	private:
		float K;
	public:
		void setR(){
			setQ();
		}
		float getR(){
			K = ((getQ()+459.67)*5)/9;
			return K;
		}
};

int main(){
	R r;
	r.setR();
	cout << r.getR();
}
